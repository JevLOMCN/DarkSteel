// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FSyntaxTokenizer @ 1428463b0

FSyntaxTokenizer * __thiscall
FSyntaxTokenizer::FSyntaxTokenizer
          (FSyntaxTokenizer *this,
          TArray<FSyntaxTokenizer::FRule,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSyntaxTokenizer__6B_;
  (this->Rules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rules).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Rules).ArrayNum = param_1->ArrayNum;
  (this->Rules).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)(param_1->AllocatorInstance).Data,0);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FSyntaxTokenizer @ 142849f50

void __thiscall FSyntaxTokenizer::~FSyntaxTokenizer(FSyntaxTokenizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSyntaxTokenizer__6B_;
  DestructItems<FSyntaxTokenizer::FRule,int>
            ((FRule *)(this->Rules).AllocatorInstance.Data,(this->Rules).ArrayNum);
  pFVar1 = (this->Rules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISyntaxTokenizer__6B_;
  return;
}

// Create @ 142865c80

TSharedRef<FSyntaxTokenizer,1> * __cdecl
FSyntaxTokenizer::Create
          (TSharedRef<FSyntaxTokenizer,1> *__return_storage_ptr__,
          TArray<FSyntaxTokenizer::FRule,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TRawPtrProxy<FSyntaxTokenizer> local_res8;
  
  local_res8.Object = ::operator_new(0x18);
  if (local_res8.Object != (FSyntaxTokenizer *)0x0) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = param_1->ArrayMax;
    iVar2 = param_1->ArrayNum;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    (local_res8.Object)->_padding_ = (longlong)&___7FSyntaxTokenizer__6B_;
    ((local_res8.Object)->Rules).AllocatorInstance.Data = pFVar3;
    ((local_res8.Object)->Rules).ArrayMax = iVar1;
    ((local_res8.Object)->Rules).ArrayNum = iVar2;
    DestructItems<FSyntaxTokenizer::FRule,int>((FRule *)0x0,0);
  }
  TSharedRef<FSyntaxTokenizer,1>::TSharedRef<FSyntaxTokenizer,1><FSyntaxTokenizer>
            (__return_storage_ptr__,&local_res8);
  DestructItems<FSyntaxTokenizer::FRule,int>
            ((FRule *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// Process @ 142892930

void __thiscall
FSyntaxTokenizer::Process
          (FSyntaxTokenizer *this,
          TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  TArray<FTextRange,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FTextRange::CalculateLineRangesFromString(param_2,&local_18);
  TokenizeLineRanges(this,param_2,&local_18,param_1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// TokenizeLineRanges @ 14289dd40

void __thiscall
FSyntaxTokenizer::TokenizeLineRanges
          (FSyntaxTokenizer *this,FString *param_1,
          TArray<FTextRange,TSizedDefaultAllocator<32>_> *param_2,
          TArray<ISyntaxTokenizer::FTokenizedLine,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  wchar_t *_Str2;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  ulonglong local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  uint local_88;
  FScriptContainerElement *local_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  FScriptContainerElement *local_50;
  TSharedRef<IBreakIterator,1> local_48;
  
  FBreakIterator::CreateWordBreakIterator(&local_48);
  (**(code **)((longlong)*local_48.Object + 0x18))();
  local_88 = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)local_88;
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar12 = pFVar15 + uVar10 * 8;
  local_50 = pFVar12;
  do {
    local_80 = pFVar15;
    if (param_2->ArrayNum != (int)uVar10) {
      local_a8 = 0;
      `TCheckedPointerIterator<FTextRange_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a8);
    }
    if (pFVar15 == pFVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return;
    }
    uVar10 = *(ulonglong *)pFVar15;
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar6 = (int)(uVar10 >> 0x20);
    local_90 = 0;
    iVar8 = (int)uVar10;
    local_a0 = uVar10;
    if (iVar6 - iVar8 < 1) {
      local_78 = CONCAT31(local_78._1_3_,1);
      iStack_74 = iVar8;
      iStack_70 = iVar6;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
      local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
      *(ulonglong *)(local_98.Data + (longlong)iVar6 * 0xc) = CONCAT44(iStack_74,local_78);
      *(int *)(local_98.Data + (longlong)iVar6 * 0xc + 8) = iStack_70;
    }
    else if (iVar8 < iVar6) {
LAB_14289de30:
      iVar6 = (this->Rules).ArrayNum;
      pFVar12 = (this->Rules).AllocatorInstance.Data;
      pFVar15 = pFVar12 + (longlong)iVar6 * 0x10;
      do {
        if ((this->Rules).ArrayNum != iVar6) {
          local_a7[0] = 0;
          `TCheckedPointerIterator<FSyntaxTokenizer::FRule,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_a7);
        }
        uVar14 = (uint)uVar10;
        if (pFVar12 == pFVar15) {
          uVar9 = (**(code **)((longlong)*local_48.Object + 0x88))
                            (local_48.Object,uVar10 & 0xffffffff);
          pFVar15 = local_80;
          uVar11 = *(uint *)(local_80 + 4);
          if ((uVar9 != 0xffffffff) && ((int)uVar9 < (int)uVar11)) {
            uVar11 = uVar9;
          }
          local_60 = CONCAT31(local_60._1_3_,1);
          iVar6 = (int)local_90;
          uStack_5c = uVar14;
          local_58 = uVar11;
          if ((int)local_90 == local_90._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
          *(ulonglong *)(local_98.Data + (longlong)iVar6 * 0xc) = CONCAT44(uStack_5c,local_60);
          *(uint *)(local_98.Data + (longlong)iVar6 * 0xc + 8) = uVar11;
          goto LAB_14289dfdb;
        }
        if (*(int *)(pFVar12 + 8) == 0) {
          _Str2 = L"";
          iVar8 = 0;
        }
        else {
          _Str2 = *(wchar_t **)pFVar12;
          iVar8 = *(int *)(pFVar12 + 8) + -1;
        }
        if ((int)uVar14 < 0) {
code_r0x00014289dea8:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          iVar2 = (param_1->Data).ArrayNum;
          iVar7 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= (int)uVar14) goto code_r0x00014289dea8;
        }
        iVar8 = wcsncmp((wchar_t *)
                        ((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar14 * 2),_Str2,
                        (longlong)iVar8);
        if (iVar8 == 0) goto LAB_14289def3;
        pFVar12 = pFVar12 + 0x10;
      } while( true );
    }
LAB_14289dff4:
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < pFVar3 + (longlong)param_3->ArrayMax * 0x18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    _Src.Data = local_98.Data;
    param_3->ArrayNum = iVar6 + 1;
    pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
    *(ulonglong *)pFVar1 = local_a0;
    pFVar3 = pFVar1 + 8;
    *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
    lVar13 = (longlong)(int)local_90;
    *(int *)(pFVar1 + 0x10) = (int)local_90;
    if ((int)local_90 == 0) {
      *(int *)(pFVar1 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)local_90,0,(ForAnyElementType *)pFVar3,(int)local_90,
                 (int *)(pFVar1 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,_Src.Data,lVar13 * 0xc);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    pFVar15 = pFVar15 + 8;
    uVar10 = (ulonglong)local_88;
  } while( true );
LAB_14289def3:
  local_6c = local_6c & 0xffffff00;
  uVar11 = *(int *)(pFVar12 + 8) + -1 + uVar14;
  if (*(int *)(pFVar12 + 8) == 0) {
    uVar11 = uVar14;
  }
  iVar6 = (int)local_90;
  uStack_68 = uVar14;
  local_64 = uVar11;
  if ((int)local_90 == local_90._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
  }
  pFVar15 = local_80;
  local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
  *(ulonglong *)(local_98.Data + (longlong)iVar6 * 0xc) = CONCAT44(uStack_68,local_6c);
  *(uint *)(local_98.Data + (longlong)iVar6 * 0xc + 8) = uVar11;
  if ((*(int *)(local_80 + 4) < (int)uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SyntaxTokenEnd <= LineRange.EndIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SyntaxTokenizer.cpp"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14289dfdb:
  uVar10 = (ulonglong)uVar11;
  pFVar12 = local_50;
  if (*(int *)(pFVar15 + 4) <= (int)uVar11) goto LAB_14289dff4;
  goto LAB_14289de30;
}

