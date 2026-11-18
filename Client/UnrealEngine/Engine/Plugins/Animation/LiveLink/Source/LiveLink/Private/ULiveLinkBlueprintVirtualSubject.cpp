// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 17

// StaticClass @ 14cff3da0

UClass * __cdecl ULiveLinkBlueprintVirtualSubject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkBlueprintVirtualSubject,0x1a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBlueprintVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton;
}

// ULiveLinkBlueprintVirtualSubject @ 14d013490

ULiveLinkBlueprintVirtualSubject * __thiscall
ULiveLinkBlueprintVirtualSubject::ULiveLinkBlueprintVirtualSubject
          (ULiveLinkBlueprintVirtualSubject *this,FVTableHelper *param_1)

{
  ULiveLinkVirtualSubject::ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  FStructOnScope::FStructOnScope(&(this->CachedStaticData).WrappedStruct);
  return this;
}

// ~ULiveLinkBlueprintVirtualSubject @ 14d016ed0

void __thiscall
ULiveLinkBlueprintVirtualSubject::~ULiveLinkBlueprintVirtualSubject
          (ULiveLinkBlueprintVirtualSubject *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  FStructOnScope::~FStructOnScope(&(this->CachedStaticData).WrappedStruct);
  ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject((ULiveLinkVirtualSubject *)this);
  return;
}

// GetPrivateStaticClass @ 14d052070

UClass * __cdecl ULiveLinkBlueprintVirtualSubject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkBlueprintVirtualSubject,0x1a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBlueprintVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintVirtualSubject>,local_res8,
               ULiveLinkVirtualSubject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.InnerSingleton;
}

// GetRoleFrameStruct @ 14d053840

