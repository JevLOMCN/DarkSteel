// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// FInitializer @ 1425bd130

FInitializer * __thiscall
FSlateAttributeDescriptor::FInitializer::FInitializer
          (FInitializer *this,FSlateAttributeDescriptor *param_1)

{
  this->Descriptor = param_1;
  return this;
}

// FInitializer @ 1425bd140

FInitializer * __thiscall
FSlateAttributeDescriptor::FInitializer::FInitializer
          (FInitializer *this,FSlateAttributeDescriptor *param_1,FSlateAttributeDescriptor *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FAttribute *pFVar4;
  ForElementType<FSlateAttributeDescriptor::FContainer> _Dst;
  ForElementType<FSlateAttributeDescriptor::FContainer> _Src;
  
  this->Descriptor = param_1;
  if (param_1 != param_2) {
    DestructItems<FSlateAttributeDescriptor::FAttribute,int>
              ((FAttribute *)(param_1->Attributes).AllocatorInstance.Data,
               (param_1->Attributes).ArrayNum);
    iVar2 = (param_2->Attributes).ArrayNum;
    piVar1 = &(param_1->Attributes).ArrayMax;
    pFVar4 = (FAttribute *)(param_2->Attributes).AllocatorInstance.Data;
    (param_1->Attributes).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,*piVar1,(ForAnyElementType *)param_1,iVar2,piVar1);
      ConstructItems<FSlateAttributeDescriptor::FAttribute,FSlateAttributeDescriptor::FAttribute,int>
                ((param_1->Attributes).AllocatorInstance.Data,pFVar4,iVar2);
    }
    iVar2 = (param_2->Containers).ArrayNum;
    _Src = (param_2->Containers).AllocatorInstance.SecondaryData;
    iVar3 = (param_1->Containers).ArrayMax;
    piVar1 = &(param_1->Containers).ArrayMax;
    (param_1->Containers).ArrayNum = iVar2;
    if (_Src == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
      _Src = (ForElementType<FSlateAttributeDescriptor::FContainer>)&param_2->Containers;
    }
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
                (0x10,4,iVar2,iVar3,&(param_1->Containers).AllocatorInstance,iVar2,piVar1);
      _Dst = (param_1->Containers).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
          _Dst = (ForElementType<FSlateAttributeDescriptor::FContainer>)&param_1->Containers;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 4);
      }
    }
  }
  return this;
}

// ~FInitializer @ 1425c09e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSlateAttributeDescriptor::FInitializer::~FInitializer(FInitializer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  uchar *puVar14;
  FSlateAttributeDescriptor *pFVar15;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar16;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar17;
  int *piVar18;
  ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
  FVar19;
  ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
  FVar20;
  uint uVar21;
  ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
  FVar22;
  longlong lVar23;
  undefined1 auStackY_248 [32];
  FIdentityFunctor local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  FIdentityFunctor local_214 [4];
  FInitializer *local_210;
  longlong local_200;
  longlong *local_1f8;
  FSlateAttributeDescriptor *local_1f0;
  ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
  local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TArrayView<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort,int>
  local_1d8;
  ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
  local_1c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_210 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_Visibility,"Visibility");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar15 = this->Descriptor;
  pFVar13 = (FName *)(pFVar15->Attributes).AllocatorInstance.Data;
  iVar11 = (pFVar15->Attributes).ArrayNum;
  pFVar9 = pFVar13 + (longlong)iVar11 * 0xb;
  for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 0xb) {
    if (*pFVar13 == NAME_Visibility) goto LAB_1425c0a64;
  }
  pFVar13 = (FName *)0x0;
