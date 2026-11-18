// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// FReturnResultsTerminal<int> @ 143f40ee0

FReturnResultsTerminal<int> * __thiscall
FReturnResultsTerminal<int>::FReturnResultsTerminal<int>(FReturnResultsTerminal<int> *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->field_0x8,"");
  *(undefined ***)this = &___7__FReturnResultsTerminal_H__6B_;
  return this;
}

// FReturnResultsTerminal<float> @ 143f40f30

FReturnResultsTerminal<float> * __thiscall
FReturnResultsTerminal<float>::FReturnResultsTerminal<float>(FReturnResultsTerminal<float> *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->field_0x8,"");
  *(undefined ***)this = &___7__FReturnResultsTerminal_M__6B_;
  return this;
}

// FReturnResultsTerminal<UE::Math::TVector<double>_> @ 143f40f80

FReturnResultsTerminal<UE::Math::TVector<double>_> * __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::
FReturnResultsTerminal<UE::Math::TVector<double>_>
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->field_0x8,"");
  *(undefined ***)this = &___7__FReturnResultsTerminal_U__TVector_N_Math_UE____6B_;
  return this;
}

// ~FReturnResultsTerminal<int> @ 143f48960

void __thiscall
FReturnResultsTerminal<int>::~FReturnResultsTerminal<int>(FReturnResultsTerminal<int> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// ~FReturnResultsTerminal<float> @ 143f48980

void __thiscall
FReturnResultsTerminal<float>::~FReturnResultsTerminal<float>(FReturnResultsTerminal<float> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// ~FReturnResultsTerminal<UE::Math::TVector<double>_> @ 143f489a0

void __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::
~FReturnResultsTerminal<UE::Math::TVector<double>_>
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this)

{
  *(undefined ***)this = &___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4bb60

bool __thiscall
FReturnResultsTerminal<int>::operator==(FReturnResultsTerminal<int> *this,FFieldNodeBase *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar2 = (**(code **)(*(longlong *)this + 0x10))(this);
  return iVar1 == iVar2;
}

// operator== @ 143f4bba0

bool __thiscall
FReturnResultsTerminal<float>::operator==
          (FReturnResultsTerminal<float> *this,FFieldNodeBase *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar2 = (**(code **)(*(longlong *)this + 0x10))(this);
  return iVar1 == iVar2;
}

// operator== @ 143f4bbe0

bool __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::operator==
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this,FFieldNodeBase *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar2 = (**(code **)(*(longlong *)this + 0x10))(this);
  return iVar1 == iVar2;
}

// Evaluate @ 143f61520

void __thiscall
FReturnResultsTerminal<int>::Evaluate
          (FReturnResultsTerminal<int> *this,FFieldContext *param_1,TFieldArrayView<int> *param_2)

{
  undefined4 uVar1;
  FFieldSystemMetaData FVar2;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FFieldSystemMetaData **ppFVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res10 [16];
  FFieldSystemMetaData *local_res20;
  
  if (*(int *)&(param_1->MetaData).field_0x8 != *(int *)&(param_1->MetaData).field_0x34) {
    puVar9 = *(undefined1 **)&(param_1->MetaData).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(param_1->MetaData).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(param_1->MetaData).field_0x48 - 1U & 2) * 4);
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_1->MetaData + (longlong)iVar10 * 0x18) == 2)
        goto LAB_143f6158f;
        iVar10 = *(int *)(*(longlong *)&param_1->MetaData + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  local_res10[0] = 0;
  bVar7 = `FReturnResultsTerminal<int>::Evaluate'::__l3::<lambda_1>::operator()(local_res10);
  if (bVar7) {
LAB_143f6158f:
    ppFVar8 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
              ::FindChecked(&param_1->MetaData,ECommandData_Results);
    local_res20 = *ppFVar8;
    if ((*(int *)((longlong)local_res20[1] + 0xc) != param_2->ArrayNum) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8586442822243055793>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Field\\FieldSystemNodes.cpp"
                           ,0x74f,"ResultsMetaData->Results.Num() == Results.Num()"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->SampleIndices).ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      do {
        FVar2 = local_res20[1];
        uVar13 = 0;
        if ((int)uVar11 < (param_1->SampleIndices).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar3 = (param_1->SampleIndices).ElementArray;
        uVar12 = (param_1->SampleIndices).ArrayOffset + uVar11;
        uVar13 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar13 < *(int *)((longlong)FVar2 + 0xc)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar13 + *(int *)((longlong)FVar2 + 8);
        plVar4 = *(longlong **)FVar2;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar4[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar1 = *(undefined4 *)(*plVar4 + (longlong)(int)uVar13 * 4);
        uVar13 = 0;
        if ((int)uVar11 < (param_1->SampleIndices).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar3 = (param_1->SampleIndices).ElementArray;
        uVar12 = (param_1->SampleIndices).ArrayOffset + uVar11;
        uVar13 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar13 + param_2->ArrayOffset;
        pTVar5 = param_2->ElementArray;
        uVar12 = 0;
        if ((int)uVar13 < pTVar5->ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = uVar1;
      } while ((int)uVar11 < iVar10);
    }
  }
  return;
}

// Evaluate @ 143f618d0

void __thiscall
FReturnResultsTerminal<float>::Evaluate
          (FReturnResultsTerminal<float> *this,FFieldContext *param_1,
          TFieldArrayView<float> *param_2)

{
  undefined4 uVar1;
  FFieldSystemMetaData FVar2;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FFieldSystemMetaData **ppFVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res10 [16];
  FFieldSystemMetaData *local_res20;
  
  if (*(int *)&(param_1->MetaData).field_0x8 != *(int *)&(param_1->MetaData).field_0x34) {
    puVar9 = *(undefined1 **)&(param_1->MetaData).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(param_1->MetaData).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(param_1->MetaData).field_0x48 - 1U & 2) * 4);
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_1->MetaData + (longlong)iVar10 * 0x18) == 2)
        goto LAB_143f61945;
        iVar10 = *(int *)(*(longlong *)&param_1->MetaData + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  local_res10[0] = 0;
  bVar7 = `FReturnResultsTerminal<float>::Evaluate'::__l3::<lambda_1>::operator()(local_res10);
  if (bVar7) {
LAB_143f61945:
    ppFVar8 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
              ::FindChecked(&param_1->MetaData,ECommandData_Results);
    local_res20 = *ppFVar8;
    if ((*(int *)((longlong)local_res20[1] + 0xc) != param_2->ArrayNum) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8586442822243055793>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Field\\FieldSystemNodes.cpp"
                           ,0x74f,"ResultsMetaData->Results.Num() == Results.Num()"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->SampleIndices).ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      do {
        FVar2 = local_res20[1];
        uVar13 = 0;
        if ((int)uVar11 < (param_1->SampleIndices).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar3 = (param_1->SampleIndices).ElementArray;
        uVar12 = (param_1->SampleIndices).ArrayOffset + uVar11;
        uVar13 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar13 < *(int *)((longlong)FVar2 + 0xc)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar13 + *(int *)((longlong)FVar2 + 8);
        plVar4 = *(longlong **)FVar2;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar4[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar1 = *(undefined4 *)(*plVar4 + (longlong)(int)uVar13 * 4);
        uVar13 = 0;
        if ((int)uVar11 < (param_1->SampleIndices).ArrayNum) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar3 = (param_1->SampleIndices).ElementArray;
        uVar12 = (param_1->SampleIndices).ArrayOffset + uVar11;
        uVar13 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 8 + 4);
        uVar12 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                               ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = uVar13 + param_2->ArrayOffset;
        pTVar5 = param_2->ElementArray;
        uVar12 = 0;
        if ((int)uVar13 < pTVar5->ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = uVar1;
      } while ((int)uVar11 < iVar10);
    }
  }
  return;
}

// Evaluate @ 143f61c90

void __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::Evaluate
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FFieldSystemMetaData FVar4;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  longlong lVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  FFieldSystemMetaData **ppFVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res10 [16];
  FFieldSystemMetaData *local_res20;
  
  if (*(int *)&(param_1->MetaData).field_0x8 != *(int *)&(param_1->MetaData).field_0x34) {
    puVar15 = *(undefined1 **)&(param_1->MetaData).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(param_1->MetaData).field_0x38;
    }
    iVar16 = *(int *)(puVar15 + (ulonglong)(*(int *)&(param_1->MetaData).field_0x48 - 1U & 2) * 4);
    if (iVar16 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_1->MetaData + (longlong)iVar16 * 0x18) == 2)
        goto LAB_143f61d05;
        iVar16 = *(int *)(*(longlong *)&param_1->MetaData + 0x10 + (longlong)iVar16 * 0x18);
      } while (iVar16 != -1);
    }
  }
  local_res10[0] = 0;
  bVar13 = `FReturnResultsTerminal<UE::Math::TVector<double>_>::Evaluate'::__l3::<lambda_1>::
           operator()(local_res10);
  if (bVar13) {
LAB_143f61d05:
    ppFVar14 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
               ::FindChecked(&param_1->MetaData,ECommandData_Results);
    local_res20 = *ppFVar14;
    if ((*(int *)((longlong)local_res20[1] + 0xc) != param_2->ArrayNum) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8586442822243055793>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Field\\FieldSystemNodes.cpp"
                            ,0x74f,"ResultsMetaData->Results.Num() == Results.Num()"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = (param_1->SampleIndices).ArrayNum;
    uVar19 = 0;
    if (0 < iVar16) {
      do {
        FVar4 = local_res20[1];
        uVar18 = 0;
        if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar5 = (param_1->SampleIndices).ElementArray;
        uVar17 = (param_1->SampleIndices).ArrayOffset + uVar19;
        uVar18 = 0;
        if ((int)uVar17 < pTVar5->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar17 * 8 + 4);
        uVar17 = 0;
        if ((int)uVar18 < *(int *)((longlong)FVar4 + 0xc)) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = uVar18 + *(int *)((longlong)FVar4 + 8);
        plVar6 = *(longlong **)FVar4;
        uVar17 = 0;
        if ((int)uVar18 < (int)plVar6[1]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *plVar6;
        puVar1 = (undefined8 *)(lVar7 + (longlong)(int)uVar18 * 0x18);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar3 = *(undefined8 *)(lVar7 + 0x10 + (longlong)(int)uVar18 * 0x18);
        uVar18 = 0;
        if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar5 = (param_1->SampleIndices).ElementArray;
        uVar17 = (param_1->SampleIndices).ArrayOffset + uVar19;
        uVar18 = 0;
        if ((int)uVar17 < pTVar5->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar17 * 8 + 4);
        uVar17 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = uVar18 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar19 = uVar19 + 1;
        pFVar9 = (pTVar8->AllocatorInstance).Data;
        pFVar2 = pFVar9 + (longlong)(int)uVar18 * 0x18;
        *(undefined8 *)pFVar2 = uVar11;
        *(undefined8 *)(pFVar2 + 8) = uVar12;
        *(undefined8 *)(pFVar9 + (longlong)(int)uVar18 * 0x18 + 0x10) = uVar3;
      } while ((int)uVar19 < iVar16);
    }
  }
  return;
}

// NewCopy @ 143f70220

FFieldNodeBase * __thiscall FReturnResultsTerminal<int>::NewCopy(FReturnResultsTerminal<int> *this)

{
  FFieldNodeBase *pFVar1;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FFieldNodeBase *)0x0) {
    (pFVar1->Name).ComparisonIndex = 0;
    (pFVar1->Name).Number = 0;
    pFVar1->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar1->Name,"");
    pFVar1->_padding_ = (longlong)&___7__FReturnResultsTerminal_H__6B_;
    return pFVar1;
  }
  return (FFieldNodeBase *)0x0;
}

// NewCopy @ 143f70280

FFieldNodeBase * __thiscall
FReturnResultsTerminal<float>::NewCopy(FReturnResultsTerminal<float> *this)

{
  FFieldNodeBase *pFVar1;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FFieldNodeBase *)0x0) {
    (pFVar1->Name).ComparisonIndex = 0;
    (pFVar1->Name).Number = 0;
    pFVar1->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar1->Name,"");
    pFVar1->_padding_ = (longlong)&___7__FReturnResultsTerminal_M__6B_;
    return pFVar1;
  }
  return (FFieldNodeBase *)0x0;
}

// NewCopy @ 143f702e0

FFieldNodeBase * __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::NewCopy
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this)

{
  FFieldNodeBase *pFVar1;
  
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FFieldNodeBase *)0x0) {
    (pFVar1->Name).ComparisonIndex = 0;
    (pFVar1->Name).Number = 0;
    pFVar1->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar1->Name,"");
    pFVar1->_padding_ = (longlong)&___7__FReturnResultsTerminal_U__TVector_N_Math_UE____6B_;
    return pFVar1;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73a00

ESerializationType __thiscall
FReturnResultsTerminal<int>::SerializationType(FReturnResultsTerminal<int> *this)

{
  return FieldNode_FReturnResultsTerminal;
}

// SerializationType @ 143f73a10

ESerializationType __thiscall
FReturnResultsTerminal<float>::SerializationType(FReturnResultsTerminal<float> *this)

{
  return FieldNode_FReturnResultsTerminal;
}

// SerializationType @ 143f73a20

ESerializationType __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::SerializationType
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this)

{
  return FieldNode_FReturnResultsTerminal;
}

// Serialize @ 143f73da0

void __thiscall
FReturnResultsTerminal<int>::Serialize(FReturnResultsTerminal<int> *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f73dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->field_0x8);
  return;
}

// Serialize @ 143f73dc0

void __thiscall
FReturnResultsTerminal<float>::Serialize(FReturnResultsTerminal<float> *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f73dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->field_0x8);
  return;
}

// Serialize @ 143f73de0

void __thiscall
FReturnResultsTerminal<UE::Math::TVector<double>_>::Serialize
          (FReturnResultsTerminal<UE::Math::TVector<double>_> *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f73ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->field_0x8);
  return;
}

// operator() @ 1504a9d30

bool __thiscall `FReturnResultsTerminal<int>::Evaluate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055796>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055796>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FReturnResultsTerminal<int>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<int>&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9d70

bool __thiscall `FReturnResultsTerminal<float>::Evaluate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055796>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055796>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FReturnResultsTerminal<float>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9db0

bool __thiscall
`FReturnResultsTerminal<UE::Math::TVector<double>_>::Evaluate'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055796>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055796>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FReturnResultsTerminal<UE::Math::TVector<double>_>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<UE::Math::TVector<double>_>&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

