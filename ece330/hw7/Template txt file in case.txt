class Trip
  def initialize
    @transport = nil
    @day1_afternoon_activity = nil
    @day2_activity = nil
    @day3_activity = nil
    @day4_activity = nil
  end

  def organize_trip
    arrange_transport
    introduce_at_arrival
    do_day1_afternoon_activity
    do_day2_activity
    do_day3_activity
    do_day4_activity
    conclude_trip
    arrange_transport_back
  end

  def arrange_transport
    @transport = "Transport from hotel to meeting place"
    puts @transport
  end

  def introduce_at_arrival
    puts "Arrival Introduction meeting & brunch"
  end

  def do_day1_afternoon_activity
    @day1_afternoon_activity = "Self-directed tour"
    puts @day1_afternoon_activity
  end

  def do_day2_activity
    @day2_activity = "Shopping"
    puts @day2_activity
  end

  def do_day3_activity
    @day3_activity = "Sight seeing"
    puts @day3_activity
  end

  def do_day4_activity
    @day4_activity = "Eating at local famous restaurants"
    puts @day4_activity
  end

  def conclude_trip
    puts "Trip Conclusion Social"
  end

  def arrange_transport_back
    puts "Transport back to hotel"
  end
end

class PackageA < Trip
  def do_day2_activity
    @day2_activity = "Mall visit"
    puts @day2_activity
  end

  def do_day3_activity
    @day3_activity = "City Culture tour"
    puts @day3_activity
  end

  def do_day4_activity
    @day4_activity = "Must-try Dining Spots"
    puts @day4_activity
  end
end

class PackageB < Trip
  def do_day2_activity
    @day2_activity = "Museum visit"
    puts @day2_activity
  end

  def do_day3_activity
    @day3_activity = "Zoo visit"
    puts @day3_activity
  end

  def do_day4_activity
    @day4_activity = "Nightlife experience"
    puts @day4_activity
  end
end

class PackageC < Trip
  def do_day1_afternoon_activity
    @day1_afternoon_activity = "City sightseeing tour"
    puts @day1_afternoon_activity
  end

  def do_day2_activity
    @day2_activity = "Local attractions"
    puts @day2_activity
  end

  def do_day3_activity
    @day3_activity = "Beach Day"
    puts @day3_activity
  end

  def do_day4_activity
    @day4_activity = "Food carts"
    puts @day4_activity
  end
end

class PackageD < Trip
  def do_day2_activity
    @day2_activity = "Observatory"
    puts @day2_activity
  end

  def do_day3_activity
    @day3_activity = "Downtown"
    puts @day3_activity
  end

  def do_day4_activity
    @day4_activity = "Park visit"
    puts @day4_activity
  end
end