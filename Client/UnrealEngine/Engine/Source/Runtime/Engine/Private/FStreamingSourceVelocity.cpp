// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FStreamingSourceVelocity @ 148ae9a80

FStreamingSourceVelocity * __thiscall
FStreamingSourceVelocity::FStreamingSourceVelocity(FStreamingSourceVelocity *this,FName *param_1)

{
  undefined8 uVar1;
  
  this->bIsValid = false;
  this->SourceName = *param_1;
  this->LastUpdateTime = -1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// GetAverageVelocity @ 148af03d0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FStreamingSourceVelocity::GetAverageVelocity
          (FStreamingSourceVelocity *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FString local_98;
  FString local_88;
  FString local_78 [6];
  
  dVar10 = __real_3ff0000000000000;
  dVar9 = this->LastUpdateTime;
  this->bIsValid = true;
  dVar8 = dVar10;
  if ((0.0 < dVar9) && (dVar8 = param_2 - dVar9, param_2 - dVar9 <= 0.0)) {
    if (5 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(&this->SourceName,&local_88);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->AvgVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->AvgVelocity).field0_0x0._s_0.Y = (double)uVar6;
    (this->AvgVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    goto LAB_148af0877;
  }
  this->LastUpdateTime = param_2;
  dVar4 = (param_1->field0_0x0)._s_0.Y - (this->LastPosition).field0_0x0._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X - (this->LastPosition).field0_0x0._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z - (this->LastPosition).field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = dVar10 / dVar8;
  (this->LastPosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LastPosition).field0_0x0._s_0.Y = dVar1;
  (this->LastPosition).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (0.0 >= dVar9) {
    if (5 < (byte)LogWorldPartition._0_1_) {
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FName::ToString(&this->SourceName,&local_88);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->AvgVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->AvgVelocity).field0_0x0._s_0.Y = (double)uVar6;
    (this->AvgVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    goto LAB_148af0877;
  }
  if (dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 <= __real_4197d78400000000) {
    if (dVar8 <= __real_4014000000000000) {
      dVar9 = dVar8 * __real_4059000000000000;
      if (dVar10 <= dVar8 * __real_4059000000000000) {
        dVar9 = dVar10;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      dVar10 = dVar10 - dVar9;
      dVar8 = (this->AvgVelocity).field0_0x0._s_0.Y;
      dVar1 = (this->AvgVelocity).field0_0x0._s_0.Z;
      (this->AvgVelocity).field0_0x0._s_0.X =
           dVar9 * dVar5 * dVar3 + dVar10 * (this->AvgVelocity).field0_0x0._s_0.X;
      (this->AvgVelocity).field0_0x0._s_0.Y = dVar9 * dVar5 * dVar4 + dVar10 * dVar8;
      (this->AvgVelocity).field0_0x0._s_0.Z = dVar10 * dVar1 + dVar9 * dVar5 * dVar2;
      goto LAB_148af0877;
    }
    if (5 < (byte)LogWorldPartition._0_1_) {
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FName::ToString(&this->SourceName,local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        FVar7.Data = local_98.Data.AllocatorInstance.Data;
      }
      goto LAB_148af07cd;
    }
  }
  else if (5 < (byte)LogWorldPartition._0_1_) {
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FName::ToString(&this->SourceName,local_78);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
LAB_148af07cd:
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AvgVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AvgVelocity).field0_0x0._s_0.Y = (double)uVar6;
  (this->AvgVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_148af0877:
  dVar10 = (this->AvgVelocity).field0_0x0._s_0.Y;
  dVar9 = (this->AvgVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->AvgVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  return __return_storage_ptr__;
}

