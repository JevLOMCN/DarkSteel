// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 1473662e0

UScriptStruct * __cdecl FNavDataConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavDataConfig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavDataConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavDataConfig,(UObject *)pUVar1,L"NavDataConfig"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FNavDataConfig.OuterSingleton;
}

// FNavDataConfig @ 14737abb0

FNavDataConfig * __thiscall
FNavDataConfig::FNavDataConfig(FNavDataConfig *this,FNavDataConfig *param_1)

{
  double dVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  this->Name = param_1->Name;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  dVar1 = (param_1->DefaultQueryExtent).field0_0x0._s_0.Y;
  (this->DefaultQueryExtent).field0_0x0._s_0.X = (param_1->DefaultQueryExtent).field0_0x0._s_0.X;
  (this->DefaultQueryExtent).field0_0x0._s_0.Y = dVar1;
  (this->DefaultQueryExtent).field0_0x0._s_0.Z = (param_1->DefaultQueryExtent).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->NavDataClass).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->NavDataClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->NavDataClass).SoftObjectPtr.field_0x8);
  return this;
}

// FNavDataConfig @ 14737ac40

FNavDataConfig * __thiscall
FNavDataConfig::FNavDataConfig(FNavDataConfig *this,float param_1,float param_2)

{
  undefined1 *this_00;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  UObject *local_res20;
  FReadAccessScope local_38;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xe0;
  *(float *)((longlong)&this->_padding_ + 4) = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(float *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xbf800000;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  ::FName::FName(&this->Name,L"Default");
  (this->Color).field0_0x0.Bits = 0xa4264b00;
  (this->DefaultQueryExtent).field0_0x0._s_0.X = 50.0;
  (this->DefaultQueryExtent).field0_0x0._s_0.Y = 50.0;
  (this->DefaultQueryExtent).field0_0x0._s_0.Z = 250.0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.GetDefaultNavDataClass,&local_38);
  pUVar4 = (UObject *)0x0;
  if (FNavigationSystem::Delegates.GetDefaultNavDataClass._16_4_ != 0) {
    pUVar4 = (UObject *)FNavigationSystem::Delegates.GetDefaultNavDataClass._8_8_;
  }
  (**(code **)(*(longlong *)pUVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (local_res8 != (UObject *)0x0) {
    pUVar3 = AActor::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)&local_res8[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&local_res8[1].field_0x8 + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14737ad29;
    }
  }
  local_res8 = (UObject *)0x0;
LAB_14737ad29:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  this_00 = &(this->NavDataClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res20 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=(&(this->NavDataClass).SoftObjectPtr,(FObjectPtr)&local_res20);
  return this;
}

// operator= @ 14737e220

FNavDataConfig * __thiscall FNavDataConfig::operator=(FNavDataConfig *this,FNavDataConfig *param_1)

{
  double dVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->_padding_,(FSoftObjectPath *)&param_1->_padding_);
  this->Name = param_1->Name;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  dVar1 = (param_1->DefaultQueryExtent).field0_0x0._s_0.Y;
  (this->DefaultQueryExtent).field0_0x0._s_0.X = (param_1->DefaultQueryExtent).field0_0x0._s_0.X;
  (this->DefaultQueryExtent).field0_0x0._s_0.Y = dVar1;
  (this->DefaultQueryExtent).field0_0x0._s_0.Z = (param_1->DefaultQueryExtent).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->NavDataClass).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->NavDataClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->NavDataClass).SoftObjectPtr.field_0x8);
  return this;
}

// GetDescription @ 14739af60

FString * __thiscall
FNavDataConfig::GetDescription(FNavDataConfig *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28 [2];
  
  FSoftObjectPath::ToString
            ((FSoftObjectPath *)&(this->NavDataClass).SoftObjectPtr.field_0x8,&local_38);
  ::FName::ToString(&this->Name,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Name %s class %s agent radius %.1f");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Invalidate @ 1473a6010

void __thiscall FNavDataConfig::Invalidate(FNavDataConfig *this)

{
  undefined8 local_res8 [4];
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xe0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xbf800000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xbf800000;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  local_res8[0] = 0;
  FSoftObjectPtr::operator=(&(this->NavDataClass).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// IsValid @ 1473a7940

bool __thiscall FNavDataConfig::IsValid(FNavDataConfig *this)

{
  float *pfVar1;
  UClass *pUVar2;
  
  pfVar1 = (float *)((longlong)&this->_padding_ + 4);
  if ((0.0 < *pfVar1 || *pfVar1 == 0.0) &&
     (0.0 < *(float *)&this->_padding_ || *(float *)&this->_padding_ == 0.0)) {
    pUVar2 = TSoftClassPtr<AActor>::Get(&this->NavDataClass);
    if (pUVar2 != (UClass *)0x0) {
      return true;
    }
  }
  return false;
}

// SetNavDataClass @ 1473b73d0

void __thiscall FNavDataConfig::SetNavDataClass(FNavDataConfig *this,UClass *param_1)

{
  UClass *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->NavDataClass).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// SetNavDataClass @ 1473b7410

void __thiscall FNavDataConfig::SetNavDataClass(FNavDataConfig *this,TSoftClassPtr<AActor> *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)&(this->NavDataClass).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->NavDataClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

