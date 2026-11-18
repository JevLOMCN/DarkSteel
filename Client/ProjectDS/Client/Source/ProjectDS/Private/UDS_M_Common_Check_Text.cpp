// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b50a9d0

UClass * __cdecl UDS_M_Common_Check_Text::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Common_Check_Text",
               &Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton,
               StaticRegisterNativesUDS_M_Common_Check_Text,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_Common_Check_Text>,
               InternalVTableHelperCtorCaller<UDS_M_Common_Check_Text>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton;
}

// UDS_M_Common_Check_Text @ 14b510a40

UDS_M_Common_Check_Text * __thiscall
UDS_M_Common_Check_Text::UDS_M_Common_Check_Text
          (UDS_M_Common_Check_Text *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Common_Check_Text__6B_;
  return this;
}

// UDS_M_Common_Check_Text @ 14b510a70

UDS_M_Common_Check_Text * __thiscall
UDS_M_Common_Check_Text::UDS_M_Common_Check_Text
          (UDS_M_Common_Check_Text *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_Common_Check_Text__6B_;
  return this;
}

// ~UDS_M_Common_Check_Text @ 14b512c90

void __thiscall UDS_M_Common_Check_Text::~UDS_M_Common_Check_Text(UDS_M_Common_Check_Text *this)

{
  *(undefined ***)this = &___7UDS_M_Common_Check_Text__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515600

UClass * __cdecl UDS_M_Common_Check_Text::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Common_Check_Text",
               &Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton,
               StaticRegisterNativesUDS_M_Common_Check_Text,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_Common_Check_Text>,
               InternalVTableHelperCtorCaller<UDS_M_Common_Check_Text>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Common_Check_Text.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Common_Check_Text @ 14b516c10

void __cdecl UDS_M_Common_Check_Text::StaticRegisterNativesUDS_M_Common_Check_Text(void)

{
  return;
}

// GetViewModelContext @ 14bcff750

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Common_Check_Text::GetViewModelContext
          (UDS_M_Common_Check_Text *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->field_0x188 = 0x164;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd01ca0

void __thiscall
UDS_M_Common_Check_Text::InitModel
          (UDS_M_Common_Check_Text *this,long64 param_1,int param_2,bool param_3)

{
  undefined1 *this_00;
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  this_00 = &this->field_0x40;
  ::FString::PrintfImpl(&local_38,L"%lld");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                    ((FDS_DataContainer *)this_00,(EDS_CommonCheckTextData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_38) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_38.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%d");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                    ((FDS_DataContainer *)this_00,(EDS_CommonCheckTextData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_28) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FDS_DataContainer::SetData<bool,enum_EDS_CommonCheckTextData>
            ((FDS_DataContainer *)this_00,CheckValue,param_3);
  return;
}

// OnChangedCheckState @ 14bd09f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_Common_Check_Text::OnChangedCheckState(UDS_M_Common_Check_Text *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  UObject *pUVar11;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b8;
  UDS_M_Common_Check_Text *local_b0;
  UObject *local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                    ((FDS_DataContainer *)&this->field_0x40,(EDS_CommonCheckTextData)local_a0);
  uVar1 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->field_0x40,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  bVar3 = FToBoolHelper::FromCStringWide(pwVar9);
  FDS_DataContainer::SetData<bool,enum_EDS_CommonCheckTextData>
            ((FDS_DataContainer *)&this->field_0x40,CheckValue,!bVar3);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_ModelEventBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._8_8_ = this;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar10 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pUVar11 = (UObject *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UObject *)0x0) goto LAB_14bd0a09f;
LAB_14bd0a15d:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_608430135212769108>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.h"
                       ,0xac,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (pUVar8 == (UObject *)0x0) goto LAB_14bd0a15d;
    UE::GC::MarkAsReachable(pUVar8);
LAB_14bd0a09f:
    local_b0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_M_Common_Check_Text *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar8 + 1),(FObjectPtr)&local_b0);
    pUVar11 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14bd0a0ef;
    if (pUVar8 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar8);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
LAB_14bd0a0ef:
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_a8 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_a8);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_b8);
  return;
}

