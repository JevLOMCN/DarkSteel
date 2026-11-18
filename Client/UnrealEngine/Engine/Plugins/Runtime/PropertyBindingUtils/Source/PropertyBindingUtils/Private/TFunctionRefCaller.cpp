// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 5

// Call @ 14d37ef10

EVisitResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_1>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBindableStructDescriptor_const_&>
::Call(void *param_1,FPropertyBindingBindableStructDescriptor *param_2)

{
  UStruct *pUVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  
  pUVar1 = (param_2->Struct).field0_0x0.DebugPtr;
  plVar2 = *(longlong **)param_1;
  uVar4 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar5 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar5 = plVar2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(UStruct **)(*plVar2 + (longlong)iVar3 * 0x10) == pUVar1) {
          **(undefined1 **)((longlong)param_1 + 8) = 1;
          return Break;
        }
        iVar3 = *(int *)(*plVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return Continue;
}

// Call @ 14d37ef20

EVisitResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyBindingBindingCollection::DebugAsString'::__l5::<lambda_1>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBindableStructDescriptor_const_&>
::Call(void *param_1,FPropertyBindingBindableStructDescriptor *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  UStruct *pUVar2;
  FName FStackX_8;
  FString FStack_38;
  void *apvStack_28 [2];
  
  pTVar1 = *(TStringBuilderBase<wchar_t> **)((longlong)param_1 + 8);
  (**(code **)(param_2->_padding_ + 8))(param_2,apvStack_28);
  pUVar2 = (param_2->Struct).field0_0x0.DebugPtr;
  if (pUVar2 == (UStruct *)0x0) {
    ::FString::FString(&FStack_38,L"None");
  }
  else {
    FStackX_8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&FStackX_8,&FStack_38);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"  | (%3d) | %-45s | % -80s |\n");
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (apvStack_28[0] != (void *)0x0) {
    FMemory::Free(apvStack_28[0]);
  }
  **(int **)param_1 = **(int **)param_1 + 1;
  return Continue;
}

// Call @ 14d37ef30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyBindingBindingCollection::ResolvePaths'::__l6::<lambda_1>,void,FPropertyBindingBinding_const_&,int>
::Call(void *param_1,FPropertyBindingBinding *param_2,int *param_3)

{
  `FPropertyBindingBindingCollection::ResolvePaths'::__l6::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14d37ef40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyBindingBindingCollection::DebugAsString'::__l13::<lambda_2>,void,FPropertyBindingBinding_const_&>
::Call(void *param_1,FPropertyBindingBinding *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  FName FStackX_18;
  FName FStackX_20;
  FString FStack_b0;
  FString FStack_a0;
  TStringBuilderBase<wchar_t> TStack_90;
  TStringBuilderBase<wchar_t> TStack_70;
  
  pTVar1 = *(TStringBuilderBase<wchar_t> **)((longlong)param_1 + 8);
  iVar10 = (param_2->TargetPropertyPath).Segments.ArrayNum;
  iVar9 = 0;
  pFVar2 = (param_2->TargetPropertyPath).Segments.AllocatorInstance.Data;
  TStack_90.End = (wchar_t *)0x0;
  TStack_90.bIsDynamic = false;
  TStack_90.bIsExternal = false;
  TStack_90.Base = (wchar_t *)0x0;
  TStack_90.CurPos = (wchar_t *)0x0;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = 0;
  if (iVar10 < 0) {
    iVar5 = iVar10;
  }
  pFVar6 = (FName *)(pFVar2 + (longlong)iVar5 * 0x20);
  iVar7 = 0;
  if (0 < iVar10 - iVar5) {
    iVar7 = iVar10 - iVar5;
  }
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = pFVar6 + (longlong)iVar7 * 4;
  for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 4) {
    if (0 < iVar9) {
      if (TStack_90.End < TStack_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_90,1);
      }
      *TStack_90.CurPos = L'.';
      TStack_90.CurPos = TStack_90.CurPos + 1;
    }
    FStackX_18 = *pFVar6;
    ::FName::AppendString(&FStackX_18,&TStack_90);
    if (-1 < (int)pFVar6[1].ComparisonIndex.Value) {
      if (TStack_90.End < TStack_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_90,1);
      }
      *TStack_90.CurPos = L'[';
      TStack_90.CurPos = TStack_90.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_90,L"%d");
      if (TStack_90.End < TStack_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_90,1);
      }
      *TStack_90.CurPos = L']';
      TStack_90.CurPos = TStack_90.CurPos + 1;
    }
    iVar9 = iVar9 + 1;
  }
  if (TStack_90.End < TStack_90.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&TStack_90,1);
  }
  *TStack_90.CurPos = L'\0';
  ::FString::FString(&FStack_a0,TStack_90.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_90);
  iVar10 = (param_2->SourcePropertyPath).Segments.ArrayNum;
  pFVar2 = (param_2->SourcePropertyPath).Segments.AllocatorInstance.Data;
  TStack_70.End = (wchar_t *)0x0;
  TStack_70.bIsDynamic = false;
  TStack_70.bIsExternal = false;
  TStack_70.Base = (wchar_t *)0x0;
  TStack_70.CurPos = (wchar_t *)0x0;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = 0;
  if (iVar10 < 0) {
    iVar9 = iVar10;
  }
  pFVar6 = (FName *)(pFVar2 + (longlong)iVar9 * 0x20);
  iVar5 = 0;
  if (0 < iVar10 - iVar9) {
    iVar5 = iVar10 - iVar9;
  }
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = 0;
  pFVar8 = pFVar6 + (longlong)iVar5 * 4;
  for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 4) {
    if (0 < iVar10) {
      if (TStack_70.End < TStack_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_70,1);
      }
      *TStack_70.CurPos = L'.';
      TStack_70.CurPos = TStack_70.CurPos + 1;
    }
    FStackX_20 = *pFVar6;
    ::FName::AppendString(&FStackX_20,&TStack_70);
    if (-1 < (int)pFVar6[1].ComparisonIndex.Value) {
      if (TStack_70.End < TStack_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_70,1);
      }
      *TStack_70.CurPos = L'[';
      TStack_70.CurPos = TStack_70.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&TStack_70,L"%d");
      if (TStack_70.End < TStack_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&TStack_70,1);
      }
      *TStack_70.CurPos = L']';
      TStack_70.CurPos = TStack_70.CurPos + 1;
    }
    iVar10 = iVar10 + 1;
  }
  if (TStack_70.End < TStack_70.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&TStack_70,1);
  }
  *TStack_70.CurPos = L'\0';
  ::FString::FString(&FStack_b0,TStack_70.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_70);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"  | (%3d) | %-45s | %-45s |\n");
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
  }
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14d37ef50

EVisitResult __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_3>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBinding_const_&>
::Call(void *param_1,FPropertyBindingBinding *param_2)

{
  bool bVar1;
  
  bVar1 = `FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_2>::operator()
                    (param_1,&param_2->SourcePropertyPath);
  if (!bVar1) {
    bVar1 = `FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_2>::operator()
                      (param_1,&param_2->TargetPropertyPath);
    if (!bVar1) {
      return Continue;
    }
  }
  **(undefined1 **)((longlong)param_1 + 8) = 1;
  return Break;
}