LAB_1425c0a64:
  if ((iVar11 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attributes.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x19a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((pFVar15->Attributes).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((FName *)(pFVar15->Attributes).AllocatorInstance.Data != pFVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&Descriptor.GetAttributeAtIndex(0) == FoundVisibilityAttribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0xb5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar13 == (FName *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundVisibilityAttribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0xb6,L"The visibility attribute doesn\'t exist."), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(char *)((longlong)&pFVar13[10].ComparisonIndex.Value + 1) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundVisibilityAttribute->bAffectVisibility",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0xb7,L"The Visibility attribute must be marked as \'Affect Visibility\'"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = this->Descriptor;
  iVar11 = (pFVar15->Containers).ArrayNum;
  if (0 < iVar11) {
    FVar16 = (pFVar15->Containers).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
      FVar16 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&pFVar15->Containers;
    }
    puVar14 = (uchar *)((longlong)FVar16 + 0xc);
    while( true ) {
      if ((pFVar15->Containers).ArrayNum != iVar11) {
        local_217 = 0;
        `TCheckedPointerIterator<FSlateAttributeDescriptor::FContainer,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_217);
      }
      if ((ForElementType<FSlateAttributeDescriptor::FContainer> *)(puVar14 + -0xc) ==
          (ForElementType<FSlateAttributeDescriptor::FContainer> *)
          ((longlong)iVar11 * 0x10 + (longlong)FVar16)) break;
      *(int *)puVar14 = *(int *)(puVar14 + -4) * 100;
      puVar14 = puVar14 + 0x10;
    }
    pFVar15 = this->Descriptor;
    FVar16 = (pFVar15->Containers).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
      FVar16 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&pFVar15->Containers;
    }
    AlgoImpl::
    IntroSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l33::<lambda_1>_>_>
              ((FContainer *)FVar16,(pFVar15->Containers).ArrayNum,local_218,
               (<lambda_1> *)&local_218);
  }
  local_1c8.SecondaryData =
       (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
        )0x0;
  local_40 = 0;
  local_3c = 0x20;
  uVar21 = (this->Descriptor->Attributes).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0x20 < (int)uVar21) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
              (0xc,4,uVar21,&local_1c8,0,&local_3c);
  }
  pFVar15 = this->Descriptor;
  bVar5 = false;
  uVar21 = 0;
  if (0 < (pFVar15->Attributes).ArrayNum) {
    lVar23 = 0;
    do {
      uVar12 = 0xffffffff;
      uVar7 = 0;
      if ((int)uVar21 < (pFVar15->Attributes).ArrayNum) {
        uVar7 = ~uVar21 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pFVar15->Attributes).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar23 + 0x14) == 0) {
        iVar11 = *(int *)(pFVar2 + lVar23 + 8) * 100;
        pFVar2[lVar23 + 0x20] = (FScriptContainerElement)0xff;
      }
      else {
        pFVar15 = this->Descriptor;
        FVar16 = (pFVar15->Containers).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&pFVar15->Containers;
        if (FVar16 != (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
          FVar17 = FVar16;
        }
        for (FVar16 = FVar17;
            FVar16 != (ForElementType<FSlateAttributeDescriptor::FContainer>)
                      ((longlong)(pFVar15->Containers).ArrayNum * 0x10 + (longlong)FVar17);
            FVar16 = (ForElementType<FSlateAttributeDescriptor::FContainer>)
                     ((longlong)FVar16 + 0x10)) {
          if (*(longlong *)FVar16 == *(longlong *)(pFVar2 + lVar23 + 0x14)) {
            uVar12 = (uint)((longlong)FVar16 - (longlong)FVar17 >> 4);
            if (uVar12 != 0xffffffff) goto LAB_1425c0d3b;
            break;
          }
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                           ,0x116,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_1425c0d3b:
        pFVar2[lVar23 + 0x20] = SUB41(uVar12,0);
        pFVar15 = this->Descriptor;
        uVar7 = 0;
        if ((int)uVar12 < (pFVar15->Containers).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar16 = (pFVar15->Containers).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&pFVar15->Containers;
        if (FVar16 != (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
          FVar17 = FVar16;
        }
        iVar11 = *(int *)((uchar *)((longlong)FVar17 + 0xc) + (longlong)(int)uVar12 * 0x10) +
                 *(int *)(pFVar2 + lVar23 + 8) * 10;
      }
      *(int *)(pFVar2 + lVar23 + 0x1c) = iVar11;
      lVar8 = *(longlong *)(pFVar2 + lVar23 + 0xc);
      if (lVar8 == 0) {
        uVar7 = 0xffffffff;
        if ((uVar21 != 0) &&
           (uVar7 = 0xffffffff, pFVar2[lVar23 + 0x51] != (FScriptContainerElement)0x0)) {
          bVar5 = true;
          uVar7 = 0;
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
                               (0x40c,&local_1c8,&local_3c);
        }
        lVar8 = (longlong)local_40;
        local_40 = local_40 + 1;
        FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                  )&local_1c8;
        if (local_1c8.SecondaryData !=
            (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
             )0x0) {
          FVar19 = local_1c8.SecondaryData;
        }
        ((int *)((longlong)FVar19 + 4))[lVar8 * 3] = uVar7;
LAB_1425c0f42:
        ((int *)((longlong)FVar19 + 8))[lVar8 * 3] = 0;
      }
      else {
        pFVar2 = (this->Descriptor->Attributes).AllocatorInstance.Data;
        iVar11 = (this->Descriptor->Attributes).ArrayNum;
        for (pFVar10 = pFVar2; local_200 = lVar8, pFVar10 != pFVar2 + (longlong)iVar11 * 0x58;
            pFVar10 = pFVar10 + 0x58) {
          if (*(longlong *)pFVar10 == lVar8) {
            uVar7 = (uint)(((longlong)pFVar10 - (longlong)pFVar2) / 0x58);
            if (((int)uVar7 < 0) || (iVar11 <= (int)uVar7)) goto LAB_1425c0e00;
            goto LAB_1425c0e97;
          }
        }
        uVar7 = 0xffffffff;
LAB_1425c0e00:
        local_1f8 = &local_200;
        bVar6 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l55::<lambda_4>::
                operator()(&local_1f8);
        if (!bVar6) {
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
                                 (0x40c,&local_1c8,&local_3c);
          }
          lVar8 = (longlong)local_40;
          local_40 = local_40 + 1;
          FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                    )&local_1c8;
          if (local_1c8.SecondaryData !=
              (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
               )0x0) {
            FVar19 = local_1c8.SecondaryData;
          }
          ((int *)((longlong)FVar19 + 4))[lVar8 * 3] = 0xffffffff;
          goto LAB_1425c0f42;
        }
LAB_1425c0e97:
        iVar11 = local_40;
        if (local_40 == local_3c) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
                             (0x40c,&local_1c8,&local_3c);
        }
        bVar5 = true;
        local_40 = iVar11 + 1;
        lVar8 = (longlong)iVar11;
        FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                  )&local_1c8;
        if (local_1c8.SecondaryData !=
            (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
             )0x0) {
          FVar19 = local_1c8.SecondaryData;
        }
        ((int *)((longlong)FVar19 + 4))[lVar8 * 3] = uVar7;
        ((int *)((longlong)FVar19 + 8))[lVar8 * 3] = 0xffffffff;
      }
      ((FPrerequisiteSort *)((longlong)FVar19 + lVar8 * 0xc))->AttributeIndex = uVar21;
      iVar11 = local_40;
      lVar23 = lVar23 + 0x58;
      pFVar15 = this->Descriptor;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (pFVar15->Attributes).ArrayNum);
    if (bVar5) {
      lVar23 = (longlong)local_40;
      FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                )&local_1c8;
      if (local_1c8.SecondaryData !=
          (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
           )0x0) {
        FVar19 = local_1c8.SecondaryData;
      }
      piVar18 = (int *)((longlong)FVar19 + 4);
      FVar20 = local_1c8.SecondaryData;
      while( true ) {
        if (local_40 != iVar11) {
          local_216 = 0;
          `TCheckedPointerIterator<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_216);
          FVar20 = local_1c8.SecondaryData;
        }
        iVar4 = local_40;
        if ((FPrerequisiteSort *)(piVar18 + -1) ==
            (FPrerequisiteSort *)((longlong)FVar19 + lVar23 * 0xc)) break;
        FVar22 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                  )&local_1c8;
        if (FVar20 != (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                       )0x0) {
          FVar22 = FVar20;
        }
        local_1e8 = FVar22;
        if ((local_40 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), FVar20 = local_1c8.SecondaryData, bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_1e0 = iVar4;
        if (piVar18[1] < 0) {
          if ((*piVar18 == 0xffffffff) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PrerequisitesIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                                 ,0xcd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar21 = *piVar18;
          uVar7 = 0;
          if ((int)uVar21 < iVar4) {
            uVar7 = ~uVar21 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int *)((longlong)FVar22 + 8))[(longlong)(int)uVar21 * 3] < 0) {
            uVar21 = *piVar18;
            uVar7 = 0;
            if ((int)uVar21 < iVar4) {
              uVar7 = ~uVar21 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_1d8._12_4_ = uStack_1dc;
            local_1d8.ArrayNum = iStack_1e0;
            local_1d8.DataPtr = (FPrerequisiteSort *)local_1e8;
            `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort::
            CalculateDepth((FPrerequisiteSort *)((longlong)FVar22 + (longlong)(int)uVar21 * 0xc),
                           &local_1d8);
          }
          uVar21 = *piVar18;
          uVar7 = 0;
          if ((int)uVar21 < iVar4) {
            uVar7 = ~uVar21 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          piVar18[1] = ((int *)((longlong)FVar22 + 8))[(longlong)(int)uVar21 * 3] + 1;
          FVar20 = local_1c8.SecondaryData;
        }
        piVar18 = piVar18 + 3;
      }
      local_1f0 = this->Descriptor;
      FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                )&local_1c8;
      if (FVar20 != (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                     )0x0) {
        FVar19 = FVar20;
      }
      AlgoImpl::
      IntroSortInternal<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSortPredicate>_>
                ((FPrerequisiteSort *)FVar19,local_40,local_218,
                 (FPrerequisiteSortPredicate *)&local_1f0);
      iVar4 = local_40;
      iVar11 = 1;
      uVar21 = 0xffffffff;
      FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                )&local_1c8;
      if (local_1c8.SecondaryData !=
          (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
           )0x0) {
        FVar19 = local_1c8.SecondaryData;
      }
      FVar20 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                )((longlong)FVar19 + (longlong)local_40 * 0xc);
      while( true ) {
        if (local_40 != iVar4) {
          local_215 = 0;
          `TCheckedPointerIterator<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_215);
        }
        if (FVar19 == FVar20) break;
        uVar7 = *(int *)((longlong)FVar19 + 4);
        if (uVar7 != 0xffffffff) {
          iVar1 = iVar11 + 1;
          if (uVar21 != uVar7) {
            iVar1 = iVar11;
          }
          iVar11 = iVar1;
          pFVar15 = local_210->Descriptor;
          uVar21 = 0;
          if ((int)uVar7 < (pFVar15->Attributes).ArrayNum) {
            uVar21 = ~uVar7 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar21 = *(uint *)FVar19;
          iVar1 = *(int *)((pFVar15->Attributes).AllocatorInstance.Data +
                          (longlong)(int)uVar7 * 0x58 + 0x1c);
          pFVar15 = local_210->Descriptor;
          uVar7 = 0;
          if ((int)uVar21 < (pFVar15->Attributes).ArrayNum) {
            uVar7 = ~uVar21 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(int *)((pFVar15->Attributes).AllocatorInstance.Data +
                  (longlong)(int)uVar21 * 0x58 + 0x1c) = iVar1 + iVar11;
        }
        uVar21 = *(int *)((longlong)FVar19 + 4);
        FVar19 = (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
                  )((longlong)FVar19 + 0xc);
      }
      AlgoImpl::
      IntroSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l67::<lambda_5>_>_>
                ((FAttribute *)(local_210->Descriptor->Attributes).AllocatorInstance.Data,
                 (local_210->Descriptor->Attributes).ArrayNum,local_214[0],(<lambda_5> *)local_214);
    }
  }
  if (local_1c8.SecondaryData !=
      (ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
       )0x0) {
    FMemory::Free((void *)local_1c8.SecondaryData);
  }
  return;
}

// AddContainer @ 1425c77d0

FContainerInitializer * __thiscall
FSlateAttributeDescriptor::FInitializer::AddContainer
          (FInitializer *this,FContainerInitializer *__return_storage_ptr__,FName param_1,
          uint param_2)

{
  TArray<FSlateAttributeDescriptor::FContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  FSlateAttributeDescriptor *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FContainerInitializer *pFVar7;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar8;
  FName *pFVar9;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar10;
  FName local_res8;
  FName *local_res10;
  
  pFVar3 = this->Descriptor;
  local_res8 = param_1;
  if ((param_1 == (FName)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ContainerName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x1f2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FContainerInitializer *)(*pcVar4)();
    return pFVar7;
  }
  FVar8 = (pFVar3->Containers).AllocatorInstance.SecondaryData;
  pTVar1 = &pFVar3->Containers;
  if (FVar8 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FVar8 = (ForElementType<FSlateAttributeDescriptor::FContainer>)pTVar1;
  }
  FVar10 = (ForElementType<FSlateAttributeDescriptor::FContainer>)
           ((longlong)(pFVar3->Containers).ArrayNum * 0x10 + (longlong)FVar8);
  do {
    if (FVar8 == FVar10) {
LAB_1425c7861:
      iVar6 = (pFVar3->Containers).ArrayNum;
      piVar2 = &(pFVar3->Containers).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
                          (0x410,&pTVar1->AllocatorInstance,piVar2);
      }
      (pFVar3->Containers).ArrayNum = iVar6 + 1;
      FVar8 = (pFVar3->Containers).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
        FVar8 = (ForElementType<FSlateAttributeDescriptor::FContainer>)pTVar1;
      }
      pFVar9 = (FName *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
      *pFVar9 = local_res8;
      pFVar9[1].ComparisonIndex.Value = param_2;
      pFVar9[1].Number = 0;
LAB_1425c78a6:
      __return_storage_ptr__->ContainerName = local_res8;
      __return_storage_ptr__->Descriptor = pFVar3;
      return __return_storage_ptr__;
    }
    if (*(FName *)FVar8 == local_res8) {
      local_res10 = &local_res8;
      bVar5 = `FSlateAttributeDescriptor::AddContainer'::__l10::<lambda_1>::operator()(&local_res10)
      ;
      if (!bVar5) goto LAB_1425c78a6;
      goto LAB_1425c7861;
    }
    FVar8 = (ForElementType<FSlateAttributeDescriptor::FContainer>)((longlong)FVar8 + 0x10);
  } while( true );
}

// AddMemberAttribute @ 1425c8990

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
          (FInitializer *this,FAttributeEntry *__return_storage_ptr__,FName param_1,uint param_2,
          FInvalidateWidgetReasonAttribute *param_3)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  local_28.Reason = param_3->Reason;
  local_28.Getter._0_8_ = *(undefined8 *)&param_3->Getter;
  local_28.Getter._8_4_ = *(undefined4 *)&(param_3->Getter).field_0x8;
  *(undefined8 *)&param_3->Getter = 0;
  *(undefined4 *)&(param_3->Getter).field_0x8 = 0;
  FSlateAttributeDescriptor::AddMemberAttribute
            (this_00,__return_storage_ptr__,param_1,param_2,&local_28);
  return __return_storage_ptr__;
}

// AddMemberAttribute @ 1425c89f0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
          (FInitializer *this,FAttributeEntry *__return_storage_ptr__,FName param_1,uint param_2,
          FInvalidateWidgetReasonAttribute *param_3)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute *pFVar1;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  pFVar1 = FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute(&local_28,param_3);
  FSlateAttributeDescriptor::AddMemberAttribute
            (this_00,__return_storage_ptr__,param_1,param_2,pFVar1);
  return __return_storage_ptr__;
}

// OverrideInvalidationReason @ 1425f1330

void __thiscall
FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
          (FInitializer *this,FName param_1,FInvalidateWidgetReasonAttribute *param_2)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  local_28.Reason = param_2->Reason;
  local_28.Getter._0_8_ = *(undefined8 *)&param_2->Getter;
  local_28.Getter._8_4_ = *(undefined4 *)&(param_2->Getter).field_0x8;
  *(undefined4 *)&(param_2->Getter).field_0x8 = 0;
  *(undefined8 *)&param_2->Getter = 0;
  FSlateAttributeDescriptor::OverrideInvalidationReason(this_00,(FName)0x0,param_1,&local_28);
  return;
}

// OverrideInvalidationReason @ 1425f1380

void __thiscall
FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
          (FInitializer *this,FName param_1,FInvalidateWidgetReasonAttribute *param_2)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute *pFVar1;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  pFVar1 = FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute(&local_28,param_2);
  FSlateAttributeDescriptor::OverrideInvalidationReason(this_00,(FName)0x0,param_1,pFVar1);
  return;
}

// OverrideOnValueChanged @ 1425f1570

void __thiscall
FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
          (FInitializer *this,FName param_1,ECallbackOverrideType param_2,
          TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_3)

{
  FSlateAttributeDescriptor *this_00;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> local_18;
  
  this_00 = this->Descriptor;
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_4_ = *(undefined4 *)&param_3->field_0x8;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)&param_3->field_0x8 = 0;
  FSlateAttributeDescriptor::OverrideOnValueChanged(this_00,(FName)0x0,param_1,param_2,&local_18);
  if ((*(int *)&param_3->field_0x8 != 0) && (*(undefined8 **)param_3 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_3,0,0,0x10);
    *(undefined4 *)&param_3->field_0x8 = 0;
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
    return;
  }
  return;
}

// SetAffectVisibility @ 1425fb710

void __thiscall
FSlateAttributeDescriptor::FInitializer::SetAffectVisibility
          (FInitializer *this,FName param_1,bool param_2)

{
  bool bVar1;
  FAttribute *pFVar2;
  FAttribute *pFVar3;
  FName *local_res8;
  FName local_res10;
  
  pFVar2 = (FAttribute *)(this->Descriptor->Attributes).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->Descriptor->Attributes).ArrayNum;
  for (; local_res10 = param_1, pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
    if (pFVar2->Name == param_1) goto LAB_1425fb769;
  }
  local_res8 = &local_res10;
  pFVar2 = (FAttribute *)0x0;
  bVar1 = `FSlateAttributeDescriptor::FInitializer::SetAffectVisibility'::__l3::<lambda_1>::
          operator()(&local_res8);
  if (bVar1) {
LAB_1425fb769:
    FSlateAttributeDescriptor::SetAffectVisibility(this->Descriptor,pFVar2,param_2);
  }
  return;
}

// operator() @ 150490770

bool __thiscall
`FSlateAttributeDescriptor::FInitializer::SetAffectVisibility'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204464>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204464>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504907d7;
    }
  }
  bVar2 = false;
LAB_1504907d7:
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

// operator() @ 150491b60

bool __thiscall
`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l55::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204571>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204571>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491bc7;
    }
  }
  bVar2 = false;
LAB_150491bc7:
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

