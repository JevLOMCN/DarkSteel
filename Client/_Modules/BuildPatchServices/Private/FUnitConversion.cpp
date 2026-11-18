// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Convert<int> @ 143215150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUnitConversion::Convert<int>(int param_1,EUnit param_2,EUnit param_3)

{
  bool bVar1;
  EUnitType EVar2;
  double dVar3;
  double dVar4;
  
  bVar1 = AreUnitsCompatible(param_2,param_3);
  if (((bVar1) && (param_2 != Unspecified)) && (param_3 != Unspecified)) {
    EVar2 = GetUnitType(param_2);
    switch(EVar2) {
    case Distance:
      dVar3 = UnitConversion::DistanceUnificationFactor(param_2);
      dVar4 = UnitConversion::DistanceUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Angle:
      dVar3 = UnitConversion::AngleUnificationFactor(param_2);
      dVar4 = UnitConversion::AngleUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Speed:
      dVar3 = UnitConversion::SpeedUnificationFactor(param_2);
      dVar4 = UnitConversion::SpeedUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case AngularSpeed:
      dVar3 = UnitConversion::AngularSpeedUnificationFactor(param_2);
      dVar4 = UnitConversion::AngularSpeedUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Acceleration:
      dVar3 = UnitConversion::AccelerationUnificationFactor(param_2);
      dVar4 = UnitConversion::AccelerationUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Temperature:
      dVar3 = (double)param_1;
      if (param_2 == Celsius) {
        dVar3 = dVar3 + __real_4071126666666666;
      }
      else if (param_2 == Farenheit) {
        dVar3 = dVar3 * ___real_3fe1c71c71c71c72 + ___real_406febe93e93e93e;
      }
      if (param_3 == Celsius) {
        dVar3 = dVar3 - __real_4071126666666666;
      }
      else if (param_3 == Farenheit) {
        return (int)(dVar3 * __real_3ffccccccccccccd - ___real_407cbab851eb851f);
      }
      param_1 = (int)dVar3;
      break;
    case Mass:
      dVar3 = UnitConversion::MassUnificationFactor(param_2);
      dVar4 = UnitConversion::MassUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Density:
      dVar3 = UnitConversion::DensityUnificationFactor(param_2);
      dVar4 = UnitConversion::DensityUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Force:
      dVar3 = UnitConversion::ForceUnificationFactor(param_2);
      dVar4 = UnitConversion::ForceUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Torque:
      dVar3 = UnitConversion::TorqueUnificationFactor(param_2);
      dVar4 = UnitConversion::TorqueUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    default:
      goto switchD_1432151b8_caseD_a;
    case PositionalImpulse:
      dVar3 = UnitConversion::PositionalImpulseUnificationFactor(param_2);
      dVar4 = UnitConversion::PositionalImpulseUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Frequency:
      dVar3 = UnitConversion::FrequencyUnificationFactor(param_2);
      dVar4 = UnitConversion::FrequencyUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case DataSize:
      dVar3 = UnitConversion::DataSizeUnificationFactor(param_2);
      dVar4 = UnitConversion::DataSizeUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Time:
      dVar3 = UnitConversion::TimeUnificationFactor(param_2);
      dVar4 = UnitConversion::TimeUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Multipliers:
      dVar3 = UnitConversion::MultiplierUnificationFactor(param_2);
      dVar4 = UnitConversion::MultiplierUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
      break;
    case Stress:
      dVar3 = UnitConversion::StressUnificationFactor(param_2);
      dVar4 = UnitConversion::StressUnificationFactor(param_3);
      param_1 = (int)((dVar3 * (double)param_1) / dVar4);
    }
  }
  else {
switchD_1432151b8_caseD_a:
  }
  return param_1;
}

