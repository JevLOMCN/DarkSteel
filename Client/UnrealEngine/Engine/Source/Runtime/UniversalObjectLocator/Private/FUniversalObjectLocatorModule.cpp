// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 7

// StartupModule @ 144343f20

void __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule
          (FUniversalObjectLocatorModule *this)

{
  FDelayedAutoRegisterHelper local_res8 [32];
  code *local_38 [2];
  undefined **local_28;
  FUniversalObjectLocatorModule *local_20;
  undefined8 local_10;
  
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__StartupModule_FUniversalObjectLocatorModule_UniversalObjectLocator_UE__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (local_res8,ObjectSystemReady,(TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// ShutdownModule @ 144343f70

void __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::ShutdownModule
          (FUniversalObjectLocatorModule *this)

{
  return;
}

// RegisterFragmentTypeImpl @ 144343f80

FFragmentTypeHandle __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::RegisterFragmentTypeImpl
          (FUniversalObjectLocatorModule *this,FFragmentType *param_1)

{
  TArray<UE::UniversalObjectLocator::FFragmentType,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FFragmentType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  FRegistry *pFVar9;
  char cVar10;
  FFragmentType *in_R8;
  
  pFVar9 = FRegistry::Get();
  pFVar4 = (FFragmentType *)(pFVar9->FragmentTypes).AllocatorInstance.Data;
  iVar3 = (pFVar9->FragmentTypes).ArrayNum;
  pTVar1 = &pFVar9->FragmentTypes;
  if ((pFVar4 <= in_R8) && (in_R8 < pFVar4 + (pFVar9->FragmentTypes).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FFragmentTypeHandle)uVar7;
    }
  }
  iVar8 = (pFVar9->FragmentTypes).ArrayNum;
  piVar2 = &(pFVar9->FragmentTypes).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar9->FragmentTypes).ArrayNum = iVar8 + 1;
  FFragmentType::FFragmentType
            ((FFragmentType *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x60),in_R8);
  if (0xfe < iVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < static_cast<int32>(std::numeric_limits<uint8>::max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorModule.cpp"
                       ,0x3a,L"Maximum number of UOL FragmentTypes reached");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FFragmentTypeHandle)uVar7;
    }
  }
  Core::FVisualizerDebuggingState::Assign(&this->DebugVisualizerID,(pTVar1->AllocatorInstance).Data)
  ;
  cVar10 = (char)iVar3;
  *(char *)&(param_1->InstanceBindings).Initialize = cVar10;
  if (cVar10 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandleOffset != 0xff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                       ,0x1c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FFragmentTypeHandle)uVar7;
    }
  }
  return (FFragmentTypeHandle)(uchar)param_1;
}

// UnregisterFragmentTypeImpl @ 1443440e0

/* WARNING: Removing unreachable block (ram,0x00014434419f) */

void __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::UnregisterFragmentTypeImpl
          (FUniversalObjectLocatorModule *this,FFragmentTypeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FRegistry *pFVar3;
  FScriptContainerElement *pFVar4;
  FText local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FText::FText(&local_30);
  local_20 = 0;
  local_18 = 0;
  pFVar3 = FRegistry::Get();
  if (((pFVar3->FragmentTypes).ArrayNum <= (int)(uint)param_1.Handle) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (pFVar3->FragmentTypes).AllocatorInstance.Data + (ulonglong)param_1.Handle * 0x60;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)(pFVar4 + 8) = 0;
  *(undefined8 *)(pFVar4 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + 0x18) = 0;
  *(undefined8 *)(pFVar4 + 0x20) = 0;
  *(undefined8 *)(pFVar4 + 0x28) = 0;
  *(undefined8 *)(pFVar4 + 0x30) = 0;
  FText::operator=((FText *)(pFVar4 + 0x38),&local_30);
  *(undefined8 *)(pFVar4 + 0x48) = local_20;
  *(undefined8 *)(pFVar4 + 0x50) = local_18;
  pFVar4[0x58] = local_10._0_1_;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  return;
}

// RegisterParameterTypeImpl @ 144344210

FParameterTypeHandle __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::RegisterParameterTypeImpl
          (FUniversalObjectLocatorModule *this,UScriptStruct *param_1)

