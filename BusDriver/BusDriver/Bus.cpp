#include "MyForm.h"
#include <Windows.h>
#include <map>
using namespace BusDriver;

class Bus
{
	// создание полей
private:int route = 1;
private:bool status_trip = false;
private:bool doors_open_status = false;
private:bool ramp_open_status = false;
private:int bus_count = 0;
private:int route_count;
private:bool confirm_status = false;
private: bool stop_flag = false;
Bus() {//конструктор
	//	route = route_input;

	}
	;
public:
	
	void numberRoute(int route_input) {
		route = route_input;
		if (route == 1) {
			bus_count = 4;
			route_count = 4;
		}
		if (route == 2) {
			bus_count = 5;
			route_count = 5;
		}
		if (route == 3) {
			bus_count = 6;
			route_count = 6;
		}
		if (route == 4) {
			bus_count = 7;
			route_count = 7;
		}
	}
	void confirm() {
		confirm_status = true;
	}
	void unconfirm() {
		confirm_status = false;
	}
	bool getConfirmStatus() {
		return confirm_status;
	}
	void prepared() {//метод подготовки автобуса к маршруту
		status_trip = true;
		doors_open_status = false;
		ramp_open_status = false;
	}
	void unprepared() {// метод отмены подготовки
		status_trip = false;
		doors_open_status = false;
		ramp_open_status = false;
	}


	bool goToNextStop() {// движение к следующей остановке

		if (doors_open_status == true) {
			return false;
		}
		else {

			bus_count--;
			return true;


		}
	}
	int getCountOfStops() {
		return bus_count;
	}
	bool openDoors() {// метод открытия дверей
		if (doors_open_status == false) {
			doors_open_status = true;
			return true;
		}
		else {
			return false;
		}

	}
	bool lowRamp() {//метод закрытия дверей
		if (ramp_open_status == false) {
			ramp_open_status = true;
			return true;
		}
		else {
			return false;
		}
	}
	bool closeDoors() {
		if (doors_open_status == true) {
			doors_open_status = false;
			return true;
		}
		else {
			return false;
		}

	}
	bool raiseRamp() {
		if (ramp_open_status == true) {
			ramp_open_status = false;
			return true;
		}
		else {
			return false;
		}
	}
	bool sobitie() {
		return true;
	}
	bool getDoorsStatus() {
		return doors_open_status;
	}
	bool getRampStatus() {
		return ramp_open_status;
	}
	bool getPreparationStatus() {
		return status_trip;
	}
	int getRouteLength() {
		return route_count;
	}
	bool stopCheck() {
		return stop_flag;
	}
	void busStop() {
		stop_flag = true;
	}
	void busStopFinished() {
		stop_flag = false;
	}

};

//Bus::Bus()
//{
//}

//Bus::~Bus()
//{
//}