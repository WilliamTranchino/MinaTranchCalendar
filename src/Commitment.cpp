/*
 * Commitment.cpp
 *
 *  Created on: 08 giu 2018
 *      Author: Minarelli
 */

#include "Commitment.h"

/**
	Costructor 
	@param start: the day (d / m / y) in which the commitment start
	@param end: the day (d/ m/ y) in which the commitment ends
	@param startT: the time (h / m / s) in which the commitment start
	@param endT: the time (h / m / s) in which the commitment end
	@param repeat: specifies if the commitment will be repeated
	@param note: the note that will be attached to the commitment
	@param u: the url of the commitment
	@param users: list of the users that will be involved in th commitment
*/
Commitment::Commitment(Date start, Date end, Time startT, Time endT, bool repeat,
			std::string note, std::string u, std::list<User> users) :
			startDate(start), endDate(end), startTime(startT),
			endTime(endT), repeated(repeat), notes(note),
			url(u), involvedUsers(users){};

/**
	Costructor where the list of the users that will be involved in th commitment is initially empty
	@param start: the day (d / m / y) in which the commitment start
	@param end: the day (d/ m/ y) in which the commitment ends
	@param startT: the time (h / m / s) in which the commitment start
	@param endT: the time (h / m / s) in which the commitment end
	@param repeat: specifies if the commitment will be repeated
	@param note: the note that will be attached to the commitment
	@param u: the url of the commitment
*/
Commitment::Commitment(Date start, Date end, Time startT, Time endT, bool repeat,
			std::string note, std::string u) :
			startDate(start), endDate(end), startTime(startT),
			endTime(endT), repeated(repeat), notes(note),
			url(u){
	std::list<User> involvedUsers;
};


Commitment::~Commitment() { }
 /**
 	The following methods are getters
 */
const Date& Commitment::getEndDate() const {
	return endDate;
}

const Time& Commitment::getEndTime() const {
	return endTime;
}

const std::list<User>& Commitment::getInvolvedUsers() const {
	return involvedUsers;
}

const std::string& Commitment::getNotes() const {
	return notes;
}

bool Commitment::isRepeated() const {
	return repeated;
}

const Date& Commitment::getStartDate() const {
	return startDate;
}

const Time& Commitment::getStartTime() const {
	return startTime;
}

const std::string& Commitment::getUrl() const {
	return url;
}
