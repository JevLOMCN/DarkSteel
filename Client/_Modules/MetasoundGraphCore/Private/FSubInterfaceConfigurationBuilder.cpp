// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// ~FSubInterfaceConfigurationBuilder @ 14ad3e040

void __thiscall
Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::~FSubInterfaceConfigurationBuilder
          (FSubInterfaceConfigurationBuilder *this)

{
  return;
}

// Build @ 14ad48ab0

void __thiscall
Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::Build
          (FSubInterfaceConfigurationBuilder *this,
          TArrayView<Metasound::FSubInterfaceDescription_const_,int> *param_1,
          TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> *param_2)

{
  FSubInterfaceDescription *pFVar1;
  FSubInterfaceConfiguration *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FSubInterfaceConfiguration *pFVar7;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar8;
  FSubInterfaceDescription *pFVar9;
  uint uVar10;
  FSubInterfaceLayout *pFVar11;
  longlong lVar12;
  FSubInterfaceLayout *local_res8;
  
  pTVar8 = this->SubInterfaces;
  if ((pTVar8->ArrayNum != 0) && (uVar10 = 0, 0 < pTVar8->ArrayNum)) {
    lVar12 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < pTVar8->ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = param_1->DataPtr;
      pFVar11 = (FSubInterfaceLayout *)((pTVar8->AllocatorInstance).Data + lVar12);
      pFVar1 = pFVar9 + param_1->ArrayNum;
      if (pFVar9 != pFVar1) {
        do {
          if (pFVar9->SubInterfaceName == pFVar11->SubInterfaceName) {
            if (pFVar9 == (FSubInterfaceDescription *)0x0) goto LAB_14ad48b77;
            goto LAB_14ad48b8e;
          }
          pFVar9 = pFVar9 + 1;
        } while (pFVar9 != pFVar1);
      }
      pFVar9 = (FSubInterfaceDescription *)0x0;
LAB_14ad48b77:
      local_res8 = pFVar11;
      bVar4 = `Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::Build'::__l8::<lambda_2>
              ::operator()(&local_res8);
      if (bVar4) {
LAB_14ad48b8e:
        pFVar7 = param_2->DataPtr;
        uVar5 = pFVar9->NumDefault;
        pFVar2 = pFVar7 + param_2->ArrayNum;
        if (pFVar7 != pFVar2) {
          do {
            if (pFVar7->SubInterfaceName == pFVar11->SubInterfaceName) {
              uVar6 = pFVar9->Max;
              if (pFVar7->Num < pFVar9->Max) {
                uVar6 = pFVar7->Num;
              }
              uVar5 = pFVar9->Min;
              if (pFVar9->Min < uVar6) {
                uVar5 = uVar6;
              }
              break;
            }
            pFVar7 = pFVar7 + 1;
          } while (pFVar7 != pFVar2);
        }
        if (((pFVar11->Instances).ArrayNum != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InLayout.Instances.Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                               ,0xb0,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar5 != 1) {
          if (uVar5 == 0) {
            RemoveSubInterface(this,pFVar11,uVar10);
          }
          else {
            SetNumSubInterfaces(this,pFVar11,uVar10,uVar5);
          }
        }
      }
      pTVar8 = this->SubInterfaces;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar10 < pTVar8->ArrayNum);
  }
  return;
}

// RemoveSubInterface @ 14ad61f70

void __thiscall
Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::RemoveSubInterface
          (FSubInterfaceConfigurationBuilder *this,FSubInterfaceLayout *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  if (((param_1->Instances).ArrayNum != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLayout.Instances.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0xf0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_1->Instances).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar3 = *(int *)(param_1->Instances).AllocatorInstance.Data;
  if (((param_1->Instances).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  piVar2 = &(param_1->Instances).ArrayMax;
  iVar11 = *(int *)((param_1->Instances).AllocatorInstance.Data + 4) - iVar3;
  (param_1->Instances).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(param_1->Instances).AllocatorInstance,0,piVar2);
  }
  if (0 < iVar11) {
    (**(code **)(this->_padding_ + 0x18))(this,iVar3,iVar11);
    pTVar6 = this->SubInterfaces;
    uVar4 = pTVar6->ArrayNum;
    uVar9 = (ulonglong)(int)uVar4;
    pFVar13 = (pTVar6->AllocatorInstance).Data;
    pFVar1 = pFVar13 + uVar9 * 0x18;
    pFVar12 = pFVar13 + 0x10;
    while( true ) {
      if (pTVar6->ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar1) break;
      piVar10 = *(int **)(pFVar12 + -8);
      iVar5 = *(int *)pFVar12;
      piVar2 = piVar10 + (longlong)iVar5 * 2;
      while( true ) {
        if (*(int *)pFVar12 != iVar5) {
          `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (piVar10 == piVar2) break;
        if (iVar3 < *piVar10) {
          piVar10[1] = piVar10[1] - iVar11;
          *piVar10 = *piVar10 - iVar11;
        }
        piVar10 = piVar10 + 2;
      }
      uVar9 = (ulonglong)uVar4;
      pFVar13 = pFVar13 + 0x18;
      pFVar12 = pFVar12 + 0x18;
    }
  }
  return;
}

