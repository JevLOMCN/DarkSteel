// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f12360

UScriptStruct * __cdecl FAIDataProviderTypedValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue,(UObject *)pUVar1,
                         L"AIDataProviderTypedValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton;
}

// operator= @ 146f2f950

FAIDataProviderTypedValue * __thiscall
FAIDataProviderTypedValue::operator=
          (FAIDataProviderTypedValue *this,FAIDataProviderTypedValue *param_1)

{
  UClass *pUVar1;
  
  this->_padding_ = param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PropertyType_DEPRECATED).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PropertyType_DEPRECATED).field0_0x0 = (param_1->PropertyType_DEPRECATED).field0_0x0;
  this->PropertyType = param_1->PropertyType;
  return this;
}

// IsMatchingType @ 146f5b980

bool __thiscall
FAIDataProviderTypedValue::IsMatchingType(FAIDataProviderTypedValue *this,FProperty *param_1)

{
  return (FFieldClass *)param_1->_padding_ == this->PropertyType;
}

// Serialize @ 146f73430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAIDataProviderTypedValue::Serialize(FAIDataProviderTypedValue *this,FArchive *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar5;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this_01;
  TTuple<FName,FFieldClass_*> *pTVar6;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue,(UObject *)pUVar4,
                         L"AIDataProviderTypedValue");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton;
  if ((param_1->field_0x28 & 5) != 0) {
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FAIDataProviderTypedValue.OuterSingleton)
                        ->_padding_ + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
    FVar5 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1c0 = 0;
    local_1c8 = 0;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar5,this,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
  if (iVar3 < 4) {
    if ((param_1->field_0x28 & 1) != 0) {
      if ((this->PropertyType_DEPRECATED).field0_0x0.DebugPtr == (UClass *)0x0) {
        this->PropertyType = (FFieldClass *)0x0;
      }
      else {
        this_01 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                   *)FFieldClass::GetNameToFieldClassMap();
        pTVar6 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                 ::Find(this_01,(FName)((this->PropertyType_DEPRECATED).field0_0x0.DebugPtr)->
                                       _padding_);
        if (pTVar6 == (TTuple<FName,FFieldClass_*> *)0x0) {
          this->PropertyType = (FFieldClass *)0x0;
          (this->PropertyType_DEPRECATED).field0_0x0.DebugPtr = (UClass *)0x0;
        }
        else {
          this->PropertyType = *(FFieldClass **)&pTVar6->field_0x8;
          (this->PropertyType_DEPRECATED).field0_0x0.DebugPtr = (UClass *)0x0;
        }
      }
    }
  }
  else {
    ::operator<<(param_1,&this->PropertyType);
  }
  return true;
}