UScriptStruct * __thiscall
ULiveLinkBlueprintVirtualSubject::GetRoleFrameStruct(ULiveLinkBlueprintVirtualSubject *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  ULiveLinkRole *pUVar7;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
LAB_14d05388b:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Role",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\VirtualSubjects\\LiveLinkBlueprintVirtualSubject.cpp"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar3)();
      return pUVar6;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_14d05388b;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (this->_padding_ == 0)) goto LAB_14d05388b;
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar5 = (UClass *)this->_padding_;
        goto LAB_14d0538f0;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14d0538f0:
  pUVar7 = UClass::GetDefaultObject<ULiveLinkRole>(pUVar5);
                    /* WARNING: Could not recover jumptable at 0x00014d05390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar6 = (UScriptStruct *)
           (**(code **)(*(longlong *)pUVar7 + 0x2b8))
                     (pUVar7,*(code **)(*(longlong *)pUVar7 + 0x2b8));
  return pUVar6;
}

// GetRoleStaticStruct @ 14d053920

UScriptStruct * __thiscall
ULiveLinkBlueprintVirtualSubject::GetRoleStaticStruct(ULiveLinkBlueprintVirtualSubject *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  ULiveLinkRole *pUVar7;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
LAB_14d05396b:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Role",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\VirtualSubjects\\LiveLinkBlueprintVirtualSubject.cpp"
                       ,0x66,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar3)();
      return pUVar6;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_14d05396b;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (this->_padding_ == 0)) goto LAB_14d05396b;
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar5 = (UClass *)this->_padding_;
        goto LAB_14d0539d0;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14d0539d0:
  pUVar7 = UClass::GetDefaultObject<ULiveLinkRole>(pUVar5);
                    /* WARNING: Could not recover jumptable at 0x00014d0539ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar6 = (UScriptStruct *)
           (**(code **)(*(longlong *)pUVar7 + 0x2b0))
                     (pUVar7,*(code **)(*(longlong *)pUVar7 + 0x2b0));
  return pUVar6;
}

// Initialize @ 14d05b5e0

void __thiscall
ULiveLinkBlueprintVirtualSubject::Initialize
          (ULiveLinkBlueprintVirtualSubject *this,FLiveLinkSubjectKey *param_1,
          TSubclassOf<ULiveLinkRole> param_2,ILiveLinkClient *param_3)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_00;
  longlong *plVar1;
  int iVar2;
  ILiveLinkClient *pIVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  void *pvVar8;
  UClass *pUVar9;
  void *pvVar10;
  UFunction *pUVar11;
  FEditorScriptExecutionGuard local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  FStructOnScope local_a8;
  UObject *local_80;
  UScriptStruct *local_78;
  UScriptStruct *local_70;
  UScriptStruct *local_68;
  FStructOnScope local_60;
  FLiveLinkSubjectKey local_38;
  
  pIVar3 = (ILiveLinkClient *)this->_padding_;
  local_80 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_80 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_80);
  }
  local_38.Source.A = (param_1->Source).A;
  local_38.Source.B = (param_1->Source).B;
  local_38.Source.C = (param_1->Source).C;
  local_38.Source.D = (param_1->Source).D;
  local_38.SubjectName.Name = (param_1->SubjectName).Name;
  ULiveLinkVirtualSubject::Initialize
            ((ULiveLinkVirtualSubject *)this,&local_38,(TSubclassOf<ULiveLinkRole>)&local_80,pIVar3)
  ;
  this_00 = &this[-1].CachedStaticData;
  plVar1 = &this->_padding_;
  pUVar7 = GetRoleStaticStruct((ULiveLinkBlueprintVirtualSubject *)this_00);
  if (pUVar7 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_78 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_78);
  FVar5 = local_res10;
  (**(code **)(*plVar1 + 0x40))(plVar1);
  this->_padding_ = (longlong)FVar5;
  (**(code **)*plVar1)(plVar1);
  FStructOnScope::FStructOnScope(&local_a8);
  pvVar8 = (void *)(**(code **)(*plVar1 + 0x18))(plVar1);
  pUVar7 = GetRoleStaticStruct((ULiveLinkBlueprintVirtualSubject *)this_00);
  if (pUVar7 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_70 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_70);
  FVar5 = local_b8;
  (**(code **)(local_a8._padding_ + 0x40))(&local_a8);
  local_a8.ScriptStruct.WeakPtr = FVar5;
  (**(code **)local_a8._padding_)(&local_a8);
  if (pvVar8 == (void *)0x0) goto LAB_14d05b7ef;
  pUVar7 = (UScriptStruct *)(**(code **)(local_a8._padding_ + 0x20))(&local_a8);
  if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14d05b7cd:
    pUVar7 = (UScriptStruct *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) goto LAB_14d05b7cd;
  }
  pvVar10 = (void *)(**(code **)(local_a8._padding_ + 0x18))(&local_a8);
  UScriptStruct::CopyScriptStruct(pUVar7,pvVar10,pvVar8,1);
LAB_14d05b7ef:
  ULiveLinkVirtualSubject::UpdateStaticDataSnapshot
            ((ULiveLinkVirtualSubject *)this_00,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_a8);
  FStructOnScope::FStructOnScope(&local_60);
  pUVar7 = GetRoleFrameStruct((ULiveLinkBlueprintVirtualSubject *)this_00);
  if (pUVar7 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_68 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_68);
  FVar5 = local_b0;
  (**(code **)(local_60._padding_ + 0x40))(&local_60);
  local_60.ScriptStruct.WeakPtr = FVar5;
  (**(code **)local_60._padding_)(&local_60);
  ULiveLinkVirtualSubject::UpdateFrameDataSnapshot
            ((ULiveLinkVirtualSubject *)this_00,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_60);
  FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
  pUVar11 = UObject::FindFunctionChecked
                      ((UObject *)this_00,NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize);
  (**(code **)((this_00->WrappedStruct)._padding_ + 0x260))(this_00,pUVar11,0);
  FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  FStructOnScope::~FStructOnScope(&local_60);
  FStructOnScope::~FStructOnScope(&local_a8);
  return;
}

// OnInitialize @ 14d0647e0

void __thiscall
ULiveLinkBlueprintVirtualSubject::OnInitialize(ULiveLinkBlueprintVirtualSubject *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d06480d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnUpdate @ 14d06bd50

void __thiscall ULiveLinkBlueprintVirtualSubject::OnUpdate(ULiveLinkBlueprintVirtualSubject *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d06bd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesULiveLinkBlueprintVirtualSubject @ 14d0806c0

void __cdecl
ULiveLinkBlueprintVirtualSubject::StaticRegisterNativesULiveLinkBlueprintVirtualSubject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 14d0876b0

void __thiscall ULiveLinkBlueprintVirtualSubject::Update(ULiveLinkBlueprintVirtualSubject *this)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_00;
  int iVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  UFunction *pUVar5;
  longlong lVar6;
  void *pvVar7;
  UScriptStruct *pUVar8;
  UClass *pUVar9;
  void *pvVar10;
  FEditorScriptExecutionGuard local_res8 [8];
  FWeakObjectPtr local_res10;
  UScriptStruct *local_res18 [2];
  FStructOnScope local_48;
  
  ULiveLinkVirtualSubject::Update((ULiveLinkVirtualSubject *)this);
  FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_res8);
  this_00 = &this[-1].CachedStaticData;
  pUVar5 = UObject::FindFunctionChecked
                     ((UObject *)this_00,NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate);
  (**(code **)((this_00->WrappedStruct)._padding_ + 0x260))(this_00,pUVar5,0);
  FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_res8);
  bVar4 = ULiveLinkVirtualSubject::HasValidFrameData((ULiveLinkVirtualSubject *)this_00);
  if (!bVar4) {
    return;
  }
  bVar4 = ULiveLinkVirtualSubject::HasValidStaticData((ULiveLinkVirtualSubject *)this_00);
  if (bVar4) {
    return;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  if (lVar6 == 0) {
    return;
  }
  FStructOnScope::FStructOnScope(&local_48);
  pvVar7 = (void *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  pUVar8 = GetRoleStaticStruct((ULiveLinkBlueprintVirtualSubject *)this_00);
  if ((pUVar8 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  FVar3 = local_res10;
  (**(code **)(local_48._padding_ + 0x40))(&local_48);
  local_48.ScriptStruct.WeakPtr = FVar3;
  (**(code **)local_48._padding_)(&local_48);
  if (pvVar7 == (void *)0x0) goto LAB_14d087865;
  pUVar8 = (UScriptStruct *)(**(code **)(local_48._padding_ + 0x20))(&local_48);
  if (pUVar8 == (UScriptStruct *)0x0) {
LAB_14d087842:
    pUVar8 = (UScriptStruct *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_14d087842;
  }
  pvVar10 = (void *)(**(code **)(local_48._padding_ + 0x18))(&local_48);
  UScriptStruct::CopyScriptStruct(pUVar8,pvVar10,pvVar7,1);
LAB_14d087865:
  ULiveLinkVirtualSubject::UpdateStaticDataSnapshot
            ((ULiveLinkVirtualSubject *)this_00,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_48);
  FStructOnScope::~FStructOnScope(&local_48);
  return;
}

// UpdateVirtualSubjectFrameData @ 14d0887f0

void __thiscall
ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData
          (ULiveLinkBlueprintVirtualSubject *this,FLiveLinkBaseFrameData *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  atomic<double> aVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  UClass *pUVar7;
  void *pvVar8;
  atomic<double> *paVar9;
  double dVar10;
  FWeakObjectPtr local_res10 [2];
  UScriptStruct *local_res20;
  LARGE_INTEGER local_48;
  FStructOnScope local_40;
  
  FStructOnScope::FStructOnScope(&local_40);
  pUVar6 = GetRoleFrameStruct(this);
  if (pUVar6 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  FVar4 = local_res10[0];
  (**(code **)(local_40._padding_ + 0x40))(&local_40);
  local_40.ScriptStruct.WeakPtr = FVar4;
  (**(code **)local_40._padding_)(&local_40);
  if (param_1 == (FLiveLinkBaseFrameData *)0x0) goto LAB_14d08891c;
  pUVar6 = (UScriptStruct *)(**(code **)(local_40._padding_ + 0x20))(&local_40);
  if (pUVar6 == (UScriptStruct *)0x0) {
LAB_14d0888f9:
    pUVar6 = (UScriptStruct *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14d0888f9;
  }
  pvVar8 = (void *)(**(code **)(local_40._padding_ + 0x18))(&local_40);
  UScriptStruct::CopyScriptStruct(pUVar6,pvVar8,param_1,1);
LAB_14d08891c:
  if (param_2) {
    paVar9 = (atomic<double> *)(**(code **)(local_40._padding_ + 0x18))(&local_40);
    aVar3 = FApp::CurrentTime;
    if (paVar9 != (atomic<double> *)0x0) {
      QueryPerformanceCounter(&local_48);
      dVar10 = (double)local_48.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      *paVar9 = aVar3;
      paVar9[1] = (atomic<double>)((dVar10 + __real_4170000000000000) - (double)aVar3);
      if (FApp::CurrentFrameTime.bIsSet != false) {
        *(FQualifiedFrameTime *)(paVar9 + 0xc) = FApp::CurrentFrameTime.TypedValue;
      }
    }
  }
  ULiveLinkVirtualSubject::UpdateFrameDataSnapshot
            ((ULiveLinkVirtualSubject *)this,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_40);
  FStructOnScope::~FStructOnScope(&local_40);
  return;
}

// UpdateVirtualSubjectFrameData_Internal @ 14d0889c0

bool __thiscall
ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal
          (ULiveLinkBlueprintVirtualSubject *this,FLiveLinkBaseFrameData *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\VirtualSubjects\\LiveLinkBlueprintVirtualSubject.cpp"
                     ,0x60,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// UpdateVirtualSubjectStaticData @ 14d088a00

void __thiscall
ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData
          (ULiveLinkBlueprintVirtualSubject *this,FLiveLinkBaseStaticData *param_1)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  UClass *pUVar8;
  void *pvVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UScriptStruct *local_res18;
  UScriptStruct *local_res20;
  FStructOnScope local_68;
  
  pFVar1 = &this->CachedStaticData;
  pUVar7 = GetRoleStaticStruct(this);
  if (pUVar7 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  FVar5 = local_res8;
  (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x40))(pFVar1);
  puVar3 = (undefined8 *)(pFVar1->WrappedStruct)._padding_;
  (this->CachedStaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar5;
  (*(code *)*puVar3)(pFVar1);
  if (param_1 != (FLiveLinkBaseStaticData *)0x0) {
    pUVar7 = (UScriptStruct *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
    if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14d088aea:
      pUVar7 = (UScriptStruct *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) goto LAB_14d088aea;
    }
    pvVar9 = (void *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
    UScriptStruct::CopyScriptStruct(pUVar7,pvVar9,param_1,1);
  }
  FStructOnScope::FStructOnScope(&local_68);
  pUVar7 = GetRoleStaticStruct(this);
  if (pUVar7 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  FVar5 = local_res10;
  (**(code **)(local_68._padding_ + 0x40))(&local_68);
  local_68.ScriptStruct.WeakPtr = FVar5;
  (**(code **)local_68._padding_)(&local_68);
  if (param_1 == (FLiveLinkBaseStaticData *)0x0) goto LAB_14d088c08;
  pUVar7 = (UScriptStruct *)(**(code **)(local_68._padding_ + 0x20))(&local_68);
  if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14d088be6:
    pUVar7 = (UScriptStruct *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_14d088be6;
  }
  pvVar9 = (void *)(**(code **)(local_68._padding_ + 0x18))(&local_68);
  UScriptStruct::CopyScriptStruct(pUVar7,pvVar9,param_1,1);
LAB_14d088c08:
  ULiveLinkVirtualSubject::UpdateStaticDataSnapshot
            ((ULiveLinkVirtualSubject *)this,
             (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_68);
  ULiveLinkVirtualSubject::InvalidateFrameData((ULiveLinkVirtualSubject *)this);
  FStructOnScope::~FStructOnScope(&local_68);
  return;
}

// UpdateVirtualSubjectStaticData_Internal @ 14d088c40

bool __thiscall
ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal
          (ULiveLinkBlueprintVirtualSubject *this,FLiveLinkBaseStaticData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\VirtualSubjects\\LiveLinkBlueprintVirtualSubject.cpp"
                     ,0x59,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// execUpdateVirtualSubjectFrameData_Internal @ 14d08fd80

void __cdecl
ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectFrameData_Internal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FLiveLinkBaseFrameData *pFVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FProperty *pFVar7;
  bool local_res10 [8];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar7 = param_2->MostRecentProperty;
  pFVar2 = (FLiveLinkBaseFrameData *)param_2->MostRecentPropertyAddress;
  if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    pFVar7 = (FProperty *)0x0;
  }
  local_res10[0] = false;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar7 != (FProperty *)0x0) && (lVar4 = pFVar7[1]._padding_, lVar4 != 0)) {
    pUVar6 = FLiveLinkBaseFrameData::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        UpdateVirtualSubjectFrameData
                  ((ULiveLinkBlueprintVirtualSubject *)param_1,pFVar2,local_res10[0]);
      }
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execUpdateVirtualSubjectStaticData_Internal @ 14d08fec0

void __cdecl
ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectStaticData_Internal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FLiveLinkBaseStaticData *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  pFVar3 = (FLiveLinkBaseStaticData *)param_2->MostRecentPropertyAddress;
  if ((pFVar2 == (FProperty *)0x0) || ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  }
  else {
    param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
    lVar4 = pFVar2[1]._padding_;
    if (lVar4 != 0) {
      pUVar6 = FLiveLinkBaseStaticData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          UpdateVirtualSubjectStaticData((ULiveLinkBlueprintVirtualSubject *)param_1,pFVar3);
        }
      }
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