{
  TArray<TObjectPtr<UScriptStruct>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  FRegistry *pFVar9;
  char cVar10;
  UObject *in_R8;
  UObject *local_18 [2];
  
  pFVar9 = FRegistry::Get();
  iVar3 = (pFVar9->ParameterTypes).ArrayNum;
  pTVar1 = &pFVar9->ParameterTypes;
  local_18[0] = in_R8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (in_R8 != (UObject *)0x0)) {
    GC::MarkAsReachable(in_R8);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(pFVar9->ParameterTypes).ArrayMax * 8
     )) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FParameterTypeHandle)uVar7;
    }
  }
  iVar8 = (pFVar9->ParameterTypes).ArrayNum;
  piVar2 = &(pFVar9->ParameterTypes).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar9->ParameterTypes).ArrayNum = iVar8 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    GC::MarkAsReachable(local_18[0]);
  }
  if (0x1f < iVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < FResolveParameterBuffer::MaxNumParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorModule.cpp"
                       ,0x4e,L"Maximum number of UOL ParameterTypes reached");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FParameterTypeHandle)uVar7;
    }
  }
  cVar10 = (char)iVar3;
  *(char *)&param_1->_padding_ = cVar10;
  if (cVar10 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandleOffset != 0xff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorParameterTypeHandle.h"
                       ,0x1c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FParameterTypeHandle)uVar7;
    }
  }
  return (FParameterTypeHandle)(uchar)param_1;
}

// UnregisterParameterTypeImpl @ 144344380

void __thiscall
UE::UniversalObjectLocator::FUniversalObjectLocatorModule::UnregisterParameterTypeImpl
          (FUniversalObjectLocatorModule *this,FParameterTypeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FRegistry *pFVar3;
  
  pFVar3 = FRegistry::Get();
  if (param_1.Handle == 0xff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParameterType.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorModule.cpp"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((pFVar3->ParameterTypes).ArrayNum <= (int)(uint)param_1.Handle) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((pFVar3->ParameterTypes).AllocatorInstance.Data + (ulonglong)param_1.Handle * 8) =
       0;
  return;
}

// operator() @ 1443465c0

void __thiscall
`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>::
operator()(void *this)

{
  ITextData *pIVar1;
  FName FVar2;
  TFragmentTypeHandle<FSubObjectLocator> TVar3;
  TFragmentTypeHandle<FDirectPathObjectLocator> TVar4;
  FText *pFVar5;
  FName *pFVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FName local_res8;
  FName local_res10;
  FText local_58;
  ITextData *local_48;
  uint local_40;
  FName local_38;
  FName local_30;
  undefined1 local_28;
  
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_58,L"SubObjectLocator",L"Object",L"Object");
  pFVar6 = ::FName::FName(&local_res10,"subobj");
  local_48 = (pFVar5->TextData).Reference;
  local_38 = *pFVar6;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_40 = pFVar5->Flags;
  local_28 = 0;
  pIVar1 = (pFVar5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  ::FName::FName(&local_res8,"SubObject");
  local_30 = local_res8;
  TVar3 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FSubObjectLocator>
                    (*(IUniversalObjectLocatorModule **)this,(FFragmentTypeParameters *)&local_res8)
  ;
  FSubObjectLocator::FragmentType =
       *(TFragmentTypeHandle<FSubObjectLocator> *)CONCAT71(extraout_var,TVar3);
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"DirectPathObjectLocator",L"Object",L"Object");
  pFVar6 = ::FName::FName(&local_res10,"uobj");
  local_48 = (pFVar5->TextData).Reference;
  FVar2 = *pFVar6;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_40 = pFVar5->Flags;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28 = 0;
  pIVar1 = (pFVar5->TextData).Reference;
  local_38 = FVar2;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TVar4 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FDirectPathObjectLocator>
                    (*(IUniversalObjectLocatorModule **)this,(FFragmentTypeParameters *)&local_res8)
  ;
  FDirectPathObjectLocator::FragmentType =
       *(TFragmentTypeHandle<FDirectPathObjectLocator> *)CONCAT71(extraout_var_00,TVar4);
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  return;
}