// SetNumSubInterfaces @ 14ad63c70

void __thiscall
Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::SetNumSubInterfaces
          (FSubInterfaceConfigurationBuilder *this,FSubInterfaceLayout *param_1,uint param_2,
          uint param_3)

{
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int iVar2;
  int *piVar3;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  undefined1 local_res10 [8];
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  FScriptContainerElement *local_58;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,TSizedDefaultAllocator<32>_>
  *local_50;
  int *local_48;
  
  local_48 = &(param_1->Instances).ArrayNum;
  if (((param_1->Instances).ArrayNum != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLayout.Instances.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0xc5,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &param_1->Instances;
  local_50 = pTVar1;
  if (((param_1->Instances).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = *(int *)(pTVar1->AllocatorInstance).Data;
  local_64 = iVar14;
  if (((param_1->Instances).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar4 = this->SubInterfaces;
  local_60 = *(int *)((pTVar1->AllocatorInstance).Data + 4);
  iVar8 = pTVar4->ArrayNum;
  local_5c = local_60 - iVar14;
  pFVar13 = (pTVar4->AllocatorInstance).Data;
  iVar14 = (param_3 - 1) * local_5c;
  pFVar12 = pFVar13 + 0x10;
  local_58 = pFVar13 + (longlong)iVar8 * 0x18;
  while( true ) {
    pFVar6 = local_58;
    if (pTVar4->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    pTVar1 = local_50;
    if (pFVar13 == pFVar6) break;
    piVar10 = *(int **)(pFVar12 + -8);
    iVar15 = *(int *)pFVar12;
    piVar3 = piVar10 + (longlong)iVar15 * 2;
    while( true ) {
      if (*(int *)pFVar12 != iVar15) {
        local_68[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_68);
      }
      if (piVar10 == piVar3) break;
      if (local_64 < *piVar10) {
        piVar10[1] = piVar10[1] + iVar14;
        *piVar10 = *piVar10 + iVar14;
      }
      piVar10 = piVar10 + 2;
    }
    pFVar13 = pFVar13 + 0x18;
    pFVar12 = pFVar12 + 0x18;
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3);
  }
  piVar3 = &local_50->ArrayMax;
  if (local_50->ArrayMax < (int)param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_3,&local_50->AllocatorInstance,local_50->ArrayNum,piVar3);
  }
  iVar14 = pTVar1->ArrayNum;
  if (iVar14 < (int)param_3) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_3 - iVar14,&pTVar1->AllocatorInstance,local_48,piVar3);
    DefaultConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,param_3 - iVar14);
  }
  else if ((int)param_3 < iVar14) {
    uVar11 = iVar14 - param_3;
    if (((int)(uVar11 | param_3) < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar11 != 0) {
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)param_3 * 8;
      iVar14 = (pTVar1->ArrayNum - uVar11) - param_3;
      if (iVar14 != 0) {
        memmove(pFVar12,pFVar12 + (longlong)(int)uVar11 * 8,(longlong)iVar14 << 3);
      }
      pTVar1->ArrayNum = pTVar1->ArrayNum - uVar11;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,piVar3);
    }
  }
  iVar8 = local_5c;
  iVar14 = local_64;
  uVar11 = 1;
  iVar15 = local_60;
  if (1 < param_3) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < pTVar1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 8) = iVar15;
      uVar9 = 0;
      if ((int)uVar11 < pTVar1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = iVar15 + iVar8;
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 8 + 4) = iVar2;
      (**(code **)(this->_padding_ + 0x10))(this,iVar14,iVar8,iVar15,uVar11);
      uVar11 = uVar11 + 1;
      iVar15 = iVar2;
    } while (uVar11 < param_3);
  }
  return;
}

// operator() @ 15055bc00

bool __thiscall
`Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::Build'::__l8::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_167742559085395816>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_167742559085395816>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::Build(TArrayView<Metasound::FSubInterfaceDescription_const_,int>,TArrayView<Metasound::FSubInterfaceConfiguration_const_,int>)___ptr64'::`8'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055bc67;
    }
  }
  bVar2 = false;
LAB_15055bc67:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

