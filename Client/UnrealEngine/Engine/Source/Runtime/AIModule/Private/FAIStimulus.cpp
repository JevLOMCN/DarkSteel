// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// StaticStruct @ 146f855a0

UScriptStruct * __cdecl FAIStimulus::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIStimulus.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIStimulus.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIStimulus,(UObject *)pUVar1,L"AIStimulus");
  }
  return Z_Registration_Info_UScriptStruct_FAIStimulus.OuterSingleton;
}

// FAIStimulus @ 146f90d70

FAIStimulus * __thiscall
FAIStimulus::FAIStimulus
          (FAIStimulus *this,UAISense *param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,FResult param_5,FName param_6)

{
  double dVar1;
  uchar uVar2;
  uint uVar3;
  
  this->ExpirationAge = 3.4028235e+38;
  this->Age = 0.0;
  if (param_5 != SensingSucceeded) {
    param_2 = __real_bf800000;
  }
  this->Strength = param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->StimulusLocation).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->StimulusLocation).field0_0x0._s_0.Y = dVar1;
  (this->StimulusLocation).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (this->ReceiverLocation).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->ReceiverLocation).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  this->Tag = param_6;
  (this->ReceiverLocation).field0_0x0._s_0.Z = dVar1;
  (this->Type).Index = 0xff;
  ::FName::FName(&(this->Type).Name,L"Invalid");
  uVar3 = 0;
  if (param_5 == SensingSucceeded) {
    uVar3 = 2;
  }
  *(uint *)&this->field_0x54 =
       (uint)(param_1->NotifyType == OnPerceptionChange) | *(uint *)&this->field_0x54 & 0xfffffff8 |
       uVar3;
  uVar2 = (param_1->SenseID).Index;
  (this->Type).Name = (param_1->SenseID).Name;
  (this->Type).Index = uVar2;
  return this;
}

// FAIStimulus @ 146f90e50

FAIStimulus * __thiscall FAIStimulus::FAIStimulus(FAIStimulus *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  this->Age = 3.4028235e+38;
  this->ExpirationAge = 3.4028235e+38;
  this->Strength = -1.0;
  uVar2 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->StimulusLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->StimulusLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->StimulusLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar2 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->ReceiverLocation).field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->ReceiverLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->ReceiverLocation).field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  FAINamedID<FAISenseCounter>::InvalidID(&this->Type);
  this->bWantsToNotifyOnlyOnValueChange = 0;
  this->bExpired = 0;
  this->bSuccessfullySensed = 0;
  return this;
}

// GetDebugDescription @ 146fadd70

FString * __thiscall
FAIStimulus::GetDebugDescription(FAIStimulus *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_38;
  FString local_28 [2];
  
  bVar1 = IsValid(this);
  if (!bVar1) {
    ::FString::FString(__return_storage_ptr__,L"Uninitialized");
    return __return_storage_ptr__;
  }
  if (this->bExpired == 0) {
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FName::ToString(&(this->Type).Name,local_28);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s %.1fs ago at %s");
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FName::ToString(&(this->Type).Name,&local_38);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s Expired");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsValid @ 146fba2a0

bool __thiscall FAIStimulus::IsValid(FAIStimulus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((((FAINamedID<struct_FAISenseCounter>)(this->Type).Index !=
        `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::InvalidIDInstance) && (0.0 < this->Strength)) && (this->Age < __real_7f7fffff)) {
    return true;
  }
  return false;
}

