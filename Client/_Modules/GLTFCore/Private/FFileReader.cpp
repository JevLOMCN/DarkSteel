// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 34

// FFileReader @ 14e629e90

FFileReader * __thiscall GLTF::FFileReader::FFileReader(FFileReader *this)

{
  FBinaryFileReader *pFVar1;
  FBinaryFileReader *pFVar2;
  FBinaryFileReader *pFVar3;
  
  pFVar3 = (FBinaryFileReader *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->BufferCount = 0;
  this->BufferViewCount = 0;
  this->ImageCount = 0;
  (this->JsonRoot).Object = (FJsonObject *)0x0;
  (this->JsonRoot).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->JsonBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonBuffer).Data.ArrayNum = 0;
  (this->JsonBuffer).Data.ArrayMax = 0;
  pFVar1 = ::operator_new(0x28);
  pFVar2 = pFVar3;
  if (pFVar1 != (FBinaryFileReader *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    (pFVar1->JsonChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->JsonChunk).ArrayNum = 0;
    (pFVar1->JsonChunk).ArrayMax = 0;
    pFVar1->BinChunk = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0;
    pFVar2 = pFVar1;
  }
  (this->BinaryReader).Ptr = pFVar2;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FBinaryFileReader *)0x0) {
    pFVar2->_padding_ = (longlong)this;
    pFVar2->_padding_ = 0;
    pFVar3 = pFVar2;
  }
  (this->ExtensionsHandler).Ptr = (FExtensionsHandler *)pFVar3;
  this->Asset = (FAsset *)0x0;
  return this;
}

// ~FFileReader @ 14e62bc00

void __thiscall GLTF::FFileReader::~FFileReader(FFileReader *this)

{
  FBinaryFileReader *pFVar1;
  FScriptContainerElement *pFVar2;
  
  ::operator_delete((this->ExtensionsHandler).Ptr,0x10);
  pFVar1 = (this->BinaryReader).Ptr;
  if (pFVar1 != (FBinaryFileReader *)0x0) {
    pFVar2 = (pFVar1->JsonChunk).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
              ((TTuple<GLTF::EMessageSeverity,FText> *)pFVar1->_padding_,(int)pFVar1->_padding_);
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x28);
  }
  pFVar2 = (this->JsonBuffer).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonRoot).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
            ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// operator() @ 14e62c0b0

int __thiscall
`GLTF::FFileReader::BuildRootJoints'::__l3::<lambda_1>::operator()(void *this,FNode *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = param_1->Index;
  iVar6 = 0;
  while( true ) {
    uVar9 = ~uVar7 >> 0x1f;
    lVar2 = *(longlong *)(*(longlong *)this + 0x50);
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x68)) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    lVar8 = (longlong)(int)uVar7 * 0x260;
    if (*(int *)(lVar8 + 0xcc + *(longlong *)(lVar2 + 0x60)) == -1) {
      return iVar6;
    }
    lVar2 = *(longlong *)(*(longlong *)this + 0x50);
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x68)) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    iVar1 = *(int *)(lVar8 + 0xcc + *(longlong *)(lVar2 + 0x60));
    if (iVar1 < 0) {
      return iVar6;
    }
    if (*(int *)(lVar2 + 0x68) <= iVar1) {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    lVar2 = *(longlong *)(*(longlong *)this + 0x50);
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x68)) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    uVar7 = *(uint *)(lVar8 + 0xcc + *(longlong *)(lVar2 + 0x60));
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// AllocateExtraData @ 14e62d650

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FFileReader::AllocateExtraData
          (FFileReader *this,FString *param_1,bool param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  TSharedPtr<FJsonObject,1> *pTVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  FString *pFVar11;
  FPlatformFileManager *pFVar12;
  IPlatformFile *pIVar13;
  FScriptContainerElement *pFVar14;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  char cVar24;
  undefined1 local_238;
  undefined1 local_237 [7];
  FScriptContainerElement *local_230;
  uint local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1b0;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  pFVar20 = (FScriptContainerElement *)0x0;
  pTVar1 = &this->JsonRoot;
  local_230 = (FScriptContainerElement *)0x0;
  iVar22 = 0;
  pFVar14 = pFVar20;
  if (this->BufferCount != 0) {
    if ((pTVar1->Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1a8 = L"buffers";
    uStack_1a0 = 7;
    local_108._12_4_ = uStack_19c;
    local_108.Size = 7;
    local_108.DataPtr = L"buffers";
    local_1b0 = FJsonObject::GetArrayField(pTVar1->Object,&local_108);
    local_228 = local_1b0->ArrayNum;
    uVar17 = (ulonglong)(int)local_228;
    pFVar21 = (local_1b0->AllocatorInstance).Data;
    local_1b8 = pFVar21 + uVar17 * 0x10;
    while( true ) {
      pFVar23 = local_1b8;
      if (local_1b0->ArrayNum != (int)uVar17) {
        local_238 = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_238);
      }
      if (pFVar21 == pFVar23) break;
      if ((*(longlong *)pFVar21 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar9 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
      if ((*plVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)*plVar9;
      local_198 = L"byteLength";
      uStack_190 = 10;
      local_f8._12_4_ = uStack_18c;
      local_f8.Size = 10;
      local_f8.DataPtr = L"byteLength";
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteLength");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar5,&local_f8);
      if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
         || (pTVar10->Object->Type != Number)) {
LAB_14e62d814:
        pFVar23 = pFVar20;
      }
      else {
        local_188 = L"byteLength";
        uStack_180 = 10;
        local_e8._12_4_ = uStack_17c;
        local_e8.Size = 10;
        local_e8.DataPtr = L"byteLength";
        bVar4 = FJsonObject::TryGetNumberField
                          ((FJsonObject *)pTVar2,&local_e8,(ulong64 *)&local_1c0);
        pFVar23 = local_1c0;
        if (!bVar4) goto LAB_14e62d814;
      }
      uStack_170 = 3;
      local_178 = L"uri";
      local_d8._12_4_ = uStack_16c;
      local_d8.Size = 3;
      local_d8.DataPtr = L"uri";
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"uri");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar5,&local_d8);
      if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
         && (pTVar10->Object->Type == String)) {
        uStack_160 = 3;
        local_168 = L"uri";
        local_c8._12_4_ = uStack_15c;
        local_c8.Size = 3;
        local_c8.DataPtr = L"uri";
        FJsonObject::GetStringField((FJsonObject *)pTVar2,&local_210,&local_c8);
        bVar4 = ::FString::StartsWith(&local_210,L"data:",5,IgnoreCase);
        if (bVar4) {
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          uVar5 = GLTF::`anonymous_namespace'::GetDecodedDataSize(&local_210,&local_1e0);
          FVar19.Data = local_1e0.Data.AllocatorInstance.Data;
          if (uVar5 != 0) {
            iVar7 = local_1e0.Data.ArrayNum;
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_1e0.Data.ArrayNum != 0) {
              FVar18.Data = local_1e0.Data.AllocatorInstance.Data;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)FVar18.Data,L"application/octet-stream");
            if (iVar6 != 0) {
              FVar18.Data = (FScriptContainerElement *)L"";
              if (iVar7 != 0) {
                FVar18.Data = FVar19.Data;
              }
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)FVar18.Data,L"application/gltf-buffer");
              if (iVar7 != 0) goto joined_r0x00014e62dad7;
            }
            if (((FScriptContainerElement *)(ulonglong)uVar5 != pFVar23) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_8658679761230363642>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                                   ,0x406,"DataSize == ByteLength"), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_230 = local_230 + (longlong)pFVar23;
          }
        }
        else {
          local_158 = local_210.Data.AllocatorInstance.Data;
          iStack_150 = local_210.Data.ArrayNum + -1;
          if (local_210.Data.ArrayNum == 0) {
            iStack_150 = 0;
          }
          local_b8._12_4_ = uStack_14c;
          local_b8.Size = iStack_150;
          local_b8.DataPtr = (wchar_t *)local_210.Data.AllocatorInstance.Data;
          pFVar11 = FGenericPlatformHttp::UrlDecode(&local_a8,&local_b8);
          if (&local_210 != pFVar11) {
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
            local_210.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_210.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          iVar7 = (param_1->Data).ArrayNum;
          iVar6 = local_210.Data.ArrayNum + -1;
          if (local_210.Data.ArrayNum == 0) {
            iVar6 = iVar22;
          }
          iVar8 = iVar6 + 1;
          local_200.Data.ArrayNum = iVar7;
          if ((iVar7 == 0) && (iVar8 != 0)) {
            pFVar14 = (param_1->Data).AllocatorInstance.Data;
            iVar8 = iVar6 + 2;
LAB_14e62da32:
            local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (iVar8 != 0) goto LAB_14e62da3b;
            local_200.Data.ArrayMax = 0;
          }
          else {
            pFVar14 = (param_1->Data).AllocatorInstance.Data;
            if (iVar7 == 0) goto LAB_14e62da32;
LAB_14e62da3b:
            local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar5 = iVar8 + iVar7;
            if ((int)uVar5 < iVar7) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar5,0,(ForAnyElementType *)&local_200,iVar7,&local_200.Data.ArrayMax);
            if (iVar7 != 0) {
              memcpy(local_200.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar7 * 2);
            }
          }
          ::FString::PathAppend(&local_200,(wchar_t *)local_210.Data.AllocatorInstance.Data,iVar6);
          pFVar12 = FPlatformFileManager::Get();
          pIVar13 = FPlatformFileManager::GetPlatformFile(pFVar12);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_200.Data.ArrayNum != 0) {
            FVar19.Data = local_200.Data.AllocatorInstance.Data;
          }
          pFVar14 = (FScriptContainerElement *)
                    (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,FVar19.Data);
          FVar19.Data = local_200.Data.AllocatorInstance.Data;
          if (pFVar23 == pFVar14) {
            local_230 = local_230 + (longlong)pFVar23;
          }
        }
joined_r0x00014e62dad7:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
        pFVar14 = local_230;
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
          pFVar14 = local_230;
        }
      }
      pFVar21 = pFVar21 + 0x10;
      uVar17 = (ulonglong)local_228;
    }
  }
  if (this->ImageCount != 0) {
    if ((pTVar1->Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_148 = L"images";
    uStack_140 = 6;
    local_98._12_4_ = uStack_13c;
    local_98.Size = 6;
    local_98.DataPtr = L"images";
    pTVar15 = FJsonObject::GetArrayField(pTVar1->Object,&local_98);
    pFVar21 = (pTVar15->AllocatorInstance).Data;
    local_228 = pTVar15->ArrayNum;
    uVar17 = (ulonglong)(int)local_228;
    pFVar23 = pFVar21 + uVar17 * 0x10;
    while( true ) {
      if (pTVar15->ArrayNum != (int)uVar17) {
        local_237[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_237);
      }
      if (pFVar21 == pFVar23) break;
      if ((*(longlong *)pFVar21 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar9 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
      if ((*plVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)*plVar9;
      local_138 = L"uri";
      uStack_130 = 3;
      local_88._12_4_ = uStack_12c;
      local_88.Size = 3;
      local_88.DataPtr = L"uri";
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"uri");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar5,&local_88);
      if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
         && (pTVar10->Object->Type == String)) {
        uStack_120 = 3;
        local_128 = L"uri";
        local_78._12_4_ = uStack_11c;
        local_78.Size = 3;
        local_78.DataPtr = L"uri";
        FJsonObject::GetStringField((FJsonObject *)pTVar2,&local_220,&local_78);
        bVar4 = ::FString::StartsWith(&local_220,L"data:",5,IgnoreCase);
        if (bVar4) {
          local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.Data.ArrayNum = 0;
          local_1d0.Data.ArrayMax = 0;
          uVar5 = GLTF::`anonymous_namespace'::GetDecodedDataSize(&local_220,&local_1d0);
          FVar19.Data = local_1d0.Data.AllocatorInstance.Data;
          iVar7 = local_1d0.Data.ArrayNum;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_1d0.Data.ArrayNum != 0) {
            FVar18.Data = local_1d0.Data.AllocatorInstance.Data;
          }
          iVar6 = wcscmp((wchar_t *)FVar18.Data,L"image/jpeg");
          if (iVar6 == 0) {
LAB_14e62dd48:
            cVar24 = '\x02';
          }
          else {
            FVar18.Data = (FScriptContainerElement *)L"";
            if (iVar7 != 0) {
              FVar18.Data = FVar19.Data;
            }
            iVar6 = wcscmp((wchar_t *)FVar18.Data,L"image/jpg");
            if (iVar6 == 0) goto LAB_14e62dd48;
            FVar18.Data = (FScriptContainerElement *)L"";
            if (iVar7 != 0) {
              FVar18.Data = FVar19.Data;
            }
            iVar7 = wcscmp((wchar_t *)FVar18.Data,L"image/png");
            cVar24 = iVar7 == 0;
          }
          if ((uVar5 != 0) && (cVar24 != '\0')) {
            local_230 = local_230 + uVar5;
          }
          pFVar14 = local_230;
          if (FVar19.Data != (FScriptContainerElement *)0x0) {
LAB_14e62df52:
            pFVar14 = local_230;
            FMemory::Free(FVar19.Data);
          }
        }
        else if (param_2) {
          local_118 = local_220.Data.AllocatorInstance.Data;
          iStack_110 = local_220.Data.ArrayNum + -1;
          if (local_220.Data.ArrayNum == 0) {
            iStack_110 = iVar22;
          }
          local_68._12_4_ = uStack_10c;
          local_68.Size = iStack_110;
          local_68.DataPtr = (wchar_t *)local_220.Data.AllocatorInstance.Data;
          pFVar11 = FGenericPlatformHttp::UrlDecode(&local_58,&local_68);
          if (&local_220 != pFVar11) {
            if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data.AllocatorInstance.Data);
            }
            local_220.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_220.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_220.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          bVar4 = ::FString::EndsWith(&local_220,L".png",4,IgnoreCase);
          if (((bVar4) || (bVar4 = ::FString::EndsWith(&local_220,L".jpg",4,IgnoreCase), bVar4)) ||
             (bVar4 = ::FString::EndsWith(&local_220,L".jpeg",5,IgnoreCase), bVar4)) {
            iVar7 = (param_1->Data).ArrayNum;
            iVar6 = local_220.Data.ArrayNum + -1;
            if (local_220.Data.ArrayNum == 0) {
              iVar6 = iVar22;
            }
            iVar8 = iVar6 + 1;
            local_1f0.Data.ArrayNum = iVar7;
            if ((iVar7 == 0) && (iVar8 != 0)) {
              pFVar14 = (param_1->Data).AllocatorInstance.Data;
              iVar8 = iVar6 + 2;
LAB_14e62dead:
              local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (iVar8 != 0) goto LAB_14e62deb6;
              local_1f0.Data.ArrayMax = 0;
            }
            else {
              pFVar14 = (param_1->Data).AllocatorInstance.Data;
              if (iVar7 == 0) goto LAB_14e62dead;
LAB_14e62deb6:
              local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              uVar5 = iVar8 + iVar7;
              if ((int)uVar5 < iVar7) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar5,0,(ForAnyElementType *)&local_1f0,iVar7,&local_1f0.Data.ArrayMax)
              ;
              if (iVar7 != 0) {
                memcpy(local_1f0.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar7 * 2);
              }
            }
            ::FString::PathAppend(&local_1f0,(wchar_t *)local_220.Data.AllocatorInstance.Data,iVar6)
            ;
            pFVar12 = FPlatformFileManager::Get();
            pIVar13 = FPlatformFileManager::GetPlatformFile(pFVar12);
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_1f0.Data.ArrayNum != 0) {
              FVar19.Data = local_1f0.Data.AllocatorInstance.Data;
            }
            lVar16 = (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,FVar19.Data);
            pFVar14 = local_230 + lVar16;
            FVar19.Data = local_1f0.Data.AllocatorInstance.Data;
            local_230 = pFVar14;
            if (local_1f0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
            goto LAB_14e62df5e;
            goto LAB_14e62df52;
          }
        }
LAB_14e62df5e:
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = (ulonglong)local_228;
      pFVar21 = pFVar21 + 0x10;
    }
  }
  pFVar21 = pFVar14 + 0x10;
  if ((longlong)pFVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulong64)pFVar21);
  }
  if (param_3->ArrayMax < (longlong)pFVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,(long64)pFVar21,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax)
    ;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (param_3,(long64)pFVar14,Default);
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    pFVar20 = (param_3->AllocatorInstance).Data;
  }
  this->CurrentBufferOffset = (uchar *)pFVar20;
  return;
}

// BuildParentIndices @ 14e62e2a0

void __thiscall
GLTF::FFileReader::BuildParentIndices(FFileReader *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  undefined1 local_res20 [8];
  
  if (-1 < param_3) {
    pFVar3 = this->Asset;
    if (param_3 < (pFVar3->Nodes).ArrayNum) {
      uVar8 = 0;
      if (param_3 < (pFVar3->Nodes).ArrayNum) {
        uVar8 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pFVar3->Nodes).AllocatorInstance.Data;
      if (*(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0xcc) == -1) {
        *(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0xcc) = param_1;
        *(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0xd4) = param_2;
        piVar9 = *(int **)(pFVar4 + (longlong)param_3 * 0x260 + 0x70);
        iVar2 = *(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0x78);
        piVar1 = piVar9 + iVar2;
        while( true ) {
          if (*(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0x78) != iVar2) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (piVar9 == piVar1) break;
          iVar6 = param_2;
          if (*(int *)(pFVar4 + (longlong)param_3 * 0x260 + 0x80) == 2) {
            iVar6 = param_3;
          }
          BuildParentIndices(this,param_3,iVar6,*piVar9);
          piVar9 = piVar9 + 1;
        }
      }
    }
  }
  return;
}

// BuildParentJointIndices @ 14e62e3b0

void __thiscall GLTF::FFileReader::BuildParentJointIndices(FFileReader *this)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  FAsset *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FAsset *pFVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  ulonglong local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar10 = this->Asset;
  local_res18 = 0;
  if ((pFVar10->Skins).ArrayNum != 0) {
    do {
      uVar12 = (uint)local_res18;
      uVar7 = 0;
      if ((int)uVar12 < (pFVar10->Skins).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res20 = (pFVar10->Skins).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x98 + 0x18;
      local_res10 = *(uint *)(local_res20 + 8);
      uVar9 = (ulonglong)(int)local_res10;
      puVar13 = *(uint **)local_res20;
      puVar1 = puVar13 + uVar9;
      while( true ) {
        if (*(int *)(local_res20 + 8) != (int)uVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (puVar13 == puVar1) break;
        uVar7 = *puVar13;
        while ((-1 < (int)uVar7 && (pFVar10 = this->Asset, (int)uVar7 < (pFVar10->Nodes).ArrayNum)))
        {
          uVar11 = ~uVar7 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar7 < (pFVar10->Nodes).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar14 = (longlong)(int)uVar7 * 0x260;
          iVar2 = *(int *)((pFVar10->Nodes).AllocatorInstance.Data + lVar14 + 0xcc);
          if ((iVar2 < 0) || ((pFVar10->Nodes).ArrayNum <= iVar2)) break;
          pFVar10 = this->Asset;
          uVar12 = 0;
          if ((int)uVar7 < (pFVar10->Nodes).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = *(uint *)((pFVar10->Nodes).AllocatorInstance.Data + lVar14 + 0xcc);
          uVar8 = 0;
          if ((int)uVar12 < (pFVar10->Nodes).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((pFVar10->Nodes).AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0x260 + 0x80) != 2) break;
          pFVar10 = this->Asset;
          uVar12 = 0;
          if ((int)uVar7 < (pFVar10->Nodes).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = this->Asset;
          uVar3 = *(undefined4 *)((pFVar10->Nodes).AllocatorInstance.Data + lVar14 + 0xcc);
          uVar12 = 0;
          if ((int)uVar7 < (pFVar4->Nodes).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((pFVar4->Nodes).AllocatorInstance.Data + lVar14 + 0xd0) = uVar3;
          pFVar10 = this->Asset;
          uVar12 = 0;
          if ((int)uVar7 < (pFVar10->Nodes).ArrayNum) {
            uVar12 = uVar11;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = *(uint *)((pFVar10->Nodes).AllocatorInstance.Data + lVar14 + 0xd0);
        }
        puVar13 = puVar13 + 1;
        uVar9 = (ulonglong)local_res10;
      }
      pFVar10 = this->Asset;
      local_res18 = local_res18 + 1;
    } while (local_res18 < (ulonglong)(longlong)(pFVar10->Skins).ArrayNum);
  }
  return;
}

// BuildRootJoints @ 14e62e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall GLTF::FFileReader::BuildRootJoints(FFileReader *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int *piVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FFileReader *pFVar8;
  ForElementType<unsigned_int> FVar9;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  FNode *pFVar17;
  byte bVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FIdentityFunctor FVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  int *piVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  FAsset *pFVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  ForElementType<unsigned_int> FVar33;
  int iVar34;
  int iVar35;
  FScriptContainerElement *pFVar36;
  FScriptContainerElement *pFVar37;
  bool bVar38;
  undefined1 auStackY_ab8 [32];
  FIdentityFunctor local_a67;
  undefined1 local_a66;
  undefined1 local_a65;
  undefined1 local_a64 [4];
  FFileReader *local_a60;
  FFileReader *local_a58;
  TBitArray<FDefaultBitArrayAllocator> *local_a50;
  FScriptContainerElement local_a48 [4];
  uint local_a44;
  FNode *local_a40;
  FScriptContainerElement *local_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  uint uStack_a18;
  uint uStack_a14;
  uint local_a10;
  undefined4 uStack_a0c;
  int iStack_a08;
  undefined4 uStack_a04;
  undefined1 local_a00 [56];
  undefined8 local_9c8;
  TKeyInitializer<int_const_&> local_9c0;
  FText local_9b8;
  uint local_9a8;
  uint uStack_9a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_9a0;
  undefined4 local_998;
  uint uStack_994;
  uint uStack_990;
  undefined4 uStack_98c;
  uint local_988;
  ForAnyElementType local_980;
  int local_978;
  int local_974;
  int local_970;
  TBitArray<FDefaultBitArrayAllocator> *local_968;
  ulonglong local_960;
  TVector<double>_u_0 local_958;
  int iStack_940;
  undefined4 uStack_93c;
  int local_938;
  ForElementType<unsigned_int> local_930;
  FAsset *local_928;
  ForAnyElementType local_920;
  FAsset *local_918;
  ForAnyElementType *local_910;
  int local_908;
  int local_904;
  undefined1 local_900 [4];
  undefined1 local_8fc [4];
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_8f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8f0;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_8d0;
  longlong lStack_8c8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8c0;
  undefined8 uStack_8b8;
  uint uStack_8b4;
  undefined8 uStack_8b0;
  int local_8a8;
  undefined4 uStack_8a4;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_8a0;
  undefined1 auStack_898 [20];
  uint uStack_884;
  double local_880;
  int iStack_878;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_870;
  undefined1 auStack_868 [20];
  int iStack_854;
  double local_850;
  double dStack_848;
  FString local_840;
  undefined1 local_830 [24];
  double dStack_818;
  double dStack_810;
  int local_808;
  undefined4 uStack_804;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_800;
  longlong lStack_7f8;
  TBitArray<FDefaultBitArrayAllocator> *local_7f0;
  undefined8 uStack_7e8;
  int iStack_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined4 local_7b4;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_7a8;
  FScriptContainerElement local_770 [8];
  ForAnyElementType local_768;
  uint local_760;
  undefined1 local_758 [304];
  void *local_628;
  undefined4 local_620;
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_618;
  void *local_5d8;
  undefined4 local_5d0;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_558;
  void *local_518;
  undefined4 local_510;
  ForAnyElementType local_508;
  undefined1 local_4f8 [304];
  void *local_3c8;
  undefined4 local_3c0;
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3b8;
  void *local_378;
  undefined4 local_370;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2f8;
  void *local_2b8;
  undefined4 local_2b0;
  ForAnyElementType local_2a8;
  undefined1 local_298 [304];
  void *local_168;
  undefined4 local_160;
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_158;
  void *local_118;
  undefined4 local_110;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ForAnyElementType local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_ab8;
  pFVar29 = this->Asset;
  local_960 = 0;
  FVar22 = local_a67;
  local_a60 = this;
  local_a58 = this;
  if ((pFVar29->Skins).ArrayNum != 0) {
    do {
      uVar21 = local_960;
      uVar20 = 0;
      uVar13 = (uint)local_960;
      uVar30 = 0;
      if ((int)uVar13 < (pFVar29->Skins).ArrayNum) {
        uVar30 = ~uVar13 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar36 = (pFVar29->Skins).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x98;
      local_a38 = pFVar36;
      if (pFVar36[0x80] != (FScriptContainerElement)0x0) {
        local_7a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7a8.Data.ArrayNum = 0;
        local_7a8.Data.ArrayMax = 0;
        local_7a8.AllocationFlags.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_7a8.AllocationFlags.NumBits = 0;
        local_7a8.AllocationFlags.MaxBits = 0x80;
        local_7a8.FirstFreeIndex = -1;
        local_7a8.NumFreeIndices = 0;
        local_768.Data = (FScriptContainerElement *)0x0;
        local_760 = 0;
        local_a50 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        if (*(int *)(pFVar36 + 0x20) != 0) {
          do {
            pTVar28 = local_a50;
            uVar13 = (uint)local_a50;
            pFVar29 = this->Asset;
            uVar30 = 0;
            if ((int)uVar13 < *(int *)(pFVar36 + 0x20)) {
              uVar30 = ~uVar13 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = *(int *)((longlong)(int)uVar13 * 4 + *(longlong *)(pFVar36 + 0x18));
            if ((-1 < iVar12) && (iVar12 < (pFVar29->Nodes).ArrayNum)) {
              pFVar29 = this->Asset;
              uVar30 = 0;
              if ((int)uVar13 < *(int *)(pFVar36 + 0x20)) {
                uVar30 = ~uVar13 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar30 = *(uint *)((longlong)(int)uVar13 * 4 + *(longlong *)(pFVar36 + 0x18));
              uVar13 = 0;
              if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                uVar13 = ~uVar30 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar24 = (pFVar29->Nodes).AllocatorInstance.Data;
              uVar13 = *(uint *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xcc);
              if ((-1 < (int)uVar13) &&
                 (pFVar29 = this->Asset, (int)uVar13 < (pFVar29->Nodes).ArrayNum)) {
                uVar23 = 0;
                if ((int)uVar13 < (pFVar29->Nodes).ArrayNum) {
                  uVar23 = ~uVar13 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                            (longlong)(int)uVar13 * 0x260 + 0x80) == 2) goto LAB_14e62ed6b;
              }
              pFVar37 = (FScriptContainerElement *)0x0;
              if (local_7a8.Data.ArrayNum != local_7a8.NumFreeIndices) {
                FVar19.Data = local_770;
                if (local_768.Data != (FScriptContainerElement *)0x0) {
                  FVar19.Data = local_768.Data;
                }
                iVar12 = *(int *)(FVar19.Data +
                                 (ulonglong)
                                 (local_760 - 1 &
                                 *(uint *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xcc)) * 4);
                while (iVar12 != -1) {
                  pFVar2 = local_7a8.Data.AllocatorInstance.Data + (longlong)iVar12 * 0x28;
                  if (*(uint *)&local_7a8.Data.AllocatorInstance.Data[(longlong)iVar12 * 0x28].
                                field_0x0 ==
                      *(uint *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xcc)) {
                    pFVar25 = pFVar2 + 8;
                    if (pFVar2 == (FScriptContainerElement *)0x0) {
                      pFVar25 = pFVar37;
                    }
                    if (pFVar25 != (FScriptContainerElement *)0x0) {
                      pFVar24 = pFVar24 + (longlong)(int)uVar30 * 0x260 + 200;
                      if (((*(FScriptContainerElement **)&pFVar25->field_0x0 <= pFVar24) &&
                          (pFVar24 < *(FScriptContainerElement **)&pFVar25->field_0x0 +
                                     (longlong)*(int *)(pFVar25 + 0xc) * 4)) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar12 = *(int *)&pFVar25[8].field_0x0;
                      if (iVar12 == *(int *)(pFVar25 + 0xc)) {
                        iVar12 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)pFVar25,
                                            (int *)(pFVar25 + 0xc));
                      }
                      *(int *)&pFVar25[8].field_0x0 = iVar12 + 1;
                      *(undefined4 *)
                       (*(FScriptContainerElement **)&pFVar25->field_0x0 + (longlong)iVar12 * 4) =
                           *(undefined4 *)pFVar24;
                      goto LAB_14e62ed6b;
                    }
                    break;
                  }
                  iVar12 = *(int *)(pFVar2 + 0x20);
                }
              }
              lVar14 = (longlong)(int)uVar30 * 0x260 + 0xcc;
              if (*(int *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xcc) == -1) {
                lVar14 = (longlong)(int)uVar30 * 0x260 + 200;
              }
              local_918 = (FAsset *)(pFVar24 + lVar14);
              TSet<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<int_const_&>_>(&local_7a8,&local_9c0,(bool *)&local_918);
              FVar19.Data = local_7a8.Data.AllocatorInstance.Data;
              lVar14 = (longlong)(int)local_9c0.Key;
              pFVar24 = pFVar24 + (longlong)(int)uVar30 * 0x260 + 200;
              if (((*(FScriptContainerElement **)
                     (local_7a8.Data.AllocatorInstance.Data + lVar14 * 0x28 + 8) <= pFVar24) &&
                  (pFVar24 < *(FScriptContainerElement **)
                              (local_7a8.Data.AllocatorInstance.Data + lVar14 * 0x28 + 8) +
                             (longlong)
                             *(int *)(local_7a8.Data.AllocatorInstance.Data + lVar14 * 0x28 + 0x14)
                             * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = *(int *)(FVar19.Data + lVar14 * 0x28 + 0x10);
              if (iVar12 == *(int *)(FVar19.Data + lVar14 * 0x28 + 0x14)) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(FVar19.Data + lVar14 * 0x28 + 8),
                                    (int *)(FVar19.Data + lVar14 * 0x28 + 0x14));
              }
              *(int *)(FVar19.Data + lVar14 * 0x28 + 0x10) = iVar12 + 1;
              *(undefined4 *)(*(longlong *)(FVar19.Data + lVar14 * 0x28 + 8) + (longlong)iVar12 * 4)
                   = *(undefined4 *)pFVar24;
              uVar30 = *(uint *)pFVar24;
              while( true ) {
                pFVar29 = local_a60->Asset;
                uVar13 = 0;
                if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                  uVar13 = ~uVar30 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                            (longlong)(int)uVar30 * 0x260 + 0xcc) == -1) break;
                pFVar29 = local_a60->Asset;
                uVar13 = 0;
                if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                  uVar13 = ~uVar30 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar12 = *(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                                 (longlong)(int)uVar30 * 0x260 + 0xcc);
                if ((iVar12 < 0) || ((pFVar29->Nodes).ArrayNum <= iVar12)) break;
                pFVar37 = (FScriptContainerElement *)(ulonglong)((int)pFVar37 + 1);
                pFVar29 = local_a60->Asset;
                uVar13 = 0;
                if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                  uVar13 = ~uVar30 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar30 = *(uint *)((pFVar29->Nodes).AllocatorInstance.Data +
                                  (longlong)(int)uVar30 * 0x260 + 0xcc);
              }
              *(int *)(FVar19.Data + lVar14 * 0x28 + 0x18) = (int)pFVar37;
              this = local_a58;
              pFVar36 = local_a38;
              pTVar28 = local_a50;
            }
LAB_14e62ed6b:
            local_a50 = (TBitArray<FDefaultBitArrayAllocator> *)
                        ((pTVar28->AllocatorInstance).InlineData + 1);
          } while (local_a50 <
                   (TBitArray<FDefaultBitArrayAllocator> *)(longlong)*(int *)(pFVar36 + 0x20));
          uVar20 = (ulonglong)(uint)local_7a8.AllocationFlags.NumBits;
        }
        uVar21 = 0;
        local_920.Data = local_a48;
        local_910 = &local_920;
        if (0 < local_7a8.Data.ArrayNum - local_7a8.NumFreeIndices) {
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact(&local_7a8);
          FVar19.Data = local_7a8.Data.AllocatorInstance.Data;
          iVar12 = local_7a8.Data.ArrayNum - local_7a8.NumFreeIndices;
          if ((iVar12 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints,0>_>::FValueComparisonClass<_GLTF::FFileReader::BuildRootJoints_::__l3::<lambda_2>_>_>_>_>
                    ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)FVar19.Data,iVar12,
                     FVar22,(FElementCompareClass<TSortableMapBase<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::FRootJoints,0>_>::FValueComparisonClass<_private:_void___cdecl_GLTF::FFileReader::BuildRootJoints(void)const_::_3_::<lambda_2>_>_>
                             *)&local_910);
          uVar20 = (ulonglong)(uint)local_7a8.AllocationFlags.NumBits;
        }
        uVar30 = local_760;
        uVar32 = (ulonglong)local_760;
        if (local_768.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_768,0,0,4);
          uVar20 = (ulonglong)(uint)local_7a8.AllocationFlags.NumBits;
        }
        if (uVar30 != 0) {
          uVar13 = uVar30;
          if (uVar30 < 2) {
            if (local_768.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_14e62ee5d;
            }
          }
          else {
LAB_14e62ee5d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_768,0,uVar13,4);
            uVar20 = (ulonglong)(uint)local_7a8.AllocationFlags.NumBits;
          }
          if (0 < (int)uVar30) {
            uVar20 = uVar21;
            do {
              FVar19.Data = local_770;
              if (local_768.Data != (FScriptContainerElement *)0x0) {
                FVar19.Data = local_768.Data;
              }
              uVar15 = (longlong)(int)uVar30 - 1U & uVar20;
              uVar20 = uVar20 + 1;
              *(undefined4 *)(FVar19.Data + uVar15 * 4) = 0xffffffff;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
            uVar20 = (ulonglong)(uint)local_7a8.AllocationFlags.NumBits;
          }
        }
        uVar30 = (uint)uVar20;
        if (local_760 != 0) {
          uStack_9a4 = 1;
          local_9a8 = 0;
          pTStack_9a0 = &local_7a8.AllocationFlags;
          uStack_994 = 0;
          uStack_990 = 0;
          if (uVar30 != 0) {
            FVar33 = (ForElementType<unsigned_int>)&local_7a8.AllocationFlags;
            if (local_7a8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar33 = local_7a8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar13 = *(uint *)FVar33;
            uVar32 = uVar21;
            while (uVar13 == 0) {
              uStack_990 = (int)uVar32 + 0x20;
              uVar32 = (ulonglong)uStack_990;
              iVar12 = (int)uVar21;
              local_9a8 = iVar12 + 1;
              uVar21 = (ulonglong)local_9a8;
              if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_9a8)
              goto LAB_14e62ef80;
              uVar13 = *(uint *)((uchar *)((longlong)FVar33 + 4) + (longlong)iVar12 * 4);
            }
            uStack_9a4 = -uVar13 & uVar13;
            uVar21 = (ulonglong)uStack_9a4 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_938 = (int)lVar14;
            uStack_994 = local_938 + -1 + uStack_990;
            uVar21 = (ulonglong)uStack_994;
            if ((int)uVar30 < (int)uStack_994) {
LAB_14e62ef80:
              uVar21 = uVar20;
              uStack_994 = uVar30;
            }
          }
          local_998 = 0xffffffff;
          local_8f8 = &local_7a8;
          local_8f0._padding_ = CONCAT44(uStack_9a4,local_9a8);
          local_8f0.CurrentBitIndex = uStack_994;
          local_8f0.UnvisitedBitMask = 0xffffffff;
          local_8f0._28_4_ = uStack_98c;
          local_8f0.BaseBitIndex = uStack_990;
          local_8f0.Array = pTStack_9a0;
          if ((int)uVar21 < (int)uVar30) {
            do {
              lVar14 = (longlong)(int)uVar21;
              pFVar24 = (local_8f8->Data).AllocatorInstance.Data;
              uVar30 = local_760 - 1 & *(uint *)(pFVar24 + lVar14 * 0x28);
              *(uint *)(pFVar24 + lVar14 * 0x28 + 0x24) = uVar30;
              FVar19.Data = local_770;
              if (local_768.Data != (FScriptContainerElement *)0x0) {
                FVar19.Data = local_768.Data;
              }
              uVar20 = (longlong)(int)local_760 - 1U & (longlong)(int)uVar30;
              *(undefined4 *)(pFVar24 + lVar14 * 0x28 + 0x20) =
                   *(undefined4 *)(FVar19.Data + uVar20 * 4);
              *(int *)(FVar19.Data + uVar20 * 4) = (int)uVar21;
              local_8f0.UnvisitedBitMask = local_8f0.UnvisitedBitMask & ~local_8f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8f0);
              uVar21 = (ulonglong)(uint)local_8f0.CurrentBitIndex;
              uVar30 = local_7a8.AllocationFlags.NumBits;
            } while (local_8f0.CurrentBitIndex < (local_8f0.Array)->NumBits);
          }
        }
        uVar13 = *(uint *)(pFVar36 + 0x28);
        if (((uVar13 != 0xffffffff) && (-1 < (int)uVar13)) &&
           (pFVar29 = this->Asset, (int)uVar13 < (pFVar29->Nodes).ArrayNum)) {
          uVar30 = 0;
          if ((int)uVar13 < (pFVar29->Nodes).ArrayNum) {
            uVar30 = ~uVar13 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          GLTF::FNode::FNode((FNode *)local_298,
                             (FNode *)((pFVar29->Nodes).AllocatorInstance.Data +
                                      (longlong)(int)uVar13 * 0x260));
          iVar12 = `GLTF::FFileReader::BuildRootJoints'::__l3::<lambda_1>::operator()
                             (&local_a60,(FNode *)local_298);
          FText::AsLocalizable_Advanced_LocText
                    (&local_9b8,L"InterchangeGLTFReader",L"NonCommonRootNode",
                     L"Skeleton node is not a common root.");
          local_958._s_0.Y = (double)&local_7a8.AllocationFlags;
          local_958._0_4_ = 0;
          local_958._4_4_ = 1;
          local_958._16_4_ = 0xffffffff;
          local_958._20_4_ = 0;
          iStack_940 = 0;
          if (local_7a8.AllocationFlags.NumBits != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&local_958._s_0);
          }
          auStack_898._0_8_ = CONCAT44(local_958._4_4_,local_958._0_4_);
          local_8a0 = &local_7a8;
          unique0x1000185a = (double)CONCAT44(local_958._20_4_,local_958._16_4_);
          local_880 = (double)CONCAT44(uStack_93c,iStack_940);
          local_808 = local_7a8.Data.ArrayNum - local_7a8.NumFreeIndices;
          local_830._16_8_ = local_958._s_0.Y;
          unique0x1000187e = uStack_804;
          iStack_878 = local_808;
          auStack_898._8_8_ = local_958._s_0.Y;
          local_830._0_8_ = local_8a0;
          local_830._8_8_ = auStack_898._0_8_;
          dStack_818 = unique0x1000185a;
          dStack_810 = local_880;
          pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_830,
                               &local_7a8.AllocationFlags,local_7a8.AllocationFlags.NumBits);
          lStack_8c8 = pTVar16->_padding_;
          local_a50 = pTVar16->Array;
          uStack_8b8._0_4_ = pTVar16->UnvisitedBitMask;
          uStack_8b8._4_4_ = pTVar16->CurrentBitIndex;
          uStack_8b0._0_4_ = pTVar16->BaseBitIndex;
          uStack_8b0._4_4_ = *(undefined4 *)&pTVar16->field_0x1c;
          local_a44 = uStack_8b8._4_4_;
          pTStack_8c0 = local_a50;
LAB_14e62f1e3:
          pTVar10 = local_8a0;
          uVar30 = local_a44;
          if ((local_8a0->Data).ArrayNum - local_8a0->NumFreeIndices != iStack_878) {
            local_a66 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a66);
          }
          lVar14 = (longlong)(int)uStack_884;
          if (((uStack_884 == uVar30) &&
              ((TBitArray<FDefaultBitArrayAllocator> *)auStack_898._8_8_ == local_a50)) &&
             (pTVar10 == &local_7a8)) goto LAB_14e62fa67;
          pFVar36 = (pTVar10->Data).AllocatorInstance.Data;
          local_988 = *(uint *)(pFVar36 + lVar14 * 0x28);
          local_980.Data = (FScriptContainerElement *)0x0;
          local_978 = *(int *)(pFVar36 + lVar14 * 0x28 + 0x10);
          lVar26 = (longlong)local_978;
          pvVar3 = *(void **)(pFVar36 + lVar14 * 0x28 + 8);
          if (local_978 == 0) {
            local_974 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_978,0,&local_980,local_978,&local_974);
            memcpy(local_980.Data,pvVar3,lVar26 << 2);
          }
          uVar30 = local_988;
          local_970 = *(int *)(pFVar36 + lVar14 * 0x28 + 0x18);
          if (local_978 == 1) {
            uVar30 = *(uint *)local_980.Data;
            pFVar29 = this->Asset;
            if (((int)uVar30 < 0) || ((pFVar29->Nodes).ArrayNum <= (int)uVar30)) goto LAB_14e62f552;
            uVar13 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar13 = ~uVar30 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            GLTF::FNode::FNode((FNode *)local_758,
                               (FNode *)((pFVar29->Nodes).AllocatorInstance.Data +
                                        (longlong)(int)uVar30 * 0x260));
            iVar34 = 0;
            uVar30 = local_758._200_4_;
            while( true ) {
              pFVar29 = local_a60->Asset;
              uVar13 = 0;
              if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                uVar13 = ~uVar30 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                          (longlong)(int)uVar30 * 0x260 + 0xcc) == -1) break;
              pFVar29 = local_a60->Asset;
              uVar13 = 0;
              if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                uVar13 = ~uVar30 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar35 = *(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                               (longlong)(int)uVar30 * 0x260 + 0xcc);
              if ((iVar35 < 0) || ((pFVar29->Nodes).ArrayNum <= iVar35)) break;
              iVar34 = iVar34 + 1;
              pFVar29 = local_a60->Asset;
              uVar13 = 0;
              if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                uVar13 = ~uVar30 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar30 = *(uint *)((pFVar29->Nodes).AllocatorInstance.Data +
                                (longlong)(int)uVar30 * 0x260 + 0xcc);
            }
            this = local_a58;
            if (iVar34 < iVar12) {
              piVar4 = (int *)((longlong)&local_a58->_padding_ + 4);
              iVar12 = (int)local_a58->_padding_;
              if (iVar12 == *piVar4) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,(ForAnyElementType *)local_a58,piVar4);
              }
              *(int *)&this->_padding_ = iVar12 + 1;
              lVar26 = (longlong)iVar12;
              lVar14 = this->_padding_;
              *(undefined4 *)(lVar14 + lVar26 * 0x18) = 1;
              *(undefined8 *)(lVar14 + 8 + lVar26 * 0x18) = 0;
              lVar14 = lVar14 + lVar26 * 0x18;
              *(ITextData **)(lVar14 + 8) = local_9b8.TextData.Reference;
              if (local_9b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_9b8.TextData.Reference + 8))
                          (local_9b8.TextData.Reference,local_8fc);
              }
              *(uint *)(lVar14 + 0x10) = local_9b8.Flags;
              if (local_508.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_508.Data);
              }
              local_510 = 0;
              if (local_518 != (void *)0x0) {
                FMemory::Free(local_518);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_558);
              local_5d0 = 0;
              if (local_5d8 != (void *)0x0) {
                FMemory::Free(local_5d8);
              }
              TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_618);
              local_620 = 0;
              if (local_628 != (void *)0x0) {
                FMemory::Free(local_628);
              }
              TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_758 + 0xf0));
              if ((FScriptContainerElement *)local_758._224_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_758._224_8_);
              }
              pFVar36 = (FScriptContainerElement *)local_758._0_8_;
              if ((FScriptContainerElement *)local_758._112_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_758._112_8_);
                pFVar36 = (FScriptContainerElement *)local_758._0_8_;
              }
              goto LAB_14e62f92e;
            }
            if (local_508.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_508.Data);
            }
            local_510 = 0;
            if (local_518 != (void *)0x0) {
              FMemory::Free(local_518);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_558);
            local_5d0 = 0;
            if (local_5d8 != (void *)0x0) {
              FMemory::Free(local_5d8);
            }
            TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_618);
            local_620 = 0;
            if (local_628 != (void *)0x0) {
              FMemory::Free(local_628);
            }
            TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_758 + 0xf0));
            if ((FScriptContainerElement *)local_758._224_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_758._224_8_);
            }
            pFVar36 = (FScriptContainerElement *)local_758._0_8_;
            if ((FScriptContainerElement *)local_758._112_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_758._112_8_);
              pFVar36 = (FScriptContainerElement *)local_758._0_8_;
            }
LAB_14e62f7d9:
            if (pFVar36 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar36);
            }
            this = local_a58;
            if (local_980.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_980.Data);
              this = local_a58;
            }
LAB_14e62f7f6:
            stack0xfffffffffffff778 =
                 (double)CONCAT44(uStack_884,auStack_898._16_4_ & ~auStack_898._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_898);
            goto LAB_14e62f1e3;
          }
          if (local_978 == 0) {
LAB_14e62f552:
            if (local_980.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_980.Data);
            }
            goto LAB_14e62f7f6;
          }
          pFVar29 = this->Asset;
          uVar13 = 0;
          if ((int)local_988 < (pFVar29->Nodes).ArrayNum) {
            uVar13 = ~local_988 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          GLTF::FNode::FNode((FNode *)local_4f8,
                             (FNode *)((pFVar29->Nodes).AllocatorInstance.Data +
                                      (longlong)(int)uVar30 * 0x260));
          iVar34 = 0;
          uVar30 = local_4f8._200_4_;
          while( true ) {
            pFVar29 = local_a60->Asset;
            uVar13 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar13 = ~uVar30 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                        (longlong)(int)uVar30 * 0x260 + 0xcc) == -1) break;
            pFVar29 = local_a60->Asset;
            uVar13 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar13 = ~uVar30 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar35 = *(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                             (longlong)(int)uVar30 * 0x260 + 0xcc);
            if ((iVar35 < 0) || ((pFVar29->Nodes).ArrayNum <= iVar35)) break;
            iVar34 = iVar34 + 1;
            pFVar29 = local_a60->Asset;
            uVar13 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar13 = ~uVar30 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar30 = *(uint *)((pFVar29->Nodes).AllocatorInstance.Data +
                              (longlong)(int)uVar30 * 0x260 + 0xcc);
          }
          this = local_a58;
          if (iVar12 <= iVar34) {
            if (local_2a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data);
            }
            local_2b0 = 0;
            if (local_2b8 != (void *)0x0) {
              FMemory::Free(local_2b8);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_2f8);
            local_370 = 0;
            if (local_378 != (void *)0x0) {
              FMemory::Free(local_378);
            }
            TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_3b8);
            local_3c0 = 0;
            if (local_3c8 != (void *)0x0) {
              FMemory::Free(local_3c8);
            }
            TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_4f8 + 0xf0));
            if ((FScriptContainerElement *)local_4f8._224_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_4f8._224_8_);
            }
            pFVar36 = (FScriptContainerElement *)local_4f8._0_8_;
            if ((FScriptContainerElement *)local_4f8._112_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_4f8._112_8_);
              pFVar36 = (FScriptContainerElement *)local_4f8._0_8_;
            }
            goto LAB_14e62f7d9;
          }
          piVar4 = (int *)((longlong)&local_a58->_padding_ + 4);
          iVar12 = (int)local_a58->_padding_;
          if (iVar12 == *piVar4) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)local_a58,piVar4);
          }
          *(int *)&this->_padding_ = iVar12 + 1;
          lVar26 = (longlong)iVar12;
          lVar14 = this->_padding_;
          *(undefined4 *)(lVar14 + lVar26 * 0x18) = 1;
          *(undefined8 *)(lVar14 + 8 + lVar26 * 0x18) = 0;
          lVar14 = lVar14 + lVar26 * 0x18;
          *(ITextData **)(lVar14 + 8) = local_9b8.TextData.Reference;
          if (local_9b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9b8.TextData.Reference + 8))
                      (local_9b8.TextData.Reference,local_900);
          }
          *(uint *)(lVar14 + 0x10) = local_9b8.Flags;
          if (local_2a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data);
          }
          local_2b0 = 0;
          if (local_2b8 != (void *)0x0) {
            FMemory::Free(local_2b8);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_2f8);
          local_370 = 0;
          if (local_378 != (void *)0x0) {
            FMemory::Free(local_378);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_3b8);
          local_3c0 = 0;
          if (local_3c8 != (void *)0x0) {
            FMemory::Free(local_3c8);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_4f8 + 0xf0));
          if ((FScriptContainerElement *)local_4f8._224_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_4f8._224_8_);
          }
          pFVar36 = (FScriptContainerElement *)local_4f8._0_8_;
          if ((FScriptContainerElement *)local_4f8._112_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_4f8._112_8_);
            pFVar36 = (FScriptContainerElement *)local_4f8._0_8_;
          }
LAB_14e62f92e:
          if (pFVar36 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar36);
          }
          if (local_980.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_980.Data);
          }
LAB_14e62fa67:
          if (local_9b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9b8.TextData.Reference + 0x10))();
          }
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
          local_50 = 0;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98);
          local_110 = 0;
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_158);
          local_160 = 0;
          if (local_168 != (void *)0x0) {
            FMemory::Free(local_168);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TMatrix<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_298 + 0xf0));
          if ((FScriptContainerElement *)local_298._224_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_298._224_8_);
          }
          if ((FScriptContainerElement *)local_298._112_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_298._112_8_);
          }
          uVar30 = local_7a8.AllocationFlags.NumBits;
          if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_298._0_8_);
            uVar30 = local_7a8.AllocationFlags.NumBits;
          }
        }
        iVar12 = 0;
        uVar13 = 1;
        local_a10 = 0;
        uStack_a14 = local_a10;
        if (uVar30 != 0) {
          FVar33 = (ForElementType<unsigned_int>)&local_7a8.AllocationFlags;
          if (local_7a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar33 = local_7a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar23 = *(uint *)FVar33;
          local_a10 = 0;
          while (uVar23 == 0) {
            lVar14 = (longlong)iVar12;
            local_a10 = local_a10 + 0x20;
            iVar12 = iVar12 + 1;
            uStack_a14 = uVar30;
            if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_14e62fbb3;
            uVar23 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar14 * 4);
          }
          uVar13 = -uVar23 & uVar23;
          uVar21 = (ulonglong)uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_904 = (int)lVar14;
          uStack_a14 = (local_a10 - 1) + local_904;
          if ((int)uVar30 < (int)uStack_a14) {
            uStack_a14 = uVar30;
          }
        }
LAB_14e62fbb3:
        local_870 = &local_7a8;
        uStack_a0c = local_7b4;
        auStack_868._8_8_ = &local_7a8.AllocationFlags;
        uVar23 = uVar30 & 0xffffffe0;
        iStack_a08 = local_7a8.Data.ArrayNum - local_7a8.NumFreeIndices;
        bVar18 = (byte)uVar30 & 0x1f;
        uStack_a28 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar13,iVar12);
        unique0x10001812 = (double)CONCAT44(uStack_a14,0xffffffff);
        iVar12 = (int)uVar30 >> 5;
        uVar13 = -1 << bVar18;
        local_a30 = CONCAT44(1 << bVar18,iVar12);
        local_a20._4_4_ = uVar30;
        local_a20._0_4_ = uVar13;
        auStack_868._0_8_ = uStack_a28;
        local_850 = (double)CONCAT44(local_7b4,local_a10);
        dStack_848 = (double)CONCAT44(uStack_a04,iStack_a08);
        uVar31 = uVar30;
        uStack_a28 = &local_7a8.AllocationFlags;
        uStack_a18 = uVar23;
        if (((int)uVar30 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), uVar31 = local_7a8.AllocationFlags.NumBits, bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar30 != uVar31) {
          FVar33 = (ForElementType<unsigned_int>)&local_7a8.AllocationFlags;
          if (local_7a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar33 = local_7a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar13 = uVar13 & *(uint *)((longlong)FVar33 + (longlong)iVar12 * 4);
          while (uVar13 == 0) {
            uStack_a18 = uVar23 + 0x20;
            lVar14 = (longlong)iVar12;
            iVar12 = iVar12 + 1;
            uVar21 = (ulonglong)local_a30 >> 0x20;
            local_a30 = CONCAT44((int)uVar21,iVar12);
            if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) {
              local_a20._4_4_ = uVar31;
              goto LAB_14e62fd24;
            }
            uVar13 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar14 * 4);
            local_a20 = 0xffffffff;
            uVar23 = uStack_a18;
          }
          local_a30 = CONCAT44(-uVar13 & uVar13,(undefined4)local_a30);
          uVar21 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_908 = (int)lVar14;
          local_a20._4_4_ = local_908 + -1 + uVar23;
          if ((int)uVar31 < (int)local_a20._4_4_) {
            local_a20._4_4_ = uVar31;
          }
        }
LAB_14e62fd24:
        local_8d0 = &local_7a8;
        uStack_8b0._4_4_ = uStack_a14;
        uStack_8b0._0_4_ = uStack_a18;
        local_8a8 = local_7a8.Data.ArrayNum - local_7a8.NumFreeIndices;
        lStack_8c8 = local_a30;
        pTStack_8c0 = uStack_a28;
        uStack_8b8 = local_a20;
        lStack_7f8 = local_a30;
        uStack_7d8._4_4_ = uStack_8a4;
        uStack_7d8._0_4_ = local_8a8;
        local_7f0 = uStack_a28;
        uStack_7e8 = local_a20;
        local_800 = local_8d0;
        local_7e0 = uStack_8b0;
        while( true ) {
          pTVar10 = local_870;
          if ((local_870->Data).ArrayNum - local_870->NumFreeIndices != dStack_848._0_4_) {
            local_a65 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a65);
          }
          FVar22 = local_a67;
          lVar14 = (longlong)iStack_854;
          if (((iStack_854 == iStack_7e4) &&
              ((TBitArray<FDefaultBitArrayAllocator> *)auStack_868._8_8_ == local_7f0)) &&
             (pTVar10 == local_800)) break;
          pFVar36 = (pTVar10->Data).AllocatorInstance.Data;
          local_a00._16_4_ = *(undefined4 *)(pFVar36 + lVar14 * 0x28);
          local_a00._24_8_ = (void *)0x0;
          local_a00._32_4_ = *(undefined4 *)(pFVar36 + lVar14 * 0x28 + 0x10);
          lVar26 = (longlong)(int)local_a00._32_4_;
          pvVar3 = *(void **)(pFVar36 + lVar14 * 0x28 + 8);
          if (local_a00._32_4_ == 0) {
            local_a00._36_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_a00._32_4_,0,(ForAnyElementType *)(local_a00 + 0x18),
                       local_a00._32_4_,(int *)(local_a00 + 0x24));
            memcpy((void *)local_a00._24_8_,pvVar3,lVar26 << 2);
          }
          uVar21 = 0;
          local_a00._40_4_ = *(undefined4 *)(pFVar36 + lVar14 * 0x28 + 0x18);
          if (1 < (int)local_a00._32_4_) {
            pFVar29 = this->Asset;
            piVar4 = &(pFVar29->Nodes).ArrayMax;
            iVar12 = (pFVar29->Nodes).ArrayNum;
            if (iVar12 == *piVar4) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x260,0x10,&(pFVar29->Nodes).AllocatorInstance,piVar4);
            }
            (pFVar29->Nodes).ArrayNum = iVar12 + 1;
            pFVar17 = GLTF::FNode::FNode((FNode *)((pFVar29->Nodes).AllocatorInstance.Data +
                                                  (longlong)iVar12 * 0x260));
            iVar12 = (this->Asset->Nodes).ArrayNum;
            pFVar17->Type = Joint;
            pFVar17->Index = iVar12 + -1;
            lVar14 = (longlong)(int)local_a00._16_4_;
            local_a40 = pFVar17;
            if (((int)local_a00._16_4_ < 0) ||
               (pFVar29 = this->Asset, (pFVar29->Nodes).ArrayNum <= (int)local_a00._16_4_)) {
              ::FString::FString((FString *)local_a00,"_ProxyTrueRootJoint");
              if (pFVar17 != (FNode *)local_a00) {
                pFVar36 = (pFVar17->Name).Data.AllocatorInstance.Data;
                if (pFVar36 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar36);
                }
                (pFVar17->Name).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_a00._0_8_;
                (pFVar17->Name).Data.ArrayNum = local_a00._8_4_;
                (pFVar17->Name).Data.ArrayMax = local_a00._12_4_;
                local_a00._8_4_ = 0;
                local_a00._12_4_ = 0;
                local_a00._0_8_ = (FScriptContainerElement *)0x0;
              }
              if ((FScriptContainerElement *)local_a00._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_a00._0_8_);
              }
              pFVar8 = local_a58;
              *&(pFVar17->Transform).Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              *&(pFVar17->Transform).Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              *&(pFVar17->Transform).Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              *&(pFVar17->Transform).Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              *&(pFVar17->Transform).Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              *&(pFVar17->Transform).Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              pFVar17->bHasLocalBindPose = true;
              *&(pFVar17->LocalBindPose).Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              *&(pFVar17->LocalBindPose).Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              *&(pFVar17->LocalBindPose).Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              uVar20 = (ulonglong)(uint)local_a00._32_4_;
              if (local_a00._32_4_ != 0) {
                do {
                  pFVar29 = pFVar8->Asset;
                  uVar13 = (uint)uVar21;
                  uVar30 = 0;
                  if ((int)uVar13 < (int)uVar20) {
                    uVar30 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar30 = *(uint *)(local_a00._24_8_ + (longlong)(int)uVar13 * 4);
                  uVar13 = 0;
                  if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                    uVar13 = ~uVar30 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar24 = (pFVar29->Nodes).AllocatorInstance.Data;
                  *(int *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xcc) = pFVar17->Index;
                  pFVar36 = pFVar24 + (longlong)(int)uVar30 * 0x260 + 200;
                  *(int *)(pFVar24 + (longlong)(int)uVar30 * 0x260 + 0xd0) = pFVar17->Index;
                  pFVar24 = (pFVar17->Children).AllocatorInstance.Data;
                  if (((pFVar24 <= pFVar36) &&
                      (pFVar36 < pFVar24 + (longlong)(pFVar17->Children).ArrayMax * 4)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar12 = (pFVar17->Children).ArrayNum;
                  if (iVar12 == (pFVar17->Children).ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar17->Children).AllocatorInstance,
                                        &(pFVar17->Children).ArrayMax);
                  }
                  (pFVar17->Children).ArrayNum = iVar12 + 1;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)((pFVar17->Children).AllocatorInstance.Data + (longlong)iVar12 * 4)
                       = *(undefined4 *)pFVar36;
                  uVar20 = (ulonglong)(int)local_a00._32_4_;
                  this = pFVar8;
                } while (uVar21 < uVar20);
              }
              local_928 = this->Asset;
              local_a44 = (local_928->Scenes).ArrayNum;
              uVar21 = (ulonglong)(int)local_a44;
              local_a50 = (TBitArray<FDefaultBitArrayAllocator> *)
                          (local_928->Scenes).AllocatorInstance.Data;
              pTVar28 = local_a50 + uVar21 * 4;
              local_930 = (ForElementType<unsigned_int>)&pFVar17->Index;
              pFVar36 = (FScriptContainerElement *)&local_a50->NumBits;
              local_968 = pTVar28;
              while( true ) {
                uVar20 = 0;
                local_a38 = pFVar36;
                if ((local_928->Scenes).ArrayNum != (int)uVar21) {
                  local_a67 = (FIdentityFunctor)0x0;
                  `TCheckedPointerIterator<GLTF::FScene,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_a67);
                }
                this = local_a58;
                if (local_a50 == pTVar28) break;
                lVar14 = (longlong)*(int *)pFVar36;
                bVar11 = false;
                if (*(int *)pFVar36 != 0) {
                  FVar33 = *(ForElementType<unsigned_int> *)(pFVar36 + -8);
                  pFVar36 = (local_a40->Children).AllocatorInstance.Data;
                  uVar21 = uVar20;
                  uVar32 = uVar20;
                  if (pFVar36 != pFVar36 + (longlong)(local_a40->Children).ArrayNum * 4) {
                    pFVar24 = pFVar36;
                    do {
                      if (*(int *)pFVar24 == *(int *)FVar33) {
                        iVar12 = (int)((longlong)pFVar24 - (longlong)pFVar36 >> 2);
                        bVar38 = true;
                        if (iVar12 == -1) goto LAB_14e6306a0;
                        bVar11 = true;
                        goto LAB_14e630696;
                      }
                      pFVar24 = pFVar24 + 4;
                    } while (pFVar24 != pFVar36 + (longlong)(local_a40->Children).ArrayNum * 4);
                  }
                  iVar12 = -1;
LAB_14e630696:
                  bVar38 = iVar12 == -1;
LAB_14e6306a0:
                  do {
                    iVar12 = (int)uVar20;
                    uVar21 = uVar21 + 1;
                    uVar20 = (ulonglong)(iVar12 + 1);
                    if ((longlong)uVar21 < lVar14) {
                      pFVar36 = (local_a40->Children).AllocatorInstance.Data;
                      do {
                        if (pFVar36 != pFVar36 + (longlong)(local_a40->Children).ArrayNum * 4) {
                          pFVar24 = pFVar36;
                          do {
                            if (*(int *)pFVar24 == *(int *)((longlong)FVar33 + uVar21 * 4)) {
                              iVar34 = (int)((longlong)pFVar24 - (longlong)pFVar36 >> 2);
                              if (iVar34 != -1) {
                                bVar11 = true;
                              }
                              goto LAB_14e6306e6;
                            }
                            pFVar24 = pFVar24 + 4;
                          } while (pFVar24 != pFVar36 + (longlong)(local_a40->Children).ArrayNum * 4
                                  );
                        }
                        iVar34 = -1;
LAB_14e6306e6:
                        if (bVar38 != (iVar34 == -1)) break;
                        uVar20 = (ulonglong)((int)uVar20 + 1);
                        uVar21 = uVar21 + 1;
                      } while ((longlong)uVar21 < lVar14);
                    }
                    iVar34 = (int)uVar20 - iVar12;
                    if (bVar38 != false) {
                      iVar35 = (int)uVar32;
                      if (iVar35 != iVar12) {
                        memmove((int *)((longlong)FVar33 + (longlong)iVar35 * 4),
                                (int *)((longlong)FVar33 + (longlong)iVar12 * 4),
                                (longlong)iVar34 << 2);
                      }
                      uVar32 = (ulonglong)(uint)(iVar35 + iVar34);
                    }
                    FVar9 = local_930;
                    pFVar36 = local_a38;
                    bVar38 = (bool)(bVar38 ^ 1);
                  } while ((longlong)uVar21 < lVar14);
                  *(int *)local_a38 = (int)uVar32;
                  pTVar28 = local_968;
                  if (bVar11) {
                    if ((((ulonglong)*(ForElementType<unsigned_int> *)(local_a38 + -8) <=
                          (ulonglong)local_930) &&
                        ((ulonglong)local_930 <
                         (ulonglong)
                         ((longlong)*(ForElementType<unsigned_int> *)(local_a38 + -8) +
                         (longlong)*(int *)(local_a38 + 4) * 4))) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar12 = *(int *)pFVar36;
                    if (iVar12 == *(int *)(pFVar36 + 4)) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)(pFVar36 + -8),
                                          (int *)(pFVar36 + 4));
                    }
                    *(int *)pFVar36 = iVar12 + 1;
                    *(undefined4 *)
                     ((longlong)*(ForElementType<unsigned_int> *)(pFVar36 + -8) +
                     (longlong)iVar12 * 4) = *(undefined4 *)FVar9;
                    pTVar28 = local_968;
                  }
                }
                pFVar36 = pFVar36 + 0x80;
                local_a50 = local_a50 + 4;
                uVar21 = (ulonglong)local_a44;
              }
            }
            else {
              uVar30 = 0;
              if ((int)local_a00._16_4_ < (pFVar29->Nodes).ArrayNum) {
                uVar30 = (uint)~local_a00._16_4_ >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar36 = (pFVar29->Nodes).AllocatorInstance.Data + lVar14 * 0x260;
              ::FString::FString(&local_840,"_ProxyTrueRootJoint");
              ::FString::ConcatFF((FString *)(local_a00 + 0x30),(FString *)pFVar36,&local_840);
              if (pFVar17 != (FNode *)(local_a00 + 0x30)) {
                pFVar24 = (pFVar17->Name).Data.AllocatorInstance.Data;
                if (pFVar24 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar24);
                }
                (pFVar17->Name).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_a00._48_8_;
                (pFVar17->Name).Data.ArrayNum = (int)local_9c8;
                (pFVar17->Name).Data.ArrayMax = local_9c8._4_4_;
                local_9c8 = 0.0;
                local_a00._48_8_ = (FScriptContainerElement *)0x0;
              }
              if ((FScriptContainerElement *)local_a00._48_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_a00._48_8_);
              }
              if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_840.Data.AllocatorInstance.Data);
              }
              pFVar24 = pFVar36 + 0x70;
              pTVar1 = &pFVar17->Children;
              if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar24) {
                iVar12 = *(int *)(pFVar36 + 0x78);
                piVar4 = &(pFVar17->Children).ArrayMax;
                pFVar37 = *(FScriptContainerElement **)&pFVar24->field_0x0;
                (pFVar17->Children).ArrayNum = iVar12;
                if ((iVar12 == 0) && (*piVar4 == 0)) {
                  *piVar4 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar12,*piVar4,&pTVar1->AllocatorInstance,iVar12,piVar4);
                  if (iVar12 != 0) {
                    memcpy((pTVar1->AllocatorInstance).Data,pFVar37,(longlong)iVar12 << 2);
                  }
                }
              }
              iVar12 = *(int *)(pFVar36 + 0x7c);
              pFVar37 = pFVar36 + 0x7c;
              *(undefined4 *)(pFVar36 + 0x78) = 0;
              if (iVar12 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,(ForAnyElementType *)pFVar24,0,(int *)pFVar37);
                iVar12 = *(int *)pFVar37;
              }
              piVar4 = &pFVar17->Index;
              if (((*(undefined1 **)&pFVar36[0x70].field_0x0 <= piVar4) &&
                  (piVar4 < *(undefined1 **)&pFVar36[0x70].field_0x0 + (longlong)iVar12 * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = *(int *)(pFVar36 + 0x78);
              if (iVar12 == *(int *)pFVar37) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(pFVar36 + 0x70),
                                    (int *)(pFVar36 + 0x7c));
              }
              *(int *)(pFVar36 + 0x78) = iVar12 + 1;
              *(int *)(*(longlong *)&pFVar36[0x70].field_0x0 + (longlong)iVar12 * 4) = *piVar4;
              pFVar17->ParentIndex = *(int *)(pFVar36 + 200);
              pFVar17->DirectParentJointIndex = *(int *)(pFVar36 + 0xd4);
              dVar6 = *(double *)(pFVar36 + 0x18);
              (pFVar17->Transform).Rotation.XY.m128d_f64[0] = *(double *)&pFVar36[0x10].field_0x0;
              (pFVar17->Transform).Rotation.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(pFVar36 + 0x28);
              (pFVar17->Transform).Rotation.ZW.m128d_f64[0] = *(double *)&pFVar36[0x20].field_0x0;
              (pFVar17->Transform).Rotation.ZW.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(pFVar36 + 0x38);
              (pFVar17->Transform).Translation.XY.m128d_f64[0] = *(double *)&pFVar36[0x30].field_0x0
              ;
              (pFVar17->Transform).Translation.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(pFVar36 + 0x48);
              (pFVar17->Transform).Translation.ZW.m128d_f64[0] = *(double *)&pFVar36[0x40].field_0x0
              ;
              (pFVar17->Transform).Translation.ZW.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(pFVar36 + 0x58);
              (pFVar17->Transform).Scale3D.XY.m128d_f64[0] = *(double *)&pFVar36[0x50].field_0x0;
              (pFVar17->Transform).Scale3D.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)&pFVar36[0x60].field_0x0;
              dVar7 = *(double *)(pFVar36 + 0x68);
              pFVar17->bHasLocalBindPose = true;
              (pFVar17->Transform).Scale3D.ZW.m128d_f64[0] = dVar6;
              (pFVar17->Transform).Scale3D.ZW.m128d_f64[1] = dVar7;
              *&(pFVar17->LocalBindPose).Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              *&(pFVar17->LocalBindPose).Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              *&(pFVar17->LocalBindPose).Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              *&(pFVar17->LocalBindPose).Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              pFVar29 = this->Asset;
              iVar12 = (pFVar29->Scenes).ArrayNum;
              pFVar24 = (pFVar29->Scenes).AllocatorInstance.Data;
              pFVar37 = pFVar24 + (longlong)iVar12 * 0x80;
              while( true ) {
                if ((pFVar29->Scenes).ArrayNum != iVar12) {
                  local_a64[0] = 0;
                  `TCheckedPointerIterator<GLTF::FScene,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_a64);
                }
                this = local_a58;
                if (pFVar24 == pFVar37) break;
                piVar4 = *(int **)(pFVar24 + 0x10);
                if (piVar4 == piVar4 + *(int *)(pFVar24 + 0x18)) {
LAB_14e630263:
                  pFVar24 = pFVar24 + 0x80;
                }
                else {
                  piVar27 = piVar4;
                  do {
                    if (*piVar27 == *(int *)(pFVar36 + 200)) {
                      uVar30 = (uint)((longlong)piVar27 - (longlong)piVar4 >> 2);
                      if (uVar30 != 0xffffffff) {
                        iVar34 = local_a40->Index;
                        uVar13 = 0;
                        if ((int)uVar30 < *(int *)(pFVar24 + 0x18)) {
                          uVar13 = ~uVar30 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        *(int *)(*(longlong *)(pFVar24 + 0x10) + (longlong)(int)uVar30 * 4) = iVar34
                        ;
                      }
                      goto LAB_14e630263;
                    }
                    piVar27 = piVar27 + 1;
                  } while (piVar27 != piVar4 + *(int *)(pFVar24 + 0x18));
                  pFVar24 = pFVar24 + 0x80;
                }
              }
              uVar21 = (ulonglong)(uint)local_a00._32_4_;
              uVar20 = 0;
              if (local_a00._32_4_ != 0) {
                do {
                  pFVar29 = this->Asset;
                  uVar13 = (uint)uVar20;
                  uVar30 = 0;
                  if ((int)uVar13 < (int)uVar21) {
                    uVar30 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar30 = *(uint *)(local_a00._24_8_ + (longlong)(int)uVar13 * 4);
                  uVar13 = 0;
                  if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
                    uVar13 = ~uVar30 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar20 = uVar20 + 1;
                  pFVar36 = (pFVar29->Nodes).AllocatorInstance.Data;
                  *(int *)(pFVar36 + (longlong)(int)uVar30 * 0x260 + 0xcc) = local_a40->Index;
                  *(int *)(pFVar36 + (longlong)(int)uVar30 * 0x260 + 0xd0) = local_a40->Index;
                  uVar21 = (ulonglong)(int)local_a00._32_4_;
                } while (uVar20 < uVar21);
              }
            }
          }
          if ((void *)local_a00._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a00._24_8_);
          }
          stack0xfffffffffffff7a8 =
               (double)CONCAT44(iStack_854,auStack_868._16_4_ & ~auStack_868._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_868);
        }
        local_760 = 0;
        if (local_768.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_768.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::BuildRootJoints'::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::BuildRootJoints_::__l3::FRootJoints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_7a8);
        uVar21 = local_960;
      }
      pFVar29 = this->Asset;
      local_960 = uVar21 + 1;
    } while (local_960 < (ulonglong)(longlong)(pFVar29->Skins).ArrayNum);
  }
  uVar21 = 0;
  if ((pFVar29->Nodes).ArrayNum != 0) {
    do {
      uVar13 = (uint)uVar21;
      uVar30 = 0;
      if ((int)uVar13 < (pFVar29->Nodes).ArrayNum) {
        uVar30 = ~uVar13 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)((pFVar29->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x260 + 0x80)
          == 2) {
        uVar20 = uVar21 & 0xffffffff;
        if (((int)uVar13 < 0) || ((this->Asset->Nodes).ArrayNum <= (int)uVar13)) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8658679761230363111>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                              ,0x619,"Asset->Nodes.IsValidIndex(CurrentIndex)");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar30 = 0xffffffff;
        }
        else {
          while( true ) {
            pFVar29 = this->Asset;
            uVar30 = (uint)uVar20;
            uVar23 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar23 = ~uVar30 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = *(int *)((pFVar29->Nodes).AllocatorInstance.Data +
                             (longlong)(int)uVar30 * 0x260 + 0xd0);
            if ((iVar12 < 0) || ((pFVar29->Nodes).ArrayNum <= iVar12)) break;
            pFVar29 = this->Asset;
            uVar23 = 0;
            if ((int)uVar30 < (pFVar29->Nodes).ArrayNum) {
              uVar23 = ~uVar30 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar20 = (ulonglong)
                     *(uint *)((pFVar29->Nodes).AllocatorInstance.Data +
                              (longlong)(int)uVar30 * 0x260 + 0xd0);
          }
        }
        pFVar29 = this->Asset;
        uVar23 = 0;
        if ((int)uVar13 < (pFVar29->Nodes).ArrayNum) {
          uVar23 = ~uVar13 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((pFVar29->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x260 + 0xd8) =
             uVar30;
      }
      pFVar29 = this->Asset;
      uVar21 = uVar21 + 1;
    } while (uVar21 < (ulonglong)(longlong)(pFVar29->Nodes).ArrayNum);
  }
  return;
}

// CheckForErrors @ 14e631120

bool __thiscall GLTF::FFileReader::CheckForErrors(FFileReader *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_1;
  uVar5 = (ulonglong)(int)this->_padding_;
  if (uVar7 < uVar5) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (int)uVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(int *)(this->_padding_ + (longlong)(int)uVar6 * 0x18) == 2) {
        return true;
      }
      uVar5 = (ulonglong)(int)this->_padding_;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return false;
}

// FindRootJointIndex @ 14e635cf0

int __thiscall GLTF::FFileReader::FindRootJointIndex(FFileReader *this,int param_1)

{
  FAsset *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 < 0) || ((this->Asset->Nodes).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8658679761230363111>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                       ,0x619,"Asset->Nodes.IsValidIndex(CurrentIndex)");
    if (!bVar3) {
      return -1;
    }
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  while( true ) {
    pFVar1 = this->Asset;
    uVar4 = 0;
    if (param_1 < (pFVar1->Nodes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = *(int *)((pFVar1->Nodes).AllocatorInstance.Data + (longlong)param_1 * 0x260 + 0xd0);
    if ((iVar5 < 0) || ((pFVar1->Nodes).ArrayNum <= iVar5)) {
      return param_1;
    }
    pFVar1 = this->Asset;
    uVar4 = 0;
    if (param_1 < (pFVar1->Nodes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    param_1 = *(int *)((pFVar1->Nodes).AllocatorInstance.Data + (longlong)param_1 * 0x260 + 0xd0);
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// FixNodeTypesForIndirectJoints @ 14e635e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall GLTF::FFileReader::FixNodeTypesForIndirectJoints(FFileReader *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  uint *puVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  FAsset *pFVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  uint *puVar25;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178;
  undefined1 local_177 [3];
  uint local_174;
  ForAnyElementType local_170;
  undefined8 local_168;
  uint local_160;
  uint local_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_150;
  undefined4 local_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  FFileReader *local_118;
  FScriptContainerElement *local_110;
  ulonglong local_108;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  uint *local_f0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar19 = this->Asset;
  local_108 = 0;
  local_118 = this;
  if ((pFVar19->Skins).ArrayNum != 0) {
    do {
      puVar23 = (uint *)0x0;
      uVar13 = (uint)local_108;
      uVar17 = 0;
      if ((int)uVar13 < (pFVar19->Skins).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar24 = (pFVar19->Skins).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x98;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.AllocationFlags.NumBits = 0;
      local_88.AllocationFlags.MaxBits = 0x80;
      local_88.FirstFreeIndex = -1;
      local_88.NumFreeIndices = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      iVar9 = *(int *)(pFVar24 + 0x20);
      puVar25 = *(uint **)(pFVar24 + 0x18);
      local_110 = pFVar24;
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = (local_88.Data.ArrayNum - local_88.NumFreeIndices) + iVar9;
      if ((uint)(local_88.Data.ArrayNum - local_88.NumFreeIndices) < uVar17) {
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve(&local_88,uVar17);
        if (uVar17 < 4) {
          uVar17 = 1;
        }
        else {
          uVar21 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_100 = (undefined4)lVar11;
          uVar17 = 1 << ((byte)lVar11 & 0x1f);
        }
        if ((local_40 == 0) || ((int)local_40 < (int)uVar17)) {
          local_40 = uVar17;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar17 != 0) {
            uVar13 = uVar17;
            if (uVar17 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar13 = 0;
                goto LAB_14e636027;
              }
            }
            else {
LAB_14e636027:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar13,4);
            }
            if (0 < (int)uVar17) {
              uVar21 = (ulonglong)uVar17;
              puVar14 = puVar23;
              do {
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                uVar10 = (ulonglong)puVar14 & (longlong)(int)uVar17 - 1U;
                puVar14 = (uint *)((longlong)puVar14 + 1);
                *(undefined4 *)(FVar20.Data + uVar10 * 4) = 0xffffffff;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_150 = &local_88.AllocationFlags;
            local_158 = 0;
            uStack_154 = 1;
            uStack_144 = 0;
            uStack_140 = 0;
            puVar14 = puVar23;
            if (local_88.AllocationFlags.NumBits != 0) {
              FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
              if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar17 = *(uint *)FVar15;
              puVar16 = puVar23;
              while (uVar17 == 0) {
                uStack_140 = (int)puVar16 + 0x20;
                puVar16 = (uint *)(ulonglong)uStack_140;
                iVar8 = (int)puVar14;
                local_158 = iVar8 + 1;
                puVar14 = (uint *)(ulonglong)local_158;
                if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                         ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_158) goto LAB_14e63612f;
                uVar17 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar8 * 4);
              }
              uStack_154 = -uVar17 & uVar17;
              uVar21 = (ulonglong)uStack_154 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              local_fc = (int)lVar11;
              uStack_144 = local_fc + -1 + (int)puVar16;
              puVar14 = (uint *)(ulonglong)uStack_144;
              if (local_88.AllocationFlags.NumBits < (int)uStack_144) {
LAB_14e63612f:
                puVar14 = (uint *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
                uStack_144 = local_88.AllocationFlags.NumBits;
              }
            }
            local_148 = 0xffffffff;
            local_e8 = &local_88;
            local_e0._padding_ = CONCAT44(uStack_154,local_158);
            local_e0.CurrentBitIndex = uStack_144;
            local_e0.UnvisitedBitMask = 0xffffffff;
            local_e0._28_4_ = uStack_13c;
            local_e0.BaseBitIndex = uStack_140;
            local_e0.Array = pTStack_150;
            if ((int)puVar14 < local_88.AllocationFlags.NumBits) {
              do {
                lVar11 = (longlong)(int)puVar14;
                pFVar1 = (local_e8->Data).AllocatorInstance.Data;
                uVar17 = local_40 - 1 & *(uint *)(pFVar1 + lVar11 * 0xc);
                *(uint *)(pFVar1 + lVar11 * 0xc + 8) = uVar17;
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                uVar21 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(pFVar1 + lVar11 * 0xc + 4) =
                     *(undefined4 *)(FVar20.Data + uVar21 * 4);
                *(int *)(FVar20.Data + uVar21 * 4) = (int)puVar14;
                local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
                puVar14 = (uint *)(ulonglong)(uint)local_e0.CurrentBitIndex;
              } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
            }
          }
        }
      }
      puVar14 = puVar25 + iVar9;
      iVar9 = local_88.FirstFreeIndex;
      for (; local_88.FirstFreeIndex = iVar9, puVar25 != puVar14; puVar25 = puVar25 + 1) {
        if (local_88.NumFreeIndices == 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                             &local_88.Data.ArrayMax);
          iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_88.AllocationFlags,1);
          FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar12 = (byte)iVar8 & 0x1f;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0x1f;
            bVar12 = bVar12 - 0x20;
          }
          puVar16 = (uint *)((longlong)FVar15 + (longlong)(iVar8 >> 5) * 4);
          *puVar16 = *puVar16 & ~(1 << (bVar12 & 0x1f));
        }
        else {
          local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
          local_88.FirstFreeIndex =
               *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc + 4);
          if (local_88.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_88.Data.AllocatorInstance.Data + (longlong)local_88.FirstFreeIndex * 0xc) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_88,&local_98,iVar9);
        puVar16 = puVar23;
        if (local_98.Pointer != (uint *)0x0) {
          *(uint *)local_98.Pointer = *puVar25;
          *(uint *)((longlong)local_98.Pointer + 4) = 0xffffffff;
          puVar16 = local_98.Pointer;
        }
        uVar17 = *puVar16;
        if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
           (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
          FVar20.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar20.Data = local_48.Data;
          }
          for (iVar9 = *(int *)(FVar20.Data + (ulonglong)(local_40 - 1 & uVar17) * 4); iVar9 != -1;
              iVar9 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc + 4)) {
            if (*(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc) == uVar17) {
              if (iVar9 != -1) {
                *(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar9 * 0xc) = uVar17;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_88,local_98.Index,1);
                goto LAB_14e63659f;
              }
              break;
            }
          }
        }
        uVar18 = 1;
        uVar13 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
        if (3 < uVar13) {
          uVar21 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_f8 = (undefined4)lVar11;
          uVar18 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((int)uVar13 < 1) || ((int)uVar18 <= (int)local_40)) {
          uVar17 = local_40 - 1 & uVar17;
          puVar16[2] = uVar17;
          FVar20.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar20.Data = local_48.Data;
          }
          uVar21 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar17;
          puVar16[1] = *(uint *)(FVar20.Data + uVar21 * 4);
          *(int *)(FVar20.Data + uVar21 * 4) = local_98.Index;
        }
        else {
          local_40 = uVar18;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar18 != 0) {
            uVar17 = uVar18;
            if (uVar18 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar17 = 0;
                goto LAB_14e6363be;
              }
            }
            else {
LAB_14e6363be:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar17,4);
            }
            if (0 < (int)uVar18) {
              uVar21 = (ulonglong)uVar18;
              puVar16 = puVar23;
              do {
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                uVar10 = (ulonglong)puVar16 & (longlong)(int)uVar18 - 1U;
                puVar16 = (uint *)((longlong)puVar16 + 1);
                *(undefined4 *)(FVar20.Data + uVar10 * 4) = 0xffffffff;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_130 = &local_88.AllocationFlags;
            local_138 = 0;
            uStack_134 = 1;
            uStack_124 = 0;
            uStack_120 = 0;
            puVar16 = puVar23;
            if (local_88.AllocationFlags.NumBits != 0) {
              FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
              if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar17 = *(uint *)FVar15;
              puVar22 = puVar23;
              while (uVar17 == 0) {
                uStack_120 = (int)puVar22 + 0x20;
                puVar22 = (uint *)(ulonglong)uStack_120;
                iVar9 = (int)puVar16;
                local_138 = iVar9 + 1;
                puVar16 = (uint *)(ulonglong)local_138;
                if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                         ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_138) goto LAB_14e6364be;
                uVar17 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar9 * 4);
              }
              uStack_134 = -uVar17 & uVar17;
              uVar21 = (ulonglong)uStack_134 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              local_f4 = (int)lVar11;
              uStack_124 = (int)puVar22 + -1 + local_f4;
              puVar16 = (uint *)(ulonglong)uStack_124;
              if (local_88.AllocationFlags.NumBits < (int)uStack_124) {
LAB_14e6364be:
                puVar16 = (uint *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
                uStack_124 = local_88.AllocationFlags.NumBits;
              }
            }
            local_128 = 0xffffffff;
            local_c0 = &local_88;
            local_b8._padding_ = CONCAT44(uStack_134,local_138);
            local_b8.CurrentBitIndex = uStack_124;
            local_b8.UnvisitedBitMask = 0xffffffff;
            local_b8._28_4_ = uStack_11c;
            local_b8.BaseBitIndex = uStack_120;
            local_b8.Array = pTStack_130;
            if ((int)puVar16 < local_88.AllocationFlags.NumBits) {
              do {
                lVar11 = (longlong)(int)puVar16;
                pFVar24 = (local_c0->Data).AllocatorInstance.Data;
                uVar17 = local_40 - 1 & *(uint *)(pFVar24 + lVar11 * 0xc);
                *(uint *)(pFVar24 + lVar11 * 0xc + 8) = uVar17;
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                uVar21 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(pFVar24 + lVar11 * 0xc + 4) =
                     *(undefined4 *)(FVar20.Data + uVar21 * 4);
                *(int *)(FVar20.Data + uVar21 * 4) = (int)puVar16;
                local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
                puVar16 = (uint *)(ulonglong)(uint)local_b8.CurrentBitIndex;
              } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
            }
          }
        }
LAB_14e63659f:
        pFVar24 = local_110;
        this = local_118;
        iVar9 = local_88.FirstFreeIndex;
      }
      local_160 = *(uint *)(pFVar24 + 0x20);
      uVar21 = (ulonglong)(int)local_160;
      puVar23 = *(uint **)(pFVar24 + 0x18);
      local_f0 = puVar23 + uVar21;
      while( true ) {
        puVar25 = local_f0;
        if (*(int *)(pFVar24 + 0x20) != (int)uVar21) {
          local_178 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_178)
          ;
        }
        if (puVar23 == puVar25) break;
        uVar17 = *puVar23;
        if ((-1 < (int)uVar17) && (pFVar19 = this->Asset, (int)uVar17 < (pFVar19->Nodes).ArrayNum))
        {
          uVar13 = 0;
          if ((int)uVar17 < (pFVar19->Nodes).ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_174 = *(uint *)((pFVar19->Nodes).AllocatorInstance.Data +
                               (longlong)(int)uVar17 * 0x260 + 0xcc);
          local_170.Data = (FScriptContainerElement *)0x0;
          local_168 = 0;
          iVar9 = 0;
          while ((-1 < (int)local_174 && ((int)local_174 < (this->Asset->Nodes).ArrayNum))) {
            if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
              FVar20.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar20.Data = local_48.Data;
              }
              for (iVar8 = *(int *)(FVar20.Data + (ulonglong)(local_40 - 1 & local_174) * 4);
                  iVar8 != -1;
                  iVar8 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4)
                  ) {
                if (*(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) ==
                    local_174) {
                  if (0 < iVar9) {
                    pFVar24 = local_170.Data + (longlong)iVar9 * 4;
                    FVar20.Data = local_170.Data;
                    iVar8 = iVar9;
                    while( true ) {
                      if (iVar8 != iVar9) {
                        local_177[0] = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(local_177);
                      }
                      if (FVar20.Data == pFVar24) break;
                      uVar17 = *(uint *)FVar20.Data;
                      pFVar19 = this->Asset;
                      uVar13 = 0;
                      if ((int)uVar17 < (pFVar19->Nodes).ArrayNum) {
                        uVar13 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar13 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pFVar1 = (pFVar19->Nodes).AllocatorInstance.Data;
                      if (((*(int *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x80) != 0) &&
                          (1 < *(int *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x80) - 1U)) &&
                         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                            (&bGEnsureHasExecuted<_8658679761230363056>,false,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                                             ,0x650,
                                             "Node.Type == FNode::EType::None || Node.Type == FNode::EType::Transform || Node.Type == FNode::EType::Joint"
                                            ), bVar7)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      uVar3 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x10);
                      uVar4 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x18);
                      FVar20.Data = FVar20.Data + 4;
                      uVar5 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x20);
                      uVar6 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x28);
                      *(undefined4 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x80) = 2;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1a0) = uVar3;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1a8) = uVar4;
                      pFVar1[(longlong)(int)uVar17 * 0x260 + 400] = (FScriptContainerElement)0x1;
                      uVar3 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x30);
                      uVar4 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x38);
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1b0) = uVar5;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1b8) = uVar6;
                      uVar5 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x40);
                      uVar6 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x48);
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1c0) = uVar3;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1c8) = uVar4;
                      uVar3 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x50);
                      uVar4 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x58);
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1d0) = uVar5;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1d8) = uVar6;
                      uVar5 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x60);
                      uVar6 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x68);
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1e0) = uVar3;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1e8) = uVar4;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1f0) = uVar5;
                      *(undefined8 *)(pFVar1 + (longlong)(int)uVar17 * 0x260 + 0x1f8) = uVar6;
                      this = local_118;
                      iVar8 = (int)local_168;
                    }
                    uVar21 = (ulonglong)local_160;
                    pFVar24 = local_110;
                  }
                  goto LAB_14e63692f;
                }
              }
            }
            if ((local_170.Data <= (FScriptContainerElement *)&local_174) &&
               ((FScriptContainerElement *)&local_174 <
                local_170.Data + (longlong)local_168._4_4_ * 4)) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar9 = (int)local_168;
            }
            if (iVar9 == local_168._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_170,(int *)((longlong)&local_168 + 4));
            }
            local_168 = CONCAT44(local_168._4_4_,iVar9 + 1);
            *(uint *)(local_170.Data + (longlong)iVar9 * 4) = local_174;
            lVar11 = (longlong)(int)local_174;
            pFVar19 = this->Asset;
            uVar17 = 0;
            if ((int)local_174 < (pFVar19->Nodes).ArrayNum) {
              uVar17 = ~local_174 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar9 = (int)local_168;
            local_174 = *(uint *)((pFVar19->Nodes).AllocatorInstance.Data + lVar11 * 0x260 + 0xcc);
          }
LAB_14e63692f:
          if (local_170.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data);
          }
        }
        puVar23 = puVar23 + 1;
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_88);
      pFVar19 = this->Asset;
      local_108 = local_108 + 1;
    } while (local_108 < (ulonglong)(longlong)(pFVar19->Skins).ArrayNum);
  }
  BuildParentJointIndices(this);
  return;
}

// GenerateInverseBindPosesPerSkinIndices @ 14e637140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall GLTF::FFileReader::GenerateInverseBindPosesPerSkinIndices(FFileReader *this)

{
  EComponentType EVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ulong64 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  FAsset *pFVar12;
  uint uVar13;
  double dVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStackY_2f8 [32];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_2c0;
  undefined1 local_2b0 [24];
  TMatrix<double> *local_298;
  undefined8 *local_290;
  TMatrix<double> local_288;
  TMatrix<double> local_208;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double dStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar12 = this->Asset;
  local_2b0._8_8_ = 0.0;
  if ((pFVar12->Skins).ArrayNum != 0) {
    do {
      dVar14 = (double)local_2b0._8_8_;
      uVar13 = (uint)local_2b0._8_8_;
      uVar16 = 0;
      if ((int)uVar13 < (pFVar12->Skins).ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = 0;
      pFVar2 = (pFVar12->Skins).AllocatorInstance.Data;
      lVar15 = (longlong)(int)uVar13 * 0x98;
      lVar3 = *(longlong *)(pFVar2 + lVar15);
      if ((*(int *)(lVar3 + 4) == *(int *)(pFVar2 + lVar15 + 0x20)) &&
         (((*(longlong *)(lVar3 + 0x98) != 0 || (*(char *)(lVar3 + 0x18) != '\0')) &&
          (*(int *)(pFVar2 + lVar15 + 0x20) != 0)))) {
        do {
          lVar3 = *(longlong *)(pFVar2 + lVar15);
          uVar16 = (uint)uVar17;
          if (((uVar16 < *(uint *)(lVar3 + 4)) && (*(int *)(lVar3 + 8) == 7)) &&
             ((*(longlong *)(lVar3 + 0x98) == 0 ||
              (bVar10 = GLTF::`anonymous_namespace'::AcquireMat4
                                  (uVar16,(FBufferView *)(lVar3 + 0x90),*(ulong64 *)(lVar3 + 0xb8),
                                   *(uint *)(lVar3 + 200),*(EComponentType *)(lVar3 + 0xc),
                                   &local_288), bVar10)))) {
            if (*(char *)(lVar3 + 0x18) != '\0') {
              uVar13 = *(uint *)(lVar3 + 0x1c);
              EVar1 = *(EComponentType *)(lVar3 + 0x58);
              uVar4 = *(ulong64 *)(lVar3 + 0x50);
              local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2c0.ArrayNum = 0;
              local_2c0.ArrayMax = 0;
              TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_2c0,uVar13,No);
              GLTF::`anonymous_namespace'::FillUnsignedIntArray
                        ((FBufferView *)(lVar3 + 0x28),uVar4,EVar1,uVar13,
                         (uint *)local_2c0.AllocatorInstance.Data);
              for (FVar11.Data = local_2c0.AllocatorInstance.Data;
                  FVar11.Data != local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayNum * 4
                  ; FVar11.Data = FVar11.Data + 4) {
                if (*(uint *)FVar11.Data == uVar16) {
                  if (((int)((longlong)FVar11.Data - (longlong)local_2c0.AllocatorInstance.Data >> 2
                            ) != -1) &&
                     (bVar10 = GLTF::`anonymous_namespace'::AcquireMat4
                                         (uVar16,(FBufferView *)(lVar3 + 0x60),
                                          *(ulong64 *)(lVar3 + 0x88),*(uint *)(lVar3 + 200),
                                          *(EComponentType *)(lVar3 + 0xc),&local_208), bVar10)) {
                    local_288.M[0][0] = local_208.M[0][0];
                    local_288.M[0][1] = local_208.M[0][1];
                    local_288.M[0][2] = local_208.M[0][2];
                    local_288.M[0][3] = local_208.M[0][3];
                    local_288.M[1][0] = local_208.M[1][0];
                    local_288.M[1][1] = local_208.M[1][1];
                    local_288.M[1][2] = local_208.M[1][2];
                    local_288.M[1][3] = local_208.M[1][3];
                    local_288.M[2][0] = local_208.M[2][0];
                    local_288.M[2][1] = local_208.M[2][1];
                    local_288.M[2][2] = local_208.M[2][2];
                    local_288.M[2][3] = local_208.M[2][3];
                    local_288.M[3][0] = local_208.M[3][0];
                    local_288.M[3][1] = local_208.M[3][1];
                    local_288.M[3][2] = local_208.M[3][2];
                    local_288.M[3][3] = local_208.M[3][3];
                  }
                  break;
                }
              }
              dVar14 = (double)local_2b0._8_8_;
              if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c0.AllocatorInstance.Data);
                dVar14 = (double)local_2b0._8_8_;
              }
            }
            local_f8 = local_288.M[0][2];
            uStack_f0 = local_288.M[0][3];
            local_108 = local_288.M[0][0];
            uStack_100 = local_288.M[0][1];
            local_d8 = local_288.M[1][2];
            uStack_d0 = local_288.M[1][3];
            local_e8 = local_288.M[1][0];
            dStack_e0 = local_288.M[1][1];
            local_b8 = local_288.M[2][2];
            uStack_b0 = local_288.M[2][3];
            local_c8 = local_288.M[2][0];
            uStack_c0 = local_288.M[2][1];
            local_98 = local_288.M[3][2];
            dStack_90 = local_288.M[3][3];
            uStack_170 = local_288.M[3][0]._0_4_;
            uStack_16c = local_288.M[3][0]._4_4_;
            uStack_150 = local_288.M[3][1]._0_4_;
            uStack_14c = local_288.M[3][1]._4_4_;
          }
          else {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2814153273458555725>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                                ,0x4b3,"false");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_170 = 0;
            uStack_16c = 0;
            uStack_150 = 0;
            uStack_14c = 0;
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 0.0;
            uStack_f0 = 0.0;
            local_e8 = 0.0;
            dStack_e0 = 0.0;
            local_d8 = 0.0;
            uStack_d0 = 0.0;
            local_c8 = 0.0;
            uStack_c0 = 0.0;
            local_b8 = 0.0;
            uStack_b0 = 0.0;
            local_98 = 0.0;
            dStack_90 = 0.0;
          }
          local_128 = (undefined4)uStack_f0;
          uStack_124 = uStack_f0._4_4_;
          uStack_140 = SUB84(local_d8,0);
          uStack_13c = (undefined4)((ulonglong)local_d8 >> 0x20);
          uStack_120 = SUB84(uStack_d0,0);
          uStack_11c = (undefined4)((ulonglong)uStack_d0 >> 0x20);
          uStack_110 = SUB84(dStack_90,0);
          uStack_10c = (undefined4)((ulonglong)dStack_90 >> 0x20);
          pFVar12 = this->Asset;
          uStack_180 = SUB84(local_e8,0);
          uStack_17c = (undefined4)((ulonglong)local_e8 >> 0x20);
          local_188 = (undefined4)local_108;
          uStack_184 = local_108._4_4_;
          dVar6 = local_e8;
          local_178 = (undefined4)local_c8;
          uStack_174 = local_c8._4_4_;
          dVar7 = local_c8;
          uStack_f0 = (double)CONCAT44(uStack_16c,uStack_170);
          uStack_160 = SUB84(dStack_e0,0);
          uStack_15c = (undefined4)((ulonglong)dStack_e0 >> 0x20);
          local_168 = (undefined4)uStack_100;
          uStack_164 = uStack_100._4_4_;
          local_e8 = uStack_100;
          local_158 = (undefined4)uStack_c0;
          uStack_154 = uStack_c0._4_4_;
          dVar8 = uStack_c0;
          uStack_d0 = (double)CONCAT44(uStack_14c,uStack_150);
          uStack_130 = SUB84(local_98,0);
          uStack_12c = (undefined4)((ulonglong)local_98 >> 0x20);
          local_148 = (undefined4)local_f8;
          uStack_144 = local_f8._4_4_;
          local_c8 = local_f8;
          uStack_c0 = local_d8;
          local_138 = (undefined4)local_b8;
          uStack_134 = local_b8._4_4_;
          uVar13 = 0;
          if ((int)uVar16 < *(int *)(pFVar2 + lVar15 + 0x20)) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          dVar9 = local_98;
          local_a8 = local_128;
          uStack_a4 = uStack_124;
          local_118 = (undefined4)uStack_b0;
          uStack_114 = uStack_b0._4_4_;
          local_98 = uStack_b0;
          uStack_100 = dVar6;
          local_f8 = dVar7;
          local_d8 = dVar8;
          uStack_b0 = dVar9;
          uStack_a0 = uStack_120;
          uStack_9c = uStack_11c;
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = *(uint *)(*(longlong *)(pFVar2 + lVar15 + 0x18) + (longlong)(int)uVar16 * 4);
          uVar13 = 0;
          if ((int)uVar16 < (pFVar12->Nodes).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_2b0._0_4_ = SUB84(dVar14,0);
          local_298 = (TMatrix<double> *)local_2b0;
          local_290 = &local_108;
          TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,UE::Math::TMatrix<double>_const_&>_>
                    ((TSet<TTuple<int,UE::Math::TMatrix<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>,FDefaultSetAllocator>
                      *)((pFVar12->Nodes).AllocatorInstance.Data +
                        (longlong)(int)uVar16 * 0x260 + 0xf0),
                     (TPairInitializer<int_&&,UE::Math::TMatrix<double>_const_&> *)
                     (local_2b0 + 0x10),(bool *)&local_298);
          uVar17 = uVar17 + 1;
        } while (uVar17 < (ulonglong)(longlong)*(int *)(pFVar2 + lVar15 + 0x20));
      }
      pFVar12 = this->Asset;
      local_2b0._8_8_ = (longlong)dVar14 + 1;
    } while ((ulonglong)local_2b0._8_8_ < (ulonglong)(longlong)(pFVar12->Skins).ArrayNum);
  }
  return;
}

// GenerateLocalBindPosesPerSkinIndices @ 14e637820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::GenerateLocalBindPosesPerSkinIndices(FFileReader *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  TMatrix<double> *pTVar16;
  undefined7 extraout_var;
  TTransform<double> *pTVar17;
  FScriptContainerElement *pFVar18;
  TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&> *pTVar19;
  FAsset *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint **ppuVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auStack_758 [32];
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  longlong local_728;
  longlong local_720;
  undefined8 local_718;
  ForAnyElementType local_708;
  undefined8 local_700;
  uint local_6f8;
  uint local_6f4;
  longlong local_6f0;
  FScriptContainerElement *local_6e8;
  undefined1 local_6e0 [8];
  TTransform<double> *local_6d8;
  FScriptContainerElement *local_6d0;
  uint *local_6c8;
  double *local_6c0;
  uint *local_6b8;
  TTransform<double> *local_6b0;
  TMatrix<double> local_6a8;
  TMatrix<double> local_628;
  TMatrix<double> local_5a8;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  double local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  double dStack_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  double local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  double dStack_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  double local_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  double dStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  double local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  double dStack_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  double local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  double dStack_448;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  double dStack_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  TTransform<double> local_1c8;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee0000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_758;
  pFVar20 = this->Asset;
  uVar26 = 0;
  if ((pFVar20->Skins).ArrayNum != 0) {
    uVar32 = (uint)__xmm_80000000000000008000000000000000;
    uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      iVar15 = (pFVar20->Skins).ArrayNum;
      uVar25 = (uint)uVar26;
      uVar29 = 0;
      if ((int)uVar25 < iVar15) {
        uVar29 = ~uVar25 >> 0x1f;
      }
      if (uVar29 == 0) {
        local_738 = (FScriptContainerElement *)(longlong)(int)uVar25;
        local_730 = (FScriptContainerElement *)(longlong)iVar15;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_6d0 = (pFVar20->Skins).AllocatorInstance.Data;
      local_6d8 = (TTransform<double> *)((longlong)(int)uVar25 * 0x98);
      lVar28 = *(longlong *)(local_6d0 + (longlong)&(local_6d8->Rotation).XY);
      if ((*(int *)(lVar28 + 4) == *(int *)(local_6d0 + (longlong)&(local_6d8->Translation).XY)) &&
         (((*(longlong *)(lVar28 + 0x98) != 0 || (*(char *)(lVar28 + 0x18) != '\0')) &&
          (uVar27 = 0, *(int *)(local_6d0 + (longlong)&(local_6d8->Translation).XY) != 0)))) {
        do {
          pFVar22 = local_6d0;
          pTVar17 = local_6d8;
          pFVar20 = this->Asset;
          uVar30 = (uint)uVar27;
          uVar29 = 0;
          if ((int)uVar30 < *(int *)(local_6d0 + (longlong)&(local_6d8->Translation).XY)) {
            uVar29 = ~uVar30 >> 0x1f;
          }
          if (uVar29 == 0) {
            local_738 = (FScriptContainerElement *)(longlong)(int)uVar30;
            local_730 = (FScriptContainerElement *)
                        (longlong)*(int *)(local_6d0 + (longlong)&(local_6d8->Translation).XY);
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar15 = (pFVar20->Nodes).ArrayNum;
          uVar29 = *(uint *)(*(longlong *)(pFVar22 + 0x18 + (longlong)&(pTVar17->Rotation).XY) +
                            (longlong)(int)uVar30 * 4);
          uVar30 = 0;
          if ((int)uVar29 < iVar15) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (local_738 = (FScriptContainerElement *)(longlong)(int)uVar29,
             local_730 = (FScriptContainerElement *)(longlong)iVar15,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar22 = (pFVar20->Nodes).AllocatorInstance.Data;
          lVar28 = (longlong)(int)uVar29 * 0x260;
          uVar29 = *(uint *)(pFVar22 + lVar28 + 0xd4);
          local_6f0 = lVar28;
          local_6e8 = pFVar22;
          if (((uVar29 == 0xffffffff) || ((int)uVar29 < 0)) ||
             (pFVar20 = this->Asset, (pFVar20->Nodes).ArrayNum <= (int)uVar29)) {
LAB_14e63864c:
            pTVar16 = TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                      ::FindChecked((TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                                     *)(pFVar22 + lVar28 + 0xf0),uVar25);
            dVar1 = pTVar16->M[0][0];
            dVar2 = pTVar16->M[0][1];
            uVar29 = SUB84(dVar1,0) & uVar10;
            uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
            dVar1 = pTVar16->M[0][2];
            if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                (uVar29 = SUB84(dVar2,0) & uVar10,
                uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                dVar9 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar9
                )) || (uVar29 = SUB84(dVar1,0) & uVar10,
                      uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                      dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                      (double)CONCAT44(uVar30,uVar29) != dVar9)) {
LAB_14e638757:
              FMath::MatrixInverse(&local_e8,pTVar16);
              local_5a8.M[0][0] = local_e8.M[0][0];
              local_5a8.M[0][1] = local_e8.M[0][1];
              local_5a8.M[0][2] = local_e8.M[0][2];
              local_5a8.M[0][3] = local_e8.M[0][3];
              local_5a8.M[1][0] = local_e8.M[1][0];
              local_5a8.M[1][1] = local_e8.M[1][1];
              local_5a8.M[1][2] = local_e8.M[1][2];
              local_5a8.M[1][3] = local_e8.M[1][3];
              local_5a8.M[2][0] = local_e8.M[2][0];
              local_5a8.M[2][1] = local_e8.M[2][1];
              local_5a8.M[2][2] = local_e8.M[2][2];
              local_5a8.M[2][3] = local_e8.M[2][3];
              local_5a8.M[3][0]._0_4_ = local_e8.M[3][0]._0_4_;
              local_5a8.M[3][0]._4_4_ = local_e8.M[3][0]._4_4_;
              local_5a8.M[3][1]._0_4_ = local_e8.M[3][1]._0_4_;
              local_5a8.M[3][1]._4_4_ = local_e8.M[3][1]._4_4_;
              local_5a8.M[3][2]._0_4_ = local_e8.M[3][2]._0_4_;
              local_5a8.M[3][2]._4_4_ = local_e8.M[3][2]._4_4_;
              local_5a8.M[3][3]._0_4_ = local_e8.M[3][3]._0_4_;
              local_5a8.M[3][3]._4_4_ = local_e8.M[3][3]._4_4_;
            }
            else {
              dVar1 = pTVar16->M[1][0];
              dVar2 = pTVar16->M[1][1];
              uVar29 = SUB84(dVar1,0) & uVar10;
              uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
              dVar1 = pTVar16->M[1][2];
              if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                    (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                  (uVar29 = SUB84(dVar2,0) & uVar10,
                  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                  dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9)) ||
                 (uVar29 = SUB84(dVar1,0) & uVar10,
                 uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                 dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                 (double)CONCAT44(uVar30,uVar29) != dVar9)) goto LAB_14e638757;
              dVar1 = pTVar16->M[2][0];
              dVar2 = pTVar16->M[2][1];
              uVar29 = SUB84(dVar1,0) & uVar10;
              uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
              dVar1 = pTVar16->M[2][2];
              if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                    (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                  (uVar29 = SUB84(dVar2,0) & uVar10,
                  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                  dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9)) ||
                 (uVar29 = SUB84(dVar1,0) & uVar10,
                 uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                 dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                 (double)CONCAT44(uVar30,uVar29) != dVar9)) goto LAB_14e638757;
              local_5a8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
              local_5a8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
              local_5a8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
              local_5a8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
              local_5a8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
              local_5a8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
              local_5a8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
              local_5a8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
              local_5a8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
              local_5a8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
              local_5a8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
              local_5a8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
              local_5a8.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
              local_5a8.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
              local_5a8.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
              local_5a8.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
              local_5a8.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
              local_5a8.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
              local_5a8.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
              local_5a8.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
            }
            local_348.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_348.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_348.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_348.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_348.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_348.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_348.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_348.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_348.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_348.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_348.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_348.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_348.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_348.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_348.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_348.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::SetFromMatrix(&local_348,&local_5a8);
            local_6b8 = &local_6f4;
            ppuVar24 = &local_6b8;
            uVar29 = local_348.Rotation.XY.m128d_f64[1]._0_4_ ^ uVar32;
            uVar30 = local_348.Rotation.XY.m128d_f64[1]._4_4_ ^ uVar33;
            local_6b0 = &local_348;
            pTVar19 = (TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&> *)
                      (local_6e0 + 4);
            local_4a0 = local_348.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_49c = local_348.Translation.ZW.m128d_f64[0]._4_4_;
            local_348.Rotation.XY.m128d_f64[0]._4_4_ =
                 local_348.Rotation.XY.m128d_f64[0]._4_4_ ^ uVar33;
            local_348.Rotation.XY.m128d_f64[0]._0_4_ =
                 local_348.Rotation.XY.m128d_f64[0]._0_4_ ^ uVar32;
            local_348.Rotation.XY.m128d_f64[1]._0_4_ =
                 local_348.Rotation.ZW.m128d_f64[0]._0_4_ ^ uVar32;
            local_348.Rotation.XY.m128d_f64[1]._4_4_ =
                 local_348.Rotation.ZW.m128d_f64[0]._4_4_ ^ uVar33;
            local_488 = local_348.Translation.XY.m128d_f64[1];
            local_4b0 = local_348.Translation.XY.m128d_f64[0]._0_4_;
            uStack_4ac = local_348.Translation.XY.m128d_f64[0]._4_4_;
            dStack_4a8 = local_348.Translation.XY.m128d_f64[1];
            local_348.Rotation.ZW.m128d_f64[0]._4_4_ = uVar30;
            local_348.Rotation.ZW.m128d_f64[0]._0_4_ = uVar29;
            local_498 = local_348.Translation.XY.m128d_f64[0]._0_4_;
            uStack_494 = local_348.Translation.XY.m128d_f64[0]._4_4_;
            uStack_490 = local_348.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_48c = local_348.Translation.ZW.m128d_f64[0]._4_4_;
            local_348.Translation.XY.m128d_f64[1]._0_4_ =
                 local_348.Translation.ZW.m128d_f64[0]._0_4_;
            local_348.Translation.XY.m128d_f64[1]._4_4_ =
                 local_348.Translation.ZW.m128d_f64[0]._4_4_;
            local_348.Translation.ZW.m128d_f64[1] = 0.0;
            local_348.Translation.ZW.m128d_f64[0] = local_488;
            local_458 = local_348.Scale3D.XY.m128d_f64[1];
            local_470 = local_348.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_46c = local_348.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_480 = local_348.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_47c = local_348.Scale3D.XY.m128d_f64[0]._4_4_;
            dStack_478 = local_348.Scale3D.XY.m128d_f64[1];
            local_468 = local_348.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_464 = local_348.Scale3D.XY.m128d_f64[0]._4_4_;
            uStack_460 = local_348.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_45c = local_348.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_348.Scale3D.XY.m128d_f64[1]._0_4_ = local_348.Scale3D.ZW.m128d_f64[0]._0_4_;
            local_348.Scale3D.XY.m128d_f64[1]._4_4_ = local_348.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_348.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_348.Scale3D.ZW.m128d_f64[0] = local_458;
            local_6f4 = uVar25;
          }
          else {
            iVar15 = (pFVar20->Nodes).ArrayNum;
            uVar30 = 0;
            if ((int)uVar29 < iVar15) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (local_738 = (FScriptContainerElement *)(longlong)(int)uVar29,
               local_730 = (FScriptContainerElement *)(longlong)iVar15,
               bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar20->Nodes).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar29 * 0x260;
            if (*(int *)(pFVar4 + lVar23 + 0xf8) != *(int *)(pFVar4 + lVar23 + 0x124)) {
              pFVar21 = *(FScriptContainerElement **)(pFVar4 + lVar23 + 0x128 + 8);
              pFVar18 = pFVar4 + lVar23 + 0x128;
              if (pFVar21 != (FScriptContainerElement *)0x0) {
                pFVar18 = pFVar21;
              }
              iVar15 = *(int *)(pFVar18 +
                               ((ulonglong)(*(int *)(pFVar4 + lVar23 + 0x138) - 1) &
                               uVar26 & 0xffffffff) * 4);
              if (iVar15 != -1) {
                do {
                  if (*(uint *)((longlong)iVar15 * 0xa0 + *(longlong *)(pFVar4 + lVar23 + 0xf0)) ==
                      uVar25) goto LAB_14e637b4f;
                  iVar15 = *(int *)((longlong)iVar15 * 0xa0 + 0x90 +
                                   *(longlong *)(pFVar4 + lVar23 + 0xf0));
                } while (iVar15 != -1);
              }
            }
            uVar29 = *(uint *)(pFVar22 + lVar28 + 0xd4);
            pFVar20 = this->Asset;
            iVar15 = (pFVar20->Nodes).ArrayNum;
            uVar30 = 0;
            if ((int)uVar29 < iVar15) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (local_738 = (FScriptContainerElement *)(longlong)(int)uVar29,
               local_730 = (FScriptContainerElement *)(longlong)iVar15,
               bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar20->Nodes).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar29 * 0x260;
            if (*(int *)(pFVar4 + lVar23 + 0xf8) - *(int *)(pFVar4 + lVar23 + 0x124) < 1)
            goto LAB_14e63864c;
LAB_14e637b4f:
            uVar29 = *(uint *)(pFVar22 + lVar28 + 0xd4);
            pFVar20 = this->Asset;
            iVar15 = (pFVar20->Nodes).ArrayNum;
            uVar30 = 0;
            if ((int)uVar29 < iVar15) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (local_738 = (FScriptContainerElement *)(longlong)(int)uVar29,
               local_730 = (FScriptContainerElement *)(longlong)iVar15,
               bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar20->Nodes).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar29 * 0x260;
            pFVar21 = pFVar4 + lVar23 + 0xf0;
            if (*(int *)(pFVar4 + lVar23 + 0xf8) != *(int *)(pFVar21 + 0x34)) {
              pFVar18 = pFVar21 + 0x38;
              if (*(FScriptContainerElement **)(pFVar21 + 0x40) != (FScriptContainerElement *)0x0) {
                pFVar18 = *(FScriptContainerElement **)(pFVar21 + 0x40);
              }
              iVar15 = *(int *)(pFVar18 +
                               ((ulonglong)(*(int *)(pFVar21 + 0x48) - 1) & uVar26 & 0xffffffff) * 4
                               );
              if (iVar15 != -1) {
                do {
                  if (*(uint *)((longlong)iVar15 * 0xa0 + *(longlong *)&pFVar21->field_0x0) ==
                      uVar25) {
                    pFVar21 = pFVar4 + lVar23 + 0xf0;
                    if (iVar15 == -1) goto LAB_14e637c19;
                    pTVar16 = TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                              ::FindChecked((TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                                             *)pFVar21,uVar25);
                    local_6a8.M[0][0] = pTVar16->M[0][0];
                    local_6a8.M[0][1] = pTVar16->M[0][1];
                    local_6a8.M[0][2] = pTVar16->M[0][2];
                    local_6a8.M[0][3] = pTVar16->M[0][3];
                    local_6a8.M[1][0] = pTVar16->M[1][0];
                    local_6a8.M[1][1] = pTVar16->M[1][1];
                    local_6a8.M[1][2] = pTVar16->M[1][2];
                    local_6a8.M[1][3] = pTVar16->M[1][3];
                    local_6a8.M[2][0] = pTVar16->M[2][0];
                    local_6a8.M[2][1] = pTVar16->M[2][1];
                    local_6a8.M[2][2] = pTVar16->M[2][2];
                    local_6a8.M[2][3] = pTVar16->M[2][3];
                    local_6a8.M[3][0]._0_4_ = *(undefined4 *)pTVar16->M[3];
                    local_6a8.M[3][0]._4_4_ = *(undefined4 *)((longlong)pTVar16->M[3] + 4);
                    local_6a8.M[3][1]._0_4_ = *(undefined4 *)(pTVar16->M[3] + 1);
                    local_6a8.M[3][1]._4_4_ = *(undefined4 *)((longlong)pTVar16->M[3] + 0xc);
                    local_6a8.M[3][2]._0_4_ = *(undefined4 *)(pTVar16->M[3] + 2);
                    local_6a8.M[3][2]._4_4_ = *(undefined4 *)((longlong)pTVar16->M[3] + 0x14);
                    local_6a8.M[3][3]._0_4_ = *(undefined4 *)(pTVar16->M[3] + 3);
                    local_6a8.M[3][3]._4_4_ = *(undefined4 *)((longlong)pTVar16->M[3] + 0x1c);
                    goto LAB_14e637cdd;
                  }
                  iVar15 = *(int *)((longlong)iVar15 * 0xa0 + 0x90 +
                                   *(longlong *)&pFVar21->field_0x0);
                } while (iVar15 != -1);
              }
              pFVar21 = pFVar4 + lVar23 + 0xf0;
            }
LAB_14e637c19:
            if (*(int *)(pFVar21 + 0x34) == 0) {
              iVar15 = *(int *)(pFVar21 + 8) + -1;
            }
            else {
              iVar15 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                                 ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar21 + 0x10),true,0,
                                  *(int *)(pFVar21 + 0x28));
            }
            if (iVar15 == -1) {
              lVar23 = 0;
            }
            else {
              lVar23 = (longlong)iVar15 * 0xa0 + *(longlong *)&pFVar21->field_0x0;
            }
            local_6a8.M[0][0] = *(double *)(lVar23 + 0x10);
            local_6a8.M[0][1] = *(double *)(lVar23 + 0x18);
            local_6a8.M[0][2] = *(double *)(lVar23 + 0x20);
            local_6a8.M[0][3] = *(double *)(lVar23 + 0x28);
            local_6a8.M[1][0] = *(double *)(lVar23 + 0x30);
            local_6a8.M[1][1] = *(double *)(lVar23 + 0x38);
            local_6a8.M[1][2] = *(double *)(lVar23 + 0x40);
            local_6a8.M[1][3] = *(double *)(lVar23 + 0x48);
            local_6a8.M[2][0] = *(double *)(lVar23 + 0x50);
            local_6a8.M[2][1] = *(double *)(lVar23 + 0x58);
            local_6a8.M[2][2] = *(double *)(lVar23 + 0x60);
            local_6a8.M[2][3] = *(double *)(lVar23 + 0x68);
            local_6a8.M[3][0]._0_4_ = *(undefined4 *)(lVar23 + 0x70);
            local_6a8.M[3][0]._4_4_ = *(undefined4 *)(lVar23 + 0x74);
            local_6a8.M[3][1]._0_4_ = *(undefined4 *)(lVar23 + 0x78);
            local_6a8.M[3][1]._4_4_ = *(undefined4 *)(lVar23 + 0x7c);
            local_6a8.M[3][2]._0_4_ = *(undefined4 *)(lVar23 + 0x80);
            local_6a8.M[3][2]._4_4_ = *(undefined4 *)(lVar23 + 0x84);
            local_6a8.M[3][3]._0_4_ = *(undefined4 *)(lVar23 + 0x88);
            local_6a8.M[3][3]._4_4_ = *(undefined4 *)(lVar23 + 0x8c);
LAB_14e637cdd:
            local_228[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_228[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_208[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
            local_208[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
            local_1e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
            local_1e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
            local_218[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_218[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_408.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_408.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_408.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_1f8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
            local_1f8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
            local_1d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
            local_1d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
            local_408.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_408.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_408.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_408.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_408.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_408.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_408.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_408.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_408.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_408.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_408.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_408.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_408.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_408.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_408.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::SetFromMatrix(&local_408,&local_6a8);
            uVar29 = local_408.Rotation.XY.m128d_f64[1]._0_4_ ^ uVar32;
            uVar30 = local_408.Rotation.XY.m128d_f64[1]._4_4_ ^ uVar33;
            local_440 = local_408.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_43c = local_408.Translation.ZW.m128d_f64[0]._4_4_;
            local_408.Rotation.XY.m128d_f64[0]._4_4_ =
                 local_408.Rotation.XY.m128d_f64[0]._4_4_ ^ uVar33;
            local_408.Rotation.XY.m128d_f64[0]._0_4_ =
                 local_408.Rotation.XY.m128d_f64[0]._0_4_ ^ uVar32;
            local_408.Rotation.XY.m128d_f64[1]._0_4_ =
                 local_408.Rotation.ZW.m128d_f64[0]._0_4_ ^ uVar32;
            local_408.Rotation.XY.m128d_f64[1]._4_4_ =
                 local_408.Rotation.ZW.m128d_f64[0]._4_4_ ^ uVar33;
            local_428 = local_408.Translation.XY.m128d_f64[1];
            local_450 = local_408.Translation.XY.m128d_f64[0]._0_4_;
            uStack_44c = local_408.Translation.XY.m128d_f64[0]._4_4_;
            dStack_448 = local_408.Translation.XY.m128d_f64[1];
            local_408.Rotation.ZW.m128d_f64[0]._4_4_ = uVar30;
            local_408.Rotation.ZW.m128d_f64[0]._0_4_ = uVar29;
            local_438 = local_408.Translation.XY.m128d_f64[0]._0_4_;
            uStack_434 = local_408.Translation.XY.m128d_f64[0]._4_4_;
            uStack_430 = local_408.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_42c = local_408.Translation.ZW.m128d_f64[0]._4_4_;
            local_408.Translation.XY.m128d_f64[1]._0_4_ =
                 local_408.Translation.ZW.m128d_f64[0]._0_4_;
            local_408.Translation.XY.m128d_f64[1]._4_4_ =
                 local_408.Translation.ZW.m128d_f64[0]._4_4_;
            local_408.Translation.ZW.m128d_f64[1] = 0.0;
            local_408.Translation.ZW.m128d_f64[0] = local_428;
            local_518 = local_408.Scale3D.XY.m128d_f64[1];
            local_410 = local_408.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_40c = local_408.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_420 = local_408.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_41c = local_408.Scale3D.XY.m128d_f64[0]._4_4_;
            dStack_418 = local_408.Scale3D.XY.m128d_f64[1];
            local_528 = local_408.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_524 = local_408.Scale3D.XY.m128d_f64[0]._4_4_;
            uStack_520 = local_408.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_51c = local_408.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_408.Scale3D.XY.m128d_f64[1]._0_4_ = local_408.Scale3D.ZW.m128d_f64[0]._0_4_;
            local_408.Scale3D.XY.m128d_f64[1]._4_4_ = local_408.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_408.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_408.Scale3D.ZW.m128d_f64[0] = local_518;
            pTVar16 = TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                      ::FindChecked((TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
                                     *)(pFVar22 + lVar28 + 0xf0),uVar25);
            dVar1 = pTVar16->M[0][1];
            dVar2 = pTVar16->M[0][2];
            dVar3 = pTVar16->M[0][0];
            uVar29 = SUB84(dVar3,0) & uVar10;
            uVar30 = (uint)((ulonglong)dVar3 >> 0x20) & uVar11;
            if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                (uVar29 = SUB84(dVar1,0) & uVar10,
                uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                dVar9 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar9
                )) || (uVar29 = SUB84(dVar2,0) & uVar10,
                      uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                      dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                      (double)CONCAT44(uVar30,uVar29) != dVar9)) {
LAB_14e637f71:
              FMath::MatrixInverse(&local_168,pTVar16);
              local_628.M[0][0] = local_168.M[0][0];
              local_628.M[0][1] = local_168.M[0][1];
              local_628.M[0][2] = local_168.M[0][2];
              local_628.M[0][3] = local_168.M[0][3];
              local_628.M[1][0] = local_168.M[1][0];
              local_628.M[1][1] = local_168.M[1][1];
              local_628.M[1][2] = local_168.M[1][2];
              local_628.M[1][3] = local_168.M[1][3];
              local_628.M[2][0] = local_168.M[2][0];
              local_628.M[2][1] = local_168.M[2][1];
              local_628.M[2][2] = local_168.M[2][2];
              local_628.M[2][3] = local_168.M[2][3];
              local_628.M[3][0]._0_4_ = local_168.M[3][0]._0_4_;
              local_628.M[3][0]._4_4_ = local_168.M[3][0]._4_4_;
              local_628.M[3][1]._0_4_ = local_168.M[3][1]._0_4_;
              local_628.M[3][1]._4_4_ = local_168.M[3][1]._4_4_;
              local_628.M[3][2]._0_4_ = local_168.M[3][2]._0_4_;
              local_628.M[3][2]._4_4_ = local_168.M[3][2]._4_4_;
              local_628.M[3][3]._0_4_ = local_168.M[3][3]._0_4_;
              local_628.M[3][3]._4_4_ = local_168.M[3][3]._4_4_;
            }
            else {
              dVar1 = pTVar16->M[1][0];
              dVar2 = pTVar16->M[1][1];
              uVar29 = SUB84(dVar1,0) & uVar10;
              uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
              dVar1 = pTVar16->M[1][2];
              if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                    (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                  (uVar29 = SUB84(dVar2,0) & uVar10,
                  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                  dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9)) ||
                 (uVar29 = SUB84(dVar1,0) & uVar10,
                 uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                 dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                 (double)CONCAT44(uVar30,uVar29) != dVar9)) goto LAB_14e637f71;
              dVar1 = pTVar16->M[2][0];
              dVar2 = pTVar16->M[2][1];
              uVar29 = SUB84(dVar1,0) & uVar10;
              uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11;
              dVar1 = pTVar16->M[2][2];
              if (((dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                    (double)CONCAT44(uVar30,uVar29) != dVar9) ||
                  (uVar29 = SUB84(dVar2,0) & uVar10,
                  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) & uVar11,
                  dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                  (double)CONCAT44(uVar30,uVar29) != dVar9)) ||
                 (uVar29 = SUB84(dVar1,0) & uVar10,
                 uVar30 = (uint)((ulonglong)dVar1 >> 0x20) & uVar11,
                 dVar9 <= (double)CONCAT44(uVar30,uVar29) &&
                 (double)CONCAT44(uVar30,uVar29) != dVar9)) goto LAB_14e637f71;
              local_628.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
              local_628.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
              local_628.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
              local_628.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
              local_628.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
              local_628.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
              local_628.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
              local_628.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
              local_628.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
              local_628.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
              local_628.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
              local_628.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
              local_628.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
              local_628.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
              local_628.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
              local_628.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
              local_628.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
              local_628.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
              local_628.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
              local_628.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
            }
            local_3a8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3a8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3a8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3a8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3a8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3a8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3a8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3a8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3a8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3a8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3a8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3a8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3a8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_3a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_3a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_3a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::SetFromMatrix(&local_3a8,&local_628);
            uVar29 = *(uint *)(pFVar22 + lVar28 + 0xd0);
            uVar30 = local_3a8.Rotation.XY.m128d_f64[1]._0_4_ ^ uVar32;
            uVar31 = local_3a8.Rotation.XY.m128d_f64[1]._4_4_ ^ uVar33;
            local_500 = local_3a8.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_4fc = local_3a8.Translation.ZW.m128d_f64[0]._4_4_;
            local_3a8.Rotation.XY.m128d_f64[0]._4_4_ =
                 local_3a8.Rotation.XY.m128d_f64[0]._4_4_ ^ uVar33;
            local_3a8.Rotation.XY.m128d_f64[0]._0_4_ =
                 local_3a8.Rotation.XY.m128d_f64[0]._0_4_ ^ uVar32;
            local_3a8.Rotation.XY.m128d_f64[1]._0_4_ =
                 local_3a8.Rotation.ZW.m128d_f64[0]._0_4_ ^ uVar32;
            local_3a8.Rotation.XY.m128d_f64[1]._4_4_ =
                 local_3a8.Rotation.ZW.m128d_f64[0]._4_4_ ^ uVar33;
            local_4e8 = local_3a8.Translation.XY.m128d_f64[1];
            local_510 = local_3a8.Translation.XY.m128d_f64[0]._0_4_;
            uStack_50c = local_3a8.Translation.XY.m128d_f64[0]._4_4_;
            dStack_508 = local_3a8.Translation.XY.m128d_f64[1];
            local_3a8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar31;
            local_3a8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar30;
            local_4f8 = local_3a8.Translation.XY.m128d_f64[0]._0_4_;
            uStack_4f4 = local_3a8.Translation.XY.m128d_f64[0]._4_4_;
            uStack_4f0 = local_3a8.Translation.ZW.m128d_f64[0]._0_4_;
            uStack_4ec = local_3a8.Translation.ZW.m128d_f64[0]._4_4_;
            local_3a8.Translation.XY.m128d_f64[1]._0_4_ =
                 local_3a8.Translation.ZW.m128d_f64[0]._0_4_;
            local_3a8.Translation.XY.m128d_f64[1]._4_4_ =
                 local_3a8.Translation.ZW.m128d_f64[0]._4_4_;
            local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
            local_3a8.Translation.ZW.m128d_f64[0] = local_4e8;
            local_4b8 = local_3a8.Scale3D.XY.m128d_f64[1];
            local_4d0 = local_3a8.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_4cc = local_3a8.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_4e0 = local_3a8.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_4dc = local_3a8.Scale3D.XY.m128d_f64[0]._4_4_;
            dStack_4d8 = local_3a8.Scale3D.XY.m128d_f64[1];
            local_4c8 = local_3a8.Scale3D.XY.m128d_f64[0]._0_4_;
            uStack_4c4 = local_3a8.Scale3D.XY.m128d_f64[0]._4_4_;
            uStack_4c0 = local_3a8.Scale3D.ZW.m128d_f64[0]._0_4_;
            uStack_4bc = local_3a8.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_3a8.Scale3D.XY.m128d_f64[1]._0_4_ = local_3a8.Scale3D.ZW.m128d_f64[0]._0_4_;
            local_3a8.Scale3D.XY.m128d_f64[1]._4_4_ = local_3a8.Scale3D.ZW.m128d_f64[0]._4_4_;
            local_3a8.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_3a8.Scale3D.ZW.m128d_f64[0] = local_4b8;
            if (((*(uint *)(pFVar22 + lVar28 + 0xd4) != uVar29) && (-1 < (int)uVar29)) &&
               ((int)uVar29 < (this->Asset->Nodes).ArrayNum)) {
              local_708.Data = (FScriptContainerElement *)0x0;
              local_700 = 0;
              for (; (-1 < (int)uVar29 &&
                     (pFVar20 = this->Asset, (int)uVar29 < (pFVar20->Nodes).ArrayNum));
                  uVar29 = *(uint *)((pFVar20->Nodes).AllocatorInstance.Data +
                                    (longlong)(int)uVar29 * 0x260 + 0xd0)) {
                iVar15 = (pFVar20->Nodes).ArrayNum;
                uVar30 = 0;
                if ((int)uVar29 < iVar15) {
                  uVar30 = ~uVar29 >> 0x1f;
                }
                if (uVar30 == 0) {
                  local_738 = (FScriptContainerElement *)(longlong)(int)uVar29;
                  local_730 = (FScriptContainerElement *)(longlong)iVar15;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                lVar28 = (longlong)(int)uVar29 * 0x260;
                if ((pFVar20->Nodes).AllocatorInstance.Data[lVar28 + 400] ==
                    (FScriptContainerElement)0x0) break;
                pFVar20 = this->Asset;
                iVar15 = (pFVar20->Nodes).ArrayNum;
                uVar30 = 0;
                if ((int)uVar29 < iVar15) {
                  uVar30 = ~uVar29 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (local_738 = (FScriptContainerElement *)(longlong)(int)uVar29,
                   local_730 = (FScriptContainerElement *)(longlong)iVar15,
                   bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar22 = (pFVar20->Nodes).AllocatorInstance.Data + lVar28 + 0x10;
                if (local_708.Data <= pFVar22) {
                  if (pFVar22 < local_708.Data + (longlong)local_700._4_4_ * 0x60) {
                    local_720 = (longlong)(int)local_700;
                    local_718 = 0x60;
                    local_730 = local_708.Data;
                    local_738 = pFVar22;
                    local_728 = (longlong)local_700._4_4_;
                    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar14) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                }
                if ((int)local_700 == local_700._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1060,&local_708,(int *)((longlong)&local_700 + 4));
                  local_700 = CONCAT44(local_700._4_4_,iVar15);
                }
                lVar28 = (longlong)(int)local_700;
                local_700 = CONCAT44(local_700._4_4_,(int)local_700 + 1);
                uVar8 = *(undefined8 *)(pFVar22 + 8);
                lVar28 = lVar28 * 0x60;
                *(undefined8 *)(local_708.Data + lVar28) = *(undefined8 *)pFVar22;
                *(undefined8 *)(local_708.Data + lVar28 + 8) = uVar8;
                uVar8 = *(undefined8 *)(pFVar22 + 0x18);
                *(undefined8 *)(local_708.Data + lVar28 + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
                *(undefined8 *)(local_708.Data + lVar28 + 0x10 + 8) = uVar8;
                uVar8 = *(undefined8 *)(pFVar22 + 0x28);
                *(undefined8 *)(local_708.Data + lVar28 + 0x20) = *(undefined8 *)(pFVar22 + 0x20);
                *(undefined8 *)(local_708.Data + lVar28 + 0x20 + 8) = uVar8;
                uVar8 = *(undefined8 *)(pFVar22 + 0x38);
                *(undefined8 *)(local_708.Data + lVar28 + 0x30) = *(undefined8 *)(pFVar22 + 0x30);
                *(undefined8 *)(local_708.Data + lVar28 + 0x30 + 8) = uVar8;
                uVar8 = *(undefined8 *)(pFVar22 + 0x48);
                *(undefined8 *)(local_708.Data + lVar28 + 0x40) = *(undefined8 *)(pFVar22 + 0x40);
                *(undefined8 *)(local_708.Data + lVar28 + 0x40 + 8) = uVar8;
                uVar8 = *(undefined8 *)(pFVar22 + 0x58);
                *(undefined8 *)(local_708.Data + lVar28 + 0x50) = *(undefined8 *)(pFVar22 + 0x50);
                *(undefined8 *)(local_708.Data + lVar28 + 0x50 + 8) = uVar8;
                pFVar20 = this->Asset;
                iVar15 = (pFVar20->Nodes).ArrayNum;
                uVar30 = 0;
                if ((int)uVar29 < iVar15) {
                  uVar30 = ~uVar29 >> 0x1f;
                }
                if (uVar30 == 0) {
                  local_738 = (FScriptContainerElement *)(longlong)(int)uVar29;
                  local_730 = (FScriptContainerElement *)(longlong)iVar15;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              uVar29 = (int)local_700 - 1;
              if (-1 < (int)uVar29) {
                pFVar22 = (FScriptContainerElement *)(longlong)(int)uVar29;
                lVar28 = (longlong)pFVar22 * 0x60;
                do {
                  uVar30 = 0;
                  if ((int)uVar29 < (int)local_700) {
                    uVar30 = ~uVar29 >> 0x1f;
                  }
                  iVar15 = (int)local_700;
                  if (uVar30 == 0) {
                    iVar15 = 0x506109c0;
                    local_738 = pFVar22;
                    local_730 = (FScriptContainerElement *)(longlong)(int)local_700;
                    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    uVar30 = (uint)CONCAT71(extraout_var,bVar14);
                    if (bVar14) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  pTVar17 = (TTransform<double> *)(local_708.Data + lVar28);
                  lVar23 = -(ulonglong)
                            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                            (double)CONCAT44(uVar13 & *(uint *)((longlong)
                                                                (pTVar17->Scale3D).ZW.m128d_f64 +
                                                               0xc),
                                             uVar12 & *(uint *)((pTVar17->Scale3D).ZW.m128d_f64 + 1)
                                            ));
                  auVar7._8_4_ = (int)lVar23;
                  auVar7._0_8_ = -(ulonglong)
                                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                                  (double)CONCAT44(uVar11 & *(uint *)((longlong)
                                                                      (pTVar17->Scale3D).ZW.
                                                                      m128d_f64 + 4),
                                                   uVar10 & *(uint *)(pTVar17->Scale3D).ZW.m128d_f64
                                                  ));
                  auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
                  uVar31 = movmskpd(iVar15,auVar7);
                  lVar23 = -(ulonglong)
                            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                            (double)CONCAT44(uVar13 & *(uint *)((longlong)
                                                                (pTVar17->Scale3D).XY.m128d_f64 +
                                                               0xc),
                                             uVar12 & *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1)
                                            ));
                  auVar6._8_4_ = (int)lVar23;
                  auVar6._0_8_ = -(ulonglong)
                                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                                  (double)CONCAT44(uVar11 & *(uint *)((longlong)
                                                                      (pTVar17->Scale3D).XY.
                                                                      m128d_f64 + 4),
                                                   uVar10 & *(uint *)(pTVar17->Scale3D).XY.m128d_f64
                                                  ));
                  auVar6._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
                  iVar15 = movmskpd(uVar30,auVar6);
                  if ((uVar31 & 0x3fffffff) == 0 && iVar15 == 0) {
                    local_1c8.Rotation.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                    local_1c8.Rotation.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                    local_1c8.Translation.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                    local_1c8.Translation.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                    local_1c8.Scale3D.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                    local_1c8.Scale3D.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                  }
                  else {
                    UE::Math::TTransform<double>::InverseFast(pTVar17,&local_1c8);
                  }
                  local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_2e8.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_2e8.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_2e8.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_2e8.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_2e8.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_2e8.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply(&local_2e8,&local_408,&local_1c8);
                  pFVar22 = pFVar22 + -1;
                  lVar28 = lVar28 + -0x60;
                  uVar29 = uVar29 - 1;
                  local_408.Rotation.XY.m128d_f64[0] = local_2e8.Rotation.XY.m128d_f64[0];
                  local_408.Rotation.XY.m128d_f64[1] = local_2e8.Rotation.XY.m128d_f64[1];
                  local_408.Rotation.ZW.m128d_f64[0] = local_2e8.Rotation.ZW.m128d_f64[0];
                  local_408.Rotation.ZW.m128d_f64[1] = local_2e8.Rotation.ZW.m128d_f64[1];
                  local_408.Translation.XY.m128d_f64[0] = local_2e8.Translation.XY.m128d_f64[0];
                  local_408.Translation.XY.m128d_f64[1] = local_2e8.Translation.XY.m128d_f64[1];
                  local_408.Translation.ZW.m128d_f64[0] = local_2e8.Translation.ZW.m128d_f64[0];
                  local_408.Translation.ZW.m128d_f64[1] = local_2e8.Translation.ZW.m128d_f64[1];
                  local_408.Scale3D.XY.m128d_f64[0] = local_2e8.Scale3D.XY.m128d_f64[0];
                  local_408.Scale3D.XY.m128d_f64[1] = local_2e8.Scale3D.XY.m128d_f64[1];
                  local_408.Scale3D.ZW.m128d_f64[0] = local_2e8.Scale3D.ZW.m128d_f64[0];
                  local_408.Scale3D.ZW.m128d_f64[1] = local_2e8.Scale3D.ZW.m128d_f64[1];
                } while (-1 < (int)uVar29);
              }
              pFVar22 = local_6e8;
              lVar28 = local_6f0;
              if (local_708.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_708.Data);
                pFVar22 = local_6e8;
                lVar28 = local_6f0;
              }
            }
            local_288.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_288.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_288.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_288.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_288.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_288.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_288.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_288.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_288.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_288.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_288,&local_3a8,&local_408);
            local_6c8 = &local_6f8;
            ppuVar24 = &local_6c8;
            local_228[0] = local_288.Rotation.XY.m128d_f64[0];
            local_228[1] = local_288.Rotation.XY.m128d_f64[1];
            pTVar19 = (TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&> *)local_6e0;
            local_218[0] = local_288.Rotation.ZW.m128d_f64[0];
            local_218[1] = local_288.Rotation.ZW.m128d_f64[1];
            local_208[0] = local_288.Translation.XY.m128d_f64[0];
            local_208[1] = local_288.Translation.XY.m128d_f64[1];
            local_1f8[0] = local_288.Translation.ZW.m128d_f64[0];
            local_1f8[1] = local_288.Translation.ZW.m128d_f64[1];
            local_6c0 = local_228;
            local_1e8[0] = local_288.Scale3D.XY.m128d_f64[0];
            local_1e8[1] = local_288.Scale3D.XY.m128d_f64[1];
            local_1d8[0] = local_288.Scale3D.ZW.m128d_f64[0];
            local_1d8[1] = local_288.Scale3D.ZW.m128d_f64[1];
            local_6f8 = uVar25;
          }
          TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,UE::Math::TTransform<double>_const_&>_>
                    ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                      *)(pFVar22 + lVar28 + 0x140),pTVar19,(bool *)ppuVar24);
          uVar27 = uVar27 + 1;
        } while (uVar27 < (ulonglong)
                          (longlong)*(int *)(local_6d0 + (longlong)&(local_6d8->Translation).XY));
      }
      pFVar20 = this->Asset;
      uVar26 = uVar26 + 1;
    } while (uVar26 < (ulonglong)(longlong)(pFVar20->Skins).ArrayNum);
  }
  return;
}

// ImportAsset @ 14e642610

void __thiscall
GLTF::FFileReader::ImportAsset(FFileReader *this,FString *param_1,bool param_2,FAsset *param_3)

{
  TSet<GLTF::EExtension,DefaultKeyFuncs<GLTF::EExtension,0>,FDefaultSetAllocator> *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FExtensionsHandler *pFVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  FAsset *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong *plVar17;
  FJsonObject *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  int *piVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  FAsset *pFVar26;
  bool local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394;
  undefined1 local_393;
  undefined1 local_392;
  undefined1 local_391;
  undefined1 local_390;
  undefined1 local_38f;
  undefined1 local_38e;
  undefined1 local_38d;
  undefined1 local_38c;
  undefined1 local_38b;
  undefined1 local_38a;
  undefined1 local_389;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_378;
  FString local_370;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  FAsset *local_348;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_340;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_338;
  undefined4 local_330;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  <lambda_1> local_88;
  <lambda_10> local_70;
  
  ::FString::FString(&local_318,L"buffers");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = ArraySize((this->JsonRoot).Object,&local_318);
  this->BufferCount = uVar8;
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_308,L"bufferViews");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = ArraySize((this->JsonRoot).Object,&local_308);
  this->BufferViewCount = uVar8;
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2f8,L"accessors");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = ArraySize((this->JsonRoot).Object,&local_2f8);
  local_360 = uVar8;
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2e8,L"meshes");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = ArraySize((this->JsonRoot).Object,&local_2e8);
  local_35c = uVar9;
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2d8,L"scenes");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = ArraySize((this->JsonRoot).Object,&local_2d8);
  local_354 = uVar10;
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2c8,L"nodes");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = ArraySize((this->JsonRoot).Object,&local_2c8);
  local_358 = uVar11;
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2b8,L"cameras");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = ArraySize((this->JsonRoot).Object,&local_2b8);
  local_350 = uVar12;
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2a8,L"skins");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = ArraySize((this->JsonRoot).Object,&local_2a8);
  local_34c = uVar13;
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_298,L"animations");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_388 = ArraySize((this->JsonRoot).Object,&local_298);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_288,L"images");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = ArraySize((this->JsonRoot).Object,&local_288);
  this->ImageCount = uVar14;
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_278,L"samplers");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_384 = ArraySize((this->JsonRoot).Object,&local_278);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_268,L"textures");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_380 = ArraySize((this->JsonRoot).Object,&local_268);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_258,L"materials");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_37c = ArraySize((this->JsonRoot).Object,&local_258);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_248,L"extensionsRequired");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ArraySize((this->JsonRoot).Object,&local_248);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  uVar14 = this->BufferCount;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar2 = &(param_3->Buffers).ArrayMax;
  (param_3->Buffers).ArrayNum = 0;
  if (*piVar2 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&(param_3->Buffers).AllocatorInstance,0,piVar2);
  }
  uVar14 = this->BufferViewCount;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar2 = &(param_3->BufferViews).ArrayMax;
  (param_3->BufferViews).ArrayNum = 0;
  if (*piVar2 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar14,&(param_3->BufferViews).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar2 = &(param_3->Accessors).ArrayMax;
  (param_3->Accessors).ArrayNum = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,uVar8,&(param_3->Accessors).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<GLTF::FMesh,int>
            ((FMesh *)(param_3->Meshes).AllocatorInstance.Data,(param_3->Meshes).ArrayNum);
  piVar2 = &(param_3->Meshes).ArrayMax;
  (param_3->Meshes).ArrayNum = 0;
  if (*piVar2 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar9,&(param_3->Meshes).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<GLTF::FScene,int>
            ((FScene *)(param_3->Scenes).AllocatorInstance.Data,(param_3->Scenes).ArrayNum);
  piVar2 = &(param_3->Scenes).ArrayMax;
  (param_3->Scenes).ArrayNum = 0;
  if (*piVar2 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar10,&(param_3->Scenes).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<GLTF::FNode,int>
            ((FNode *)(param_3->Nodes).AllocatorInstance.Data,(param_3->Nodes).ArrayNum);
  piVar2 = &(param_3->Nodes).ArrayMax;
  (param_3->Nodes).ArrayNum = 0;
  if (*piVar2 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x260,0x10,uVar11,&(param_3->Nodes).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  DestructItems<GLTF::FCamera,int>
            ((FCamera *)(param_3->Cameras).AllocatorInstance.Data,(param_3->Cameras).ArrayNum);
  piVar2 = &(param_3->Cameras).ArrayMax;
  (param_3->Cameras).ArrayNum = 0;
  if (*piVar2 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,uVar12,&(param_3->Cameras).AllocatorInstance,0,piVar2);
  }
  DestructItems<GLTF::FLight,int>
            ((FLight *)(param_3->Lights).AllocatorInstance.Data,(param_3->Lights).ArrayNum);
  piVar2 = &(param_3->Lights).ArrayMax;
  (param_3->Lights).ArrayNum = 0;
  if (*piVar2 != 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,10,&(param_3->Lights).AllocatorInstance,0,piVar2);
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  DestructItems<GLTF::FSkinInfo,int>
            ((FSkinInfo *)(param_3->Skins).AllocatorInstance.Data,(param_3->Skins).ArrayNum);
  piVar2 = &(param_3->Skins).ArrayMax;
  (param_3->Skins).ArrayNum = 0;
  if (*piVar2 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,uVar13,&(param_3->Skins).AllocatorInstance,0,piVar2);
  }
  uVar8 = local_388;
  if ((int)local_388 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_388);
  }
  DestructItems<GLTF::FAnimation,int>
            ((FAnimation *)(param_3->Animations).AllocatorInstance.Data,
             (param_3->Animations).ArrayNum);
  piVar2 = &(param_3->Animations).ArrayMax;
  (param_3->Animations).ArrayNum = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,uVar8,&(param_3->Animations).AllocatorInstance,0,piVar2);
  }
  uVar8 = this->ImageCount;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  DestructItems<GLTF::FImage,int>
            ((FImage *)(param_3->Images).AllocatorInstance.Data,(param_3->Images).ArrayNum);
  piVar2 = &(param_3->Images).ArrayMax;
  (param_3->Images).ArrayNum = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar8,&(param_3->Images).AllocatorInstance,0,piVar2);
  }
  if ((int)local_384 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_384);
  }
  piVar2 = &(param_3->Samplers).ArrayMax;
  (param_3->Samplers).ArrayNum = 0;
  if (*piVar2 != local_384) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_384,&(param_3->Samplers).AllocatorInstance,0,piVar2);
  }
  uVar8 = local_380;
  if ((int)local_380 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_380);
  }
  DestructItems<GLTF::FTexture,int>
            ((FTexture *)(param_3->Textures).AllocatorInstance.Data,(param_3->Textures).ArrayNum);
  piVar2 = &(param_3->Textures).ArrayMax;
  (param_3->Textures).ArrayNum = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,uVar8,&(param_3->Textures).AllocatorInstance,0,piVar2);
  }
  uVar8 = local_37c;
  if ((int)local_37c < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_37c);
  }
  DestructItems<GLTF::FMaterial,int>
            ((FMaterial *)(param_3->Materials).AllocatorInstance.Data,(param_3->Materials).ArrayNum)
  ;
  piVar2 = &(param_3->Materials).ArrayMax;
  (param_3->Materials).ArrayNum = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x370,0x10,uVar8,&(param_3->Materials).AllocatorInstance,0,piVar2);
  }
  this_00 = &param_3->ProcessedExtensions;
  for (lVar4 = 0x3f; 0x23UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  iVar23 = 1 << ((byte)lVar4 & 0x1f);
  local_330 = (undefined4)lVar4;
  iVar15 = (param_3->ProcessedExtensions).HashSize;
  if ((iVar15 < iVar23) || (iVar23 < iVar15)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  iVar15 = *(int *)&(param_3->ProcessedExtensions).Elements.field_0xc;
  *(undefined4 *)&(param_3->ProcessedExtensions).Elements.field_0x8 = 0;
  if (iVar15 != 0x15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x15,(ForAnyElementType *)this_00,0,
               (int *)&(param_3->ProcessedExtensions).Elements.field_0xc);
  }
  *(undefined4 *)&(param_3->ProcessedExtensions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_3->ProcessedExtensions).Elements.field_0x34 = 0;
  iVar15 = *(int *)&(param_3->ProcessedExtensions).Elements.field_0x2c;
  *(undefined4 *)&(param_3->ProcessedExtensions).Elements.field_0x28 = 0;
  if ((iVar15 < 0x20) || (0x80 < iVar15)) {
    *(undefined4 *)&(param_3->ProcessedExtensions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(param_3->ProcessedExtensions).Elements.field_0x10,0);
  }
  if (bVar7) {
    (param_3->ProcessedExtensions).HashSize = iVar23;
    TSet<enum_GLTF::EExtension,DefaultKeyFuncs<enum_GLTF::EExtension,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  DestructItems<FString,int>
            ((FString *)(param_3->ExtensionsUsed).AllocatorInstance.Data,
             (param_3->ExtensionsUsed).ArrayNum);
  piVar2 = &(param_3->ExtensionsUsed).ArrayMax;
  (param_3->ExtensionsUsed).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(param_3->ExtensionsUsed).AllocatorInstance,0,piVar2);
  }
  pTVar1 = &param_3->ExtensionsRequired;
  DestructItems<FString,int>
            ((FString *)(pTVar1->AllocatorInstance).Data,(param_3->ExtensionsRequired).ArrayNum);
  piVar2 = &(param_3->ExtensionsRequired).ArrayMax;
  (param_3->ExtensionsRequired).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  AllocateExtraData(this,param_1,param_2,&param_3->ExtraBinData);
  pFVar3 = (this->ExtensionsHandler).Ptr;
  this->Asset = param_3;
  local_398 = false;
  pFVar3->Asset = param_3;
  ::FString::FString(&local_328,L"KHR_mesh_quantization");
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238 = L"extensionsRequired";
  uStack_230 = 0x12;
  local_168._12_4_ = uStack_22c;
  local_168.Size = 0x12;
  local_168.DataPtr = L"extensionsRequired";
  bVar7 = FJsonObject::TryGetArrayField((this->JsonRoot).Object,&local_168,&local_340);
  if (bVar7) {
    local_378 = local_340;
    if (local_340 == (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8658679761230363528>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                         ,0x478,"ExtensionsRequired");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      iVar15 = (param_3->ExtensionsRequired).ArrayNum;
      uVar8 = local_340->ArrayNum + iVar15;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar8,&pTVar1->AllocatorInstance,iVar15,piVar2);
        local_378 = local_340;
      }
      pTVar16 = local_378;
      uVar20 = (ulonglong)local_378->ArrayNum;
      pFVar26 = (FAsset *)(local_378->AllocatorInstance).Data;
      local_348 = (FAsset *)(&pFVar26->Name + uVar20);
      local_378 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_378._4_4_,local_378->ArrayNum);
      while( true ) {
        pFVar6 = local_348;
        if (pTVar16->ArrayNum != (int)uVar20) {
          local_397 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_397);
        }
        if (pFVar26 == pFVar6) break;
        if (((pFVar26->Name).Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FJsonValue::AsString((FJsonValue *)(pFVar26->Name).Data.AllocatorInstance.Data,&local_370);
        pFVar21 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_370) &&
            ((FScriptContainerElement *)&local_370 < pFVar21 + (longlong)*piVar2 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = (param_3->ExtensionsRequired).ArrayNum;
        if (iVar15 == *piVar2) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        _Src.Data = local_370.Data.AllocatorInstance.Data;
        pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
        (param_3->ExtensionsRequired).ArrayNum = iVar15 + 1;
        *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
        iVar15 = local_370.Data.ArrayNum;
        *(int *)(pFVar21 + 8) = iVar15;
        if (iVar15 == 0) {
          *(int *)(pFVar21 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,0,(ForAnyElementType *)pFVar21,iVar15,(int *)(pFVar21 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar21,_Src.Data,(longlong)iVar15 * 2);
        }
        iVar15 = local_370.Data.ArrayNum;
        if (iVar15 == local_328.Data.ArrayNum) {
          if (1 < iVar15) {
            iVar15 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_370.Data.AllocatorInstance.Data,
                                (wchar_t *)local_328.Data.AllocatorInstance.Data);
            bVar7 = iVar15 == 0;
            goto LAB_14e643362;
          }
LAB_14e643369:
          local_398 = true;
        }
        else {
          bVar7 = iVar15 + local_328.Data.ArrayNum == 1;
LAB_14e643362:
          if (bVar7) goto LAB_14e643369;
        }
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
        pFVar26 = (FAsset *)&pFVar26->Buffers;
        uVar20 = (ulonglong)local_378 & 0xffffffff;
      }
    }
  }
  local_88.__this = this;
  ::FString::FString(&local_88.InResourcesPath,param_1);
  bVar7 = SetupObjects<_GLTF::FFileReader::ImportAsset_::__l17::<lambda_1>_>
                    (this,this->BufferCount,L"buffers",&local_88);
  if (bVar7) {
    lVar4 = this->_padding_;
    if (this->BufferViewCount != 0) {
      if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_228 = L"bufferViews";
      uStack_220 = 0xb;
      local_158._12_4_ = uStack_21c;
      local_158.Size = 0xb;
      local_158.DataPtr = L"bufferViews";
      pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_158);
      iVar15 = pTVar16->ArrayNum;
      pFVar21 = (pTVar16->AllocatorInstance).Data;
      pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
      while( true ) {
        if (pTVar16->ArrayNum != iVar15) {
          local_396 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_396);
        }
        if (pFVar21 == pFVar25) break;
        if ((*(longlong *)pFVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
        if ((*plVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SetupBufferView(this,(FJsonObject *)*plVar17);
        pFVar21 = pFVar21 + 0x10;
      }
    }
    bVar7 = CheckForErrors(this,(int)lVar4);
    if (!bVar7) {
      lVar4 = this->_padding_;
      if (local_360 != 0) {
        if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_218 = L"accessors";
        uStack_210 = 9;
        local_148._12_4_ = uStack_20c;
        local_148.Size = 9;
        local_148.DataPtr = L"accessors";
        pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_148);
        iVar15 = pTVar16->ArrayNum;
        pFVar21 = (pTVar16->AllocatorInstance).Data;
        pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
        while( true ) {
          if (pTVar16->ArrayNum != iVar15) {
            local_395 = 0;
            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_395);
          }
          if (pFVar21 == pFVar25) break;
          if ((*(longlong *)pFVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
          if ((*plVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          SetupAccessor(this,(FJsonObject *)*plVar17);
          pFVar21 = pFVar21 + 0x10;
        }
      }
      bVar7 = CheckForErrors(this,(int)lVar4);
      if (!bVar7) {
        lVar4 = this->_padding_;
        if (local_35c != 0) {
          if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_208 = L"meshes";
          uStack_200 = 6;
          local_138._12_4_ = uStack_1fc;
          local_138.Size = 6;
          local_138.DataPtr = L"meshes";
          pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_138);
          iVar15 = pTVar16->ArrayNum;
          pFVar21 = (pTVar16->AllocatorInstance).Data;
          pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
          while( true ) {
            if (pTVar16->ArrayNum != iVar15) {
              local_394 = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_394);
            }
            if (pFVar21 == pFVar25) break;
            if ((*(longlong *)pFVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
            if ((*plVar17 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            SetupMesh(this,(FJsonObject *)*plVar17,local_398);
            pFVar21 = pFVar21 + 0x10;
          }
        }
        bVar7 = CheckForErrors(this,(int)lVar4);
        if (!bVar7) {
          lVar4 = this->_padding_;
          if (local_358 != 0) {
            if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_1f8 = L"nodes";
            uStack_1f0 = 5;
            local_128._12_4_ = uStack_1ec;
            local_128.Size = 5;
            local_128.DataPtr = L"nodes";
            pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_128);
            iVar15 = pTVar16->ArrayNum;
            pFVar21 = (pTVar16->AllocatorInstance).Data;
            pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
            while( true ) {
              if (pTVar16->ArrayNum != iVar15) {
                local_393 = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_393);
              }
              if (pFVar21 == pFVar25) break;
              if ((*(longlong *)pFVar21 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
              if ((*plVar17 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              SetupNode(this,(FJsonObject *)*plVar17);
              pFVar21 = pFVar21 + 0x10;
            }
          }
          bVar7 = CheckForErrors(this,(int)lVar4);
          if (!bVar7) {
            lVar4 = this->_padding_;
            if (local_354 != 0) {
              if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_1e8 = L"scenes";
              uStack_1e0 = 6;
              local_118._12_4_ = uStack_1dc;
              local_118.Size = 6;
              local_118.DataPtr = L"scenes";
              pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_118);
              iVar15 = pTVar16->ArrayNum;
              pFVar21 = (pTVar16->AllocatorInstance).Data;
              pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
              while( true ) {
                if (pTVar16->ArrayNum != iVar15) {
                  local_392 = 0;
                  `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(&local_392);
                }
                if (pFVar21 == pFVar25) break;
                if ((*(longlong *)pFVar21 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                if ((*plVar17 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                SetupScene(this,(FJsonObject *)*plVar17);
                pFVar21 = pFVar21 + 0x10;
              }
            }
            bVar7 = CheckForErrors(this,(int)lVar4);
            if (!bVar7) {
              lVar4 = this->_padding_;
              if (local_350 != 0) {
                if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_1d8 = L"cameras";
                uStack_1d0 = 7;
                local_108._12_4_ = uStack_1cc;
                local_108.Size = 7;
                local_108.DataPtr = L"cameras";
                pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_108);
                iVar15 = pTVar16->ArrayNum;
                pFVar21 = (pTVar16->AllocatorInstance).Data;
                pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                while( true ) {
                  if (pTVar16->ArrayNum != iVar15) {
                    local_391 = 0;
                    `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_391);
                  }
                  if (pFVar21 == pFVar25) break;
                  if ((*(longlong *)pFVar21 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                  if ((*plVar17 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x44d,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  SetupCamera(this,(FJsonObject *)*plVar17);
                  pFVar21 = pFVar21 + 0x10;
                }
              }
              bVar7 = CheckForErrors(this,(int)lVar4);
              if (!bVar7) {
                lVar4 = this->_padding_;
                if (local_34c != 0) {
                  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_1c8 = L"skins";
                  uStack_1c0 = 5;
                  local_f8._12_4_ = uStack_1bc;
                  local_f8.Size = 5;
                  local_f8.DataPtr = L"skins";
                  pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_f8);
                  iVar15 = pTVar16->ArrayNum;
                  pFVar21 = (pTVar16->AllocatorInstance).Data;
                  pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                  while( true ) {
                    if (pTVar16->ArrayNum != iVar15) {
                      local_390 = 0;
                      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::
                      __l2::<lambda_1>::operator()(&local_390);
                    }
                    if (pFVar21 == pFVar25) break;
                    if ((*(longlong *)pFVar21 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                    if ((*plVar17 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x44d,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    SetupSkin(this,(FJsonObject *)*plVar17);
                    pFVar21 = pFVar21 + 0x10;
                  }
                }
                bVar7 = CheckForErrors(this,(int)lVar4);
                if (!bVar7) {
                  SetupUsedSkins(this);
                  SetupNodesType(this);
                  local_348 = this->Asset;
                  uVar8 = (local_348->Scenes).ArrayNum;
                  uVar20 = (ulonglong)(int)uVar8;
                  pFVar25 = (local_348->Scenes).AllocatorInstance.Data;
                  pFVar24 = pFVar25 + uVar20 * 0x80;
                  pFVar21 = pFVar25 + 0x18;
                  while( true ) {
                    if ((local_348->Scenes).ArrayNum != (int)uVar20) {
                      local_38f = 0;
                      `TCheckedPointerIterator<GLTF::FScene,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_38f);
                    }
                    if (pFVar25 == pFVar24) break;
                    piVar22 = *(int **)(pFVar21 + -8);
                    iVar15 = *(int *)pFVar21;
                    piVar2 = piVar22 + iVar15;
                    while( true ) {
                      if (*(int *)pFVar21 != iVar15) {
                        local_38e = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_38e);
                      }
                      if (piVar22 == piVar2) break;
                      BuildParentIndices(this,-1,-1,*piVar22);
                      piVar22 = piVar22 + 1;
                    }
                    pFVar25 = pFVar25 + 0x80;
                    uVar20 = (ulonglong)uVar8;
                    pFVar21 = pFVar21 + 0x80;
                  }
                  FixNodeTypesForIndirectJoints(this);
                  BuildRootJoints(this);
                  GenerateInverseBindPosesPerSkinIndices(this);
                  GenerateLocalBindPosesPerSkinIndices(this);
                  SetLocalBindPosesForJoints(this);
                  lVar4 = this->_padding_;
                  if (local_388 != 0) {
                    if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    local_1b8 = L"animations";
                    uStack_1b0 = 10;
                    local_e8._12_4_ = uStack_1ac;
                    local_e8.Size = 10;
                    local_e8.DataPtr = L"animations";
                    pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_e8);
                    iVar15 = pTVar16->ArrayNum;
                    pFVar21 = (pTVar16->AllocatorInstance).Data;
                    pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                    while( true ) {
                      if (pTVar16->ArrayNum != iVar15) {
                        local_38d = 0;
                        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='
                        ::__l2::<lambda_1>::operator()(&local_38d);
                      }
                      if (pFVar21 == pFVar25) break;
                      if ((*(longlong *)pFVar21 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                      if ((*plVar17 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x44d,L""), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      SetupAnimation(this,(FJsonObject *)*plVar17);
                      pFVar21 = pFVar21 + 0x10;
                    }
                  }
                  bVar7 = CheckForErrors(this,(int)lVar4);
                  if (!bVar7) {
                    local_70.__this = this;
                    ::FString::FString(&local_70.InResourcesPath,param_1);
                    local_70.bInLoadImageData = param_2;
                    bVar7 = SetupObjects<_GLTF::FFileReader::ImportAsset_::__l53::<lambda_10>_>
                                      (this,this->ImageCount,L"images",&local_70);
                    if (bVar7) {
                      lVar4 = this->_padding_;
                      if (local_384 != 0) {
                        if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValid()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                               ,0x458,L""), bVar7)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        local_1a8 = L"samplers";
                        uStack_1a0 = 8;
                        local_d8._12_4_ = uStack_19c;
                        local_d8.Size = 8;
                        local_d8.DataPtr = L"samplers";
                        pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_d8);
                        iVar15 = pTVar16->ArrayNum;
                        pFVar21 = (pTVar16->AllocatorInstance).Data;
                        pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                        while( true ) {
                          if (pTVar16->ArrayNum != iVar15) {
                            local_38c = 0;
                            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::
                            operator!='::__l2::<lambda_1>::operator()(&local_38c);
                          }
                          if (pFVar21 == pFVar25) break;
                          if ((*(longlong *)pFVar21 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValid()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                 ,0x458,L""), bVar7)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                          if ((*plVar17 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValid()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                 ,0x44d,L""), bVar7)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          SetupSampler(this,(FJsonObject *)*plVar17);
                          pFVar21 = pFVar21 + 0x10;
                        }
                      }
                      bVar7 = CheckForErrors(this,(int)lVar4);
                      if (!bVar7) {
                        lVar4 = this->_padding_;
                        if (local_380 != 0) {
                          if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValid()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                 ,0x458,L""), bVar7)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          local_198 = L"textures";
                          uStack_190 = 8;
                          local_c8._12_4_ = uStack_18c;
                          local_c8.Size = 8;
                          local_c8.DataPtr = L"textures";
                          pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_c8);
                          iVar15 = pTVar16->ArrayNum;
                          pFVar21 = (pTVar16->AllocatorInstance).Data;
                          pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                          while( true ) {
                            if (pTVar16->ArrayNum != iVar15) {
                              local_38b = 0;
                              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::
                              operator!='::__l2::<lambda_1>::operator()(&local_38b);
                            }
                            if (pFVar21 == pFVar25) break;
                            if ((*(longlong *)pFVar21 == 0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                            if ((*plVar17 == 0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            SetupTexture(this,(FJsonObject *)*plVar17);
                            pFVar21 = pFVar21 + 0x10;
                          }
                        }
                        bVar7 = CheckForErrors(this,(int)lVar4);
                        if (!bVar7) {
                          lVar4 = this->_padding_;
                          if (local_37c != 0) {
                            if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            local_188 = L"materials";
                            uStack_180 = 9;
                            local_b8._12_4_ = uStack_17c;
                            local_b8.Size = 9;
                            local_b8.DataPtr = L"materials";
                            pTVar16 = FJsonObject::GetArrayField((this->JsonRoot).Object,&local_b8);
                            iVar15 = pTVar16->ArrayNum;
                            pFVar21 = (pTVar16->AllocatorInstance).Data;
                            pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                            while( true ) {
                              if (pTVar16->ArrayNum != iVar15) {
                                local_38a = 0;
                                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::
                                operator!='::__l2::<lambda_1>::operator()(&local_38a);
                              }
                              if (pFVar21 == pFVar25) break;
                              if ((*(longlong *)pFVar21 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("IsValid()",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              plVar17 = (longlong *)(**(code **)**(undefined8 **)pFVar21)();
                              if ((*plVar17 == 0) &&
                                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("IsValid()",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar7)) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              SetupMaterial(this,(FJsonObject *)*plVar17);
                              pFVar21 = pFVar21 + 0x10;
                            }
                          }
                          bVar7 = CheckForErrors(this,(int)lVar4);
                          if (!bVar7) {
                            pFVar18 = TSharedPtr<FJsonObject,1>::operator->(&this->JsonRoot);
                            uStack_170 = 0xe;
                            local_178 = L"extensionsUsed";
                            local_a8._12_4_ = uStack_16c;
                            local_a8.Size = 0xe;
                            local_a8.DataPtr = L"extensionsUsed";
                            bVar7 = FJsonObject::TryGetArrayField(pFVar18,&local_a8,&local_338);
                            if (bVar7) {
                              uVar8 = local_338->ArrayNum;
                              if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
                              }
                              pTVar16 = local_338;
                              if ((param_3->ExtensionsUsed).ArrayMax < (int)uVar8) {
                                UE::Core::Private::
                                ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x10,8,uVar8,&(param_3->ExtensionsUsed).AllocatorInstance
                                           ,(param_3->ExtensionsUsed).ArrayNum,
                                           &(param_3->ExtensionsUsed).ArrayMax);
                                pTVar16 = local_338;
                              }
                              iVar15 = pTVar16->ArrayNum;
                              pTVar1 = &param_3->ExtensionsUsed;
                              pFVar21 = (pTVar16->AllocatorInstance).Data;
                              pFVar25 = pFVar21 + (longlong)iVar15 * 0x10;
                              while( true ) {
                                if (pTVar16->ArrayNum != iVar15) {
                                  local_389 = 0;
                                  `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::
                                  operator!='::__l2::<lambda_1>::operator()(&local_389);
                                }
                                if (pFVar21 == pFVar25) break;
                                if ((*(longlong *)pFVar21 == 0) &&
                                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("IsValid()",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                                pFVar19 = (FScriptContainerElement *)
                                          FJsonValue::AsString(*(FJsonValue **)pFVar21,&local_98);
                                pFVar24 = (pTVar1->AllocatorInstance).Data;
                                if (((pFVar24 <= pFVar19) &&
                                    (pFVar19 < pFVar24 + (longlong)
                                                         (param_3->ExtensionsUsed).ArrayMax * 0x10))
                                   && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                         (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar7)) {
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                                iVar23 = (param_3->ExtensionsUsed).ArrayNum;
                                if (iVar23 == (param_3->ExtensionsUsed).ArrayMax) {
                                  iVar23 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x810,&pTVar1->AllocatorInstance,
                                                      &(param_3->ExtensionsUsed).ArrayMax);
                                }
                                (param_3->ExtensionsUsed).ArrayNum = iVar23 + 1;
                                pFVar24 = (pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0x10
                                ;
                                *(undefined8 *)pFVar24 = 0;
                                *(undefined8 *)pFVar24 = *(undefined8 *)pFVar19;
                                *(undefined8 *)pFVar19 = 0;
                                *(int *)(pFVar24 + 8) = *(int *)(pFVar19 + 8);
                                *(int *)(pFVar24 + 0xc) = *(int *)(pFVar19 + 0xc);
                                *(undefined8 *)(pFVar19 + 8) = 0;
                                if (local_98.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                                }
                                pFVar21 = pFVar21 + 0x10;
                              }
                            }
                            pFVar3 = (this->ExtensionsHandler).Ptr;
                            pFVar18 = TSharedPtr<FJsonObject,1>::operator*<FJsonObject>
                                                (&this->JsonRoot);
                            FExtensionsHandler::SetupAssetExtensions(pFVar3,pFVar18,param_1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadMetadata @ 14e646d40

/* WARNING: Removing unreachable block (ram,0x00014e6472ca) */
/* WARNING: Removing unreachable block (ram,0x00014e6472d9) */

void __thiscall GLTF::FFileReader::LoadMetadata(FFileReader *this,FAsset *param_1)

{
  int *piVar1;
  FMetadata *pFVar2;
  TArray<GLTF::FMetadata::FExtraData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar8;
  FJsonObject *pFVar9;
  void *_Src;
  code *pcVar10;
  FJsonObject *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TSharedPtr<FJsonObject,1> *pTVar15;
  TSharedPtr<FJsonValue,1> *pTVar16;
  FString *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  FAsset *local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_198;
  undefined8 local_190;
  FString local_188;
  FJsonObject *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  FJsonObject *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78 [2];
  undefined4 local_4c;
  
  local_res10 = param_1;
  if (((this->JsonRoot).Object == (FJsonObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_118 = L"asset";
  uStack_110 = 5;
  local_c8._12_4_ = uStack_10c;
  local_c8.Size = 5;
  local_c8.DataPtr = L"asset";
  pTVar15 = FJsonObject::GetObjectField((this->JsonRoot).Object,&local_c8);
  if ((pTVar15->Object == (FJsonObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar8 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)pTVar15->Object;
  local_108 = L"generator";
  uStack_100 = 9;
  local_b8._12_4_ = uStack_fc;
  local_b8.Size = 9;
  local_b8.DataPtr = L"generator";
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"generator");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar8,uVar13,&local_b8);
  if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) {
    if ((pTVar15->Object == (FJsonObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_f8 = L"generator";
    uStack_f0 = 9;
    local_a8._12_4_ = uStack_ec;
    local_a8.Size = 9;
    local_a8.DataPtr = L"generator";
    pFVar17 = FJsonObject::GetStringField(pTVar15->Object,&local_98,&local_a8);
    pFVar2 = &param_1->Metadata;
    if (pFVar2 != (FMetadata *)pFVar17) {
      pFVar19 = (pFVar2->GeneratorName).Data.AllocatorInstance.Data;
      if (pFVar19 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar19);
      }
      (pFVar2->GeneratorName).Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Metadata).GeneratorName.Data.ArrayNum = (pFVar17->Data).ArrayNum;
      (param_1->Metadata).GeneratorName.Data.ArrayMax = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if ((pTVar15->Object == (FJsonObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar8 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)pTVar15->Object;
  local_e8 = L"extras";
  uStack_e0 = 6;
  local_88._12_4_ = uStack_dc;
  local_88.Size = 6;
  local_88.DataPtr = L"extras";
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"extras");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar8,uVar13,&local_88);
  if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) {
    if ((pTVar15->Object == (FJsonObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_d8 = L"extras";
    uStack_d0 = 6;
    local_78[0]._12_4_ = uStack_cc;
    local_78[0].Size = 6;
    local_78[0].DataPtr = L"extras";
    pTVar15 = FJsonObject::GetObjectField(pTVar15->Object,local_78);
    if ((pTVar15->Object == (FJsonObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = pTVar15->Object;
    iStack_170 = 0;
    iVar14 = *(int *)&(pFVar9->Values).field_0x28;
    puVar6 = &(pFVar9->Values).field_0x10;
    uStack_16c = 1;
    local_158 = 0;
    iStack_15c = iStack_170;
    if (iVar14 != 0) {
      puVar23 = *(uint **)&(pFVar9->Values).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar6;
      }
      uVar13 = *puVar23;
      local_158 = 0;
      iStack_170 = 0;
      while (uVar13 == 0) {
        lVar18 = (longlong)iStack_170;
        local_158 = local_158 + 0x20;
        iStack_170 = iStack_170 + 1;
        iStack_15c = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170)
        goto LAB_14e647050;
        uVar13 = puVar23[lVar18 + 1];
      }
      uStack_16c = -uVar13 & uVar13;
      uVar5 = (ulonglong)uStack_16c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_res18 = (int)lVar18;
      iStack_15c = local_158 + -1 + local_res18;
      if (iVar14 < iStack_15c) {
        iStack_15c = iVar14;
      }
    }
LAB_14e647050:
    uVar13 = *(uint *)&(pFVar9->Values).field_0x28;
    uStack_154 = local_4c;
    uVar21 = uVar13 & 0xffffffe0;
    iStack_150 = *(int *)&(pFVar9->Values).field_0x8 - *(int *)&(pFVar9->Values).field_0x34;
    uStack_160 = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
    TStack_140.CurrentBitIndex = iStack_15c;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar13 >> 5;
    TStack_140._28_4_ = local_4c;
    TStack_140.BaseBitIndex = local_158;
    uStack_120 = CONCAT44(uStack_14c,iStack_150);
    local_178 = pFVar9;
    local_168 = puVar6;
    local_148 = pFVar9;
    TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar7 = *(uint *)&(pFVar9->Values).field_0x28;
    if (uVar13 != uVar7) {
      puVar22 = *(undefined1 **)&(pFVar9->Values).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar6;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
      while (uVar13 == 0) {
        lVar18 = (longlong)iVar20;
        uVar21 = uVar21 + 0x20;
        iVar20 = iVar20 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14e647160;
        uVar13 = *(uint *)(puVar22 + lVar18 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_res20 = (int)lVar18;
      uVar13 = local_res20 + -1 + uVar21;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_14e647160:
    while( true ) {
      pFVar11 = local_148;
      if (*(int *)&(local_148->Values).field_0x8 - *(int *)&(local_148->Values).field_0x34 !=
          (int)uStack_120) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_140.CurrentBitIndex == uVar13) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) &&
         (pFVar11 == pFVar9)) break;
      local_198.Data = (FScriptContainerElement *)0x0;
      lVar18 = *(longlong *)&pFVar11->Values;
      pTVar3 = &(param_1->Metadata).Extras;
      iVar14 = *(int *)(lVar18 + 8 + (longlong)TStack_140.CurrentBitIndex * 0x28);
      puVar4 = (undefined8 *)(lVar18 + (longlong)TStack_140.CurrentBitIndex * 0x28);
      _Src = (void *)*puVar4;
      local_190 = CONCAT44(local_190._4_4_,iVar14);
      if (iVar14 == 0) {
        local_190 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar14,0,&local_198,iVar14,(int *)((longlong)&local_190 + 4));
        memcpy(local_198.Data,_Src,(longlong)iVar14 * 2);
      }
      if ((puVar4[2] == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FJsonValue::AsString((FJsonValue *)puVar4[2],&local_188);
      iVar14 = (param_1->Metadata).Extras.ArrayNum;
      piVar1 = &(param_1->Metadata).Extras.ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar3->AllocatorInstance,piVar1);
      }
      (param_1->Metadata).Extras.ArrayNum = iVar14 + 1;
      pFVar19 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
      *(undefined8 *)pFVar19 = 0;
      *(FScriptContainerElement **)pFVar19 = local_198.Data;
      *(undefined4 *)(pFVar19 + 8) = (undefined4)local_190;
      *(undefined4 *)(pFVar19 + 0xc) = local_190._4_4_;
      *(undefined8 *)(pFVar19 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar19 + 0x10) = local_188.Data.AllocatorInstance.Data;
      *(int *)(pFVar19 + 0x18) = local_188.Data.ArrayNum;
      *(int *)(pFVar19 + 0x1c) = local_188.Data.ArrayMax;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190 = 0;
      local_198.Data = (FScriptContainerElement *)0x0;
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      param_1 = local_res10;
    }
  }
  return;
}

// ReadFile @ 14e647e70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FFileReader::ReadFile
          (FFileReader *this,FString *param_1,bool param_2,bool param_3,FAsset *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  FFileReader *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  IFileManager *pIVar14;
  FArchive *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FArchiveState *this_00;
  FJsonObject *pFVar19;
  TSharedPtr<FJsonObject,1> *pTVar20;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_01;
  TSharedPtr<FJsonValue,1> *pTVar21;
  FString *pFVar22;
  wchar_t *pwVar23;
  FExtraData *pFVar24;
  ForAnyElementType FVar25;
  FArchiveState *pFVar26;
  FMesh *this_02;
  FNode *pFVar27;
  FMesh *pFVar28;
  byte bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  TRawPtrProxy<FJsonObject> local_res8;
  FNode *local_res10;
  bool local_res18;
  char local_res20;
  FString local_268;
  StackState local_258;
  FAsset *local_220;
  TSharedPtr<FJsonObject,1> local_218;
  undefined8 local_208;
  FSharedReferencer<1> FStack_200;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FString local_1a8;
  TSharedRef<TJsonReader<wchar_t>,1> local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  FText local_128;
  TStringView<wchar_t> local_118;
  FText local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  
  plVar1 = &this->_padding_;
  local_res10 = (FNode *)param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
            ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)*plVar1);
  pFVar26 = (FArchiveState *)0x0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)plVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  pIVar14 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar15 = (FArchive *)(**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,pwVar23);
  if (pFVar15 == (FArchive *)0x0) {
    pFVar16 = FText::FromString(&local_88,param_1);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"InterchangeGLTFReader",L"ErrorLoadingFile",
                         L"Can\'t load file: {0}");
    pFVar18 = FTextFormat::FTextFormat(&local_78,pFVar17,Default);
    pFVar16 = FText::Format<FText>(&local_188,pFVar18,pFVar16);
    iVar11 = (int)*plVar1;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar2);
    }
    *(int *)plVar1 = iVar11 + 1;
    lVar4 = this->_padding_;
    lVar3 = (longlong)iVar11 * 3 + 1;
    *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
    FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    if (local_178.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    return;
  }
  FPaths::GetExtension(&local_268,param_1,false);
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_268.Data.ArrayNum != 0) {
    FVar25.Data = local_268.Data.AllocatorInstance.Data;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"gltf");
  if (iVar11 == 0) {
    if ((param_1->Data).ArrayNum == 0) {
      FFileHelper::LoadFileToString(&this->JsonBuffer,L"",None,0);
    }
    else {
      FFileHelper::LoadFileToString
                (&this->JsonBuffer,(wchar_t *)(param_1->Data).AllocatorInstance.Data,None,0);
    }
  }
  else {
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_268.Data.ArrayNum != 0) {
      FVar25.Data = local_268.Data.AllocatorInstance.Data;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"glb");
    if (iVar11 != 0) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"InterchangeGLTFReader",L"InvalidFileExtention",
                           L"Invalid extension.");
      iVar11 = (int)*plVar1;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this,piVar2);
      }
      *(int *)plVar1 = iVar11 + 1;
      lVar4 = this->_padding_;
      lVar3 = (longlong)iVar11 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        pFVar26 = (FArchiveState *)0x0;
      }
      goto LAB_14e648914;
    }
    ((this->BinaryReader).Ptr)->BinChunk = &param_4->BinData;
    bVar9 = FBinaryFileReader::ReadFile((this->BinaryReader).Ptr,pFVar15);
    pFVar5 = (FFileReader *)(this->BinaryReader).Ptr;
    if (!bVar9) {
      if ((this == pFVar5) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)pFVar5->_padding_;
      if (iVar11 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,iVar11,(ForAnyElementType *)this,(int *)plVar1,piVar2);
        ConstructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,TTuple<enum_GLTF::EMessageSeverity,FText>,int>
                  ((void *)(this->_padding_ + (longlong)iVar12 * 0x18),
                   (TTuple<GLTF::EMessageSeverity,FText> *)pFVar5->_padding_,iVar11);
      }
      goto LAB_14e648914;
    }
    FFileHelper::BufferToString
              (&this->JsonBuffer,*(uchar **)&pFVar5->BufferCount,pFVar5->ImageCount);
  }
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FArchiveState *)0x0) {
    iVar12 = (this->JsonBuffer).Data.ArrayNum;
    pFVar6 = (this->JsonBuffer).Data.AllocatorInstance.Data;
    FArchiveState::FArchiveState(this_00);
    this_00[1]._padding_ = (longlong)pFVar6;
    this_00->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
    iVar11 = iVar12 + -1;
    *(undefined1 *)&this_00[1].InlineFPLB.EndFastPathLoadBuffer = 0;
    this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    if (iVar12 == 0) {
      iVar11 = 0;
    }
    this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)((longlong)iVar11 * 2);
    FArchiveState::SetIsLoading(this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
    this_00->_padding_ = (longlong)&___7FBufferReader__6B_;
    pFVar26 = this_00;
  }
  local_res8.Object = ::operator_new(0x50);
  if (local_res8.Object != (FJsonObject *)0x0) {
    *(undefined8 *)&(local_res8.Object)->Values = 0;
    *(undefined8 *)&((local_res8.Object)->Values).field_0x8 = 0;
    *(undefined8 *)&((local_res8.Object)->Values).field_0x20 = 0;
    *(undefined4 *)&((local_res8.Object)->Values).field_0x28 = 0;
    *(undefined4 *)&((local_res8.Object)->Values).field_0x2c = 0x80;
    *(undefined4 *)&((local_res8.Object)->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_res8.Object)->Values).field_0x34 = 0;
    *(undefined8 *)&((local_res8.Object)->Values).field_0x40 = 0;
    *(undefined4 *)&((local_res8.Object)->Values).field_0x48 = 0;
  }
  pTVar20 = &this->JsonRoot;
  TSharedPtr<FJsonObject,1>::operator=<FJsonObject>(pTVar20,&local_res8);
  TJsonReader<wchar_t>::Create(&local_198,(FArchive *)pFVar26);
  local_258.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Identifier.Data.ArrayNum = 0;
  local_258.Identifier.Data.ArrayMax = 0;
  local_258.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Array.ArrayNum = 0;
  local_258.Array.ArrayMax = 0;
  local_258.Object.Object = (FJsonObject *)0x0;
  local_258.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar9 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_198.Object,&local_258,None);
  if (bVar9) {
    bVar9 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_258,pTVar20);
    local_res8.Object._0_1_ = bVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_258.Array.AllocatorInstance.Data,
               local_258.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_258.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_258.Array.AllocatorInstance.Data);
    }
    if (local_258.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Identifier.Data.AllocatorInstance.Data);
    }
    if ((char)local_res8.Object == '\0') goto LAB_14e6482b0;
    pFVar19 = TSharedPtr<FJsonObject,1>::operator->(pTVar20);
    uStack_1f0 = 5;
    local_1f8 = L"asset";
    local_158._12_4_ = uStack_1ec;
    local_158.Size = 5;
    local_158.DataPtr = L"asset";
    pTVar20 = FJsonObject::GetObjectField(pFVar19,&local_158);
    this_01 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)TSharedPtr<FJsonObject,1>::operator->(pTVar20);
    uStack_1e0 = 10;
    local_1e8 = L"minVersion";
    local_148._12_4_ = uStack_1dc;
    local_148.Size = 10;
    local_148.DataPtr = L"minVersion";
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"minVersion");
    pTVar21 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(this_01,uVar13,&local_148);
    if (((pTVar21 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar21->Object == (FJsonValue *)0x0)) ||
       (pTVar21->Object->Type != Number)) {
      pFVar19 = TSharedPtr<FJsonObject,1>::operator->(pTVar20);
      uStack_1c0 = 7;
      local_1c8 = L"version";
      local_118._12_4_ = uStack_1bc;
      local_118.Size = 7;
      local_118.DataPtr = L"version";
      dVar8 = FJsonObject::GetNumberField(pFVar19,&local_118);
      uVar30 = SUB84(dVar8,0);
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (__real_4000000000000000 <= dVar8) {
LAB_14e648580:
        (param_4->Metadata).Version = (float)(double)CONCAT44(uVar31,uVar30);
        if (local_res20 != '\0') {
          LoadMetadata(this,param_4);
        }
        pFVar27 = local_res10;
        FPaths::GetPath(&local_1a8,&local_res10->Name);
        ImportAsset(this,&local_1a8,local_res18,param_4);
        pFVar22 = FPaths::GetBaseFilename(&local_f8,&pFVar27->Name,true);
        ::FString::operator=(&param_4->Name,pFVar22);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        pFVar22 = ::FString::ToLower(&param_4->Name,&local_e8);
        if ((pFVar22->Data).ArrayNum == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp(pwVar23,L"scene");
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (iVar11 == 0) {
          ::FString::FString(&local_1b8,L"title");
          pFVar24 = TArray<GLTF::FMetadata::FExtraData,TSizedDefaultAllocator<32>_>::
                    FindByPredicate<_GLTF::FMetadata::GetExtraData_::__l2::<lambda_1>_>
                              (&(param_4->Metadata).Extras,&local_1b8);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (pFVar24 == (FExtraData *)0x0) {
            pFVar22 = FPaths::GetPath(&local_c8,&pFVar27->Name);
            pFVar22 = FPaths::GetBaseFilename(&local_d8,pFVar22,true);
            ::FString::operator=(&param_4->Name,pFVar22);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          else {
            ::FString::operator=(&param_4->Name,&pFVar24->Value);
          }
        }
        FAsset::GenerateNames(param_4);
        ResolveConflictingTextures(this);
        this_02 = (FMesh *)(param_4->Meshes).AllocatorInstance.Data;
        pFVar28 = this_02 + (param_4->Meshes).ArrayNum;
        for (; this_02 != pFVar28; this_02 = this_02 + 1) {
          if ((this_02->bIsValidCache).bIsSet == false) {
            cVar10 = FMesh::IsValidPrivate(this_02);
          }
          else {
            cVar10 = (this_02->bIsValidCache).TypedValue;
          }
          if (cVar10 == '\0') goto LAB_14e64872c;
        }
        this_02 = (FMesh *)0x0;
LAB_14e64872c:
        bVar29 = this_02 != (FMesh *)0x0;
        local_220 = param_4;
        pFVar27 = (FNode *)(param_4->Nodes).AllocatorInstance.Data;
        local_res10 = pFVar27 + (param_4->Nodes).ArrayNum;
        if (pFVar27 != local_res10) {
          do {
            bVar9 = `GLTF::FAsset::ValidationCheck'::__l6::<lambda_2>::operator()
                              (&local_220,pFVar27);
            if (bVar9) {
              if (pFVar27 != (FNode *)0x0) {
                bVar29 = bVar29 | 2;
              }
              break;
            }
            pFVar27 = pFVar27 + 1;
          } while (pFVar27 != local_res10);
        }
        if (bVar29 != 0) {
          pFVar16 = FText::FromString(&local_68,&param_4->Name);
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_a8,L"InterchangeGLTFReader",L"SomeImportedObjectsInvalid",
                               L"For GLTF Asset [{0}] not all imported objects are valid.");
          pFVar18 = FTextFormat::FTextFormat(&local_58,pFVar17,Default);
          pFVar16 = FText::Format<FText>(&local_b8,pFVar18,pFVar16);
          iVar11 = (int)this->_padding_;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)this,piVar2);
          }
          *(int *)&this->_padding_ = iVar11 + 1;
          lVar4 = this->_padding_;
          lVar3 = (longlong)iVar11 * 3 + 1;
          *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 1;
          FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
        }
        local_208 = 0;
        FStack_200.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->JsonRoot != (TSharedPtr<FJsonObject,1> *)&local_208) {
          (this->JsonRoot).Object = (FJsonObject *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->JsonRoot).SharedReferenceCount,&FStack_200);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_200.ReferenceController);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_108,L"InterchangeGLTFReader",L"UnsupportedGLTFAssetVersion",
                             L"This importer supports glTF asset version 2.0 or later.");
        iVar11 = (int)this->_padding_;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar2);
        }
        *(int *)&this->_padding_ = iVar11 + 1;
        lVar4 = this->_padding_;
        lVar3 = (longlong)iVar11 * 3 + 1;
        *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
        FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_198.SharedReferenceCount.ReferenceController);
          goto LAB_14e648914;
        }
      }
    }
    else {
      pFVar19 = TSharedPtr<FJsonObject,1>::operator->(pTVar20);
      uStack_1d0 = 10;
      local_1d8 = L"minVersion";
      local_138._12_4_ = uStack_1cc;
      local_138.Size = 10;
      local_138.DataPtr = L"minVersion";
      dVar8 = FJsonObject::GetNumberField(pFVar19,&local_138);
      uVar30 = SUB84(dVar8,0);
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (dVar8 <= __real_4000000000000000) goto LAB_14e648580;
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_128,L"InterchangeGLTFReader",L"UnsupportedGLTFAssetMinVersion",
                           L"This importer supports glTF version 2.0 (or compatible) assets.");
      iVar11 = (int)this->_padding_;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this,piVar2);
      }
      *(int *)&this->_padding_ = iVar11 + 1;
      lVar4 = this->_padding_;
      lVar3 = (longlong)iVar11 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
        goto LAB_14e648914;
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_258.Array.AllocatorInstance.Data,
               local_258.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_258.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_258.Array.AllocatorInstance.Data);
    }
    if (local_258.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Identifier.Data.AllocatorInstance.Data);
    }
LAB_14e6482b0:
    local_218.Object = (FJsonObject *)0x0;
    local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar20 != &local_218) {
      pTVar20->Object = (FJsonObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->JsonRoot).SharedReferenceCount,&local_218.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"InterchangeGLTFReader",L"JSONDeserializationError",
                         L"Problem loading JSON.");
    iVar11 = (int)this->_padding_;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar2);
    }
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar4 = this->_padding_;
    lVar3 = (longlong)iVar11 * 3 + 1;
    *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
    FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar16);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      goto LAB_14e648914;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
LAB_14e648914:
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (pFVar26 != (FArchiveState *)0x0) {
    (**(code **)pFVar26->_padding_)(pFVar26,1);
  }
  (*(code *)**(undefined8 **)pFVar15)(pFVar15,1);
  return;
}

// ResolveConflictingTextures @ 14e649280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall GLTF::FFileReader::ResolveConflictingTextures(FFileReader *this)

{
  ForAnyElementType *pFVar1;
  bool *pbVar2;
  undefined8 *puVar3;
  FAsset *pFVar4;
  FTextureMap *pFVar5;
  longlong lVar6;
  int *piVar7;
  code *pcVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  byte bVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  undefined1 *puVar24;
  ForElementType<FSetElementId> FVar25;
  uint uVar26;
  uint *puVar27;
  FScriptContainerElement *pFVar28;
  TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *pTVar29;
  undefined8 *puVar30;
  float fVar31;
  uint uVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  FFileReader *pFVar35;
  undefined1 auStackY_628 [32];
  undefined1 local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5 [5];
  FFileReader *local_5d0;
  int local_5c8 [2];
  int local_5c0 [2];
  int local_5b8 [2];
  int local_5b0 [2];
  int local_5a8 [2];
  int local_5a0 [2];
  int local_598 [2];
  int local_590 [2];
  int local_588 [2];
  int local_580 [2];
  int local_578 [2];
  int local_570 [2];
  int local_568 [2];
  int local_560 [2];
  int local_558 [2];
  int local_550 [2];
  int local_548 [2];
  int local_540 [2];
  uint local_538;
  int local_530;
  uint uStack_52c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_528;
  undefined4 local_520;
  int iStack_51c;
  int iStack_518;
  undefined4 uStack_514;
  FString local_510;
  FString local_500;
  void *local_4f0;
  undefined8 local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c0;
  TPairInitializer<int_&,GLTF::FTextureMap_*_&> local_4a0;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  TPairInitializer<int_const_&,_private:_void___cdecl_GLTF::FFileReader::ResolveConflictingTextures(void)_::_2_::FAffectedTextureMaps_&&>
  local_460;
  FScriptContainerElement *local_450;
  FScriptContainerElement *local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  int local_430;
  undefined4 local_42c;
  int local_428;
  int local_424;
  undefined1 local_420 [8];
  FTextureMap **local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  longlong *local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e8;
  undefined8 uStack_3c8;
  longlong *local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b8;
  undefined8 uStack_398;
  bool *local_390;
  void **local_388;
  FString local_380;
  FSparseArrayAllocationInfo local_370;
  FScriptContainerElement *local_360;
  FScriptContainerElement **local_358;
  FScriptContainerElement *local_350;
  FScriptContainerElement **local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement **local_338;
  undefined1 local_330 [40];
  int local_308;
  undefined4 uStack_304;
  undefined1 local_300 [40];
  int local_2d8;
  undefined4 uStack_2d4;
  longlong local_2c8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_298 [32];
  ForElementType<unsigned_int> local_278;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  undefined1 local_260 [8];
  ForAnyElementType local_258;
  uint local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  int local_214;
  undefined1 local_210 [8];
  undefined1 *local_208;
  int local_200;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1f8;
  TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
  local_1a8;
  undefined1 local_158 [32];
  undefined8 local_138;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  undefined8 local_108;
  undefined8 local_100;
  FString local_f8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_e8;
  FString local_98;
  undefined1 local_88 [40];
  int local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_628;
  pFVar4 = this->Asset;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (ForElementType<FSetElementId>)0x0;
  local_110 = 0;
  local_248 = 0;
  local_240 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0x80;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = (undefined1 *)0x0;
  local_200 = 0;
  pFVar34 = (pFVar4->Materials).AllocatorInstance.Data;
  local_538 = (pFVar4->Materials).ArrayNum;
  uVar20 = (ulonglong)(int)local_538;
  local_438 = pFVar34 + uVar20 * 0x370;
  local_5d0 = this;
  do {
    pFVar28 = local_438;
    pFVar35 = local_5d0;
    if ((pFVar4->Materials).ArrayNum != (int)uVar20) {
      local_5d8 = 0;
      `TCheckedPointerIterator<GLTF::FMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5d8);
    }
    if (pFVar34 == pFVar28) {
      local_4c0._padding_._0_4_ = 0;
      local_4c0._padding_._4_4_ = 1;
      iVar14 = (pFVar35->Asset->Textures).ArrayNum;
      local_4c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
      local_4c0.UnvisitedBitMask = 0xffffffff;
      local_4c0.CurrentBitIndex = 0;
      local_4c0.BaseBitIndex = 0;
      if (local_130 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c0);
      }
      TStack_3b8._padding_ = CONCAT44(local_4c0._padding_._4_4_,(undefined4)local_4c0._padding_);
      local_3c0 = (longlong *)local_158;
      TStack_3b8.CurrentBitIndex = local_4c0.CurrentBitIndex;
      TStack_3b8.UnvisitedBitMask = local_4c0.UnvisitedBitMask;
      TStack_3b8._28_4_ = local_4c0._28_4_;
      TStack_3b8.BaseBitIndex = local_4c0.BaseBitIndex;
      local_2d8 = local_158._8_4_ - local_124;
      local_300._16_8_ = local_4c0.Array;
      uStack_398 = CONCAT44(uStack_2d4,local_2d8);
      TStack_3b8.Array = local_4c0.Array;
      local_300._0_8_ = local_3c0;
      local_300._8_8_ = TStack_3b8._padding_;
      local_300._24_8_ = TStack_3b8._16_8_;
      local_300._32_8_ = TStack_3b8._24_8_;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_300,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),local_130);
      local_2c8 = pTVar18->_padding_;
      pTVar9 = pTVar18->Array;
      uVar11._0_4_ = pTVar18->UnvisitedBitMask;
      uVar11._4_4_ = pTVar18->CurrentBitIndex;
      uStack_2b0 = *(undefined8 *)&pTVar18->BaseBitIndex;
      pTStack_2c0 = pTVar9;
      local_2b8 = uVar11;
      do {
        plVar12 = local_3c0;
        if ((int)local_3c0[1] - *(int *)((longlong)local_3c0 + 0x34) != (int)uStack_398) {
          local_5d6 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d6);
        }
        lVar23 = (longlong)TStack_3b8.CurrentBitIndex;
        if (((TStack_3b8.CurrentBitIndex == uVar11._4_4_) && (TStack_3b8.Array == pTVar9)) &&
           (plVar12 == (longlong *)local_158)) {
          local_200 = 0;
          if (local_208 != (undefined1 *)0x0) {
            FMemory::Free(local_208);
          }
          TSparseArray<TSparseSetElement<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,_GLTF::FFileReader::ResolveConflictingTextures_::__l2::FAffectedTextureMaps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_248);
          local_110 = 0;
          if (local_118 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_118);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_158);
          return;
        }
        pFVar4 = pFVar35->Asset;
        lVar6 = *plVar12;
        uVar16 = *(uint *)(lVar6 + lVar23 * 0xc);
        uVar26 = 0;
        if ((int)uVar16 < (pFVar4->Textures).ArrayNum) {
          uVar26 = ~uVar16 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar34 = (pFVar4->Textures).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x80;
        local_108 = *(undefined8 *)pFVar34;
        local_100 = *(undefined8 *)(pFVar34 + 8);
        ::FString::FString(&local_f8,(FString *)(pFVar34 + 0x10));
        local_e8.Elements._44_4_ = 0x80;
        local_e8.Elements._0_8_ = 0;
        local_e8.Elements._8_8_ = 0;
        local_e8.Elements._32_8_ = 0;
        local_e8.Elements._40_4_ = 0;
        local_e8.Elements._52_4_ = 0;
        local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_e8.HashSize = 0;
        local_e8.Elements._48_4_ = 0xffffffff;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=(&local_e8,
                    (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(pFVar34 + 0x20));
        ::FString::FString(&local_98,(FString *)(pFVar34 + 0x70));
        ::FString::AppendChars(&local_f8,L"_greenFlipped",0xd);
        local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_500.Data.ArrayNum = 0;
        local_500.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_500,iVar14);
        ::FString::ConcatFC(&local_380,&pFVar35->Asset->Name,L"_texture_");
        ::FString::ConcatFF(&local_510,&local_380,&local_500);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = local_510.Data.AllocatorInstance.Data;
        local_98.Data.ArrayNum = local_510.Data.ArrayNum;
        local_98.Data.ArrayMax = local_510.Data.ArrayMax;
        local_510.Data.ArrayNum = 0;
        local_510.Data.ArrayMax = 0;
        local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
        if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.Data.AllocatorInstance.Data);
        }
        pFVar4 = pFVar35->Asset;
        pTVar29 = &pFVar4->Textures;
        pFVar34 = (pTVar29->AllocatorInstance).Data;
        if (((pFVar34 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             pFVar34 + (longlong)(pFVar4->Textures).ArrayMax * 0x80)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (pFVar4->Textures).ArrayNum;
        piVar7 = &(pFVar4->Textures).ArrayMax;
        if (iVar15 == *piVar7) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&pTVar29->AllocatorInstance,piVar7);
        }
        (pFVar4->Textures).ArrayNum = iVar15 + 1;
        pFVar34 = (pTVar29->AllocatorInstance).Data + (longlong)iVar15 * 0x80;
        *(undefined8 *)pFVar34 = local_108;
        *(undefined8 *)(pFVar34 + 8) = local_100;
        ::FString::FString((FString *)(pFVar34 + 0x10),&local_f8);
        *(undefined8 *)(pFVar34 + 0x20) = 0;
        *(undefined8 *)(pFVar34 + 0x28) = 0;
        *(undefined8 *)(pFVar34 + 0x40) = 0;
        *(undefined4 *)(pFVar34 + 0x48) = 0;
        *(undefined4 *)(pFVar34 + 0x4c) = 0x80;
        *(undefined4 *)(pFVar34 + 0x50) = 0xffffffff;
        *(undefined4 *)(pFVar34 + 0x54) = 0;
        *(undefined8 *)(pFVar34 + 0x60) = 0;
        *(undefined4 *)(pFVar34 + 0x68) = 0;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)(pFVar34 + 0x20),&local_e8);
        ::FString::FString((FString *)(pFVar34 + 0x70),&local_98);
        uVar16 = *(uint *)(lVar6 + lVar23 * 0xc);
        puVar27 = (uint *)0x0;
        if ((int)local_240 != local_214) {
          puVar24 = local_210;
          if (local_208 != (undefined1 *)0x0) {
            puVar24 = local_208;
          }
          uVar26 = *(uint *)(puVar24 + (ulonglong)(local_200 - 1U & uVar16) * 4);
          while (puVar27 = (uint *)0x0, uVar26 != 0xffffffff) {
            puVar27 = (uint *)((longlong)(int)uVar26 * 0x20 + local_248);
            if (*puVar27 == uVar16) {
              if (puVar27 != (uint *)0x0) goto LAB_14e64a6d0;
              break;
            }
            uVar26 = puVar27[6];
          }
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
LAB_14e64a6d0:
        puVar30 = *(undefined8 **)(puVar27 + 2);
        uVar16 = puVar27[4];
        puVar3 = puVar30 + (int)uVar16;
        while( true ) {
          if (puVar27[4] != uVar16) {
            local_5d5[0] = 0;
            `TCheckedPointerIterator<GLTF::FTextureMap_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_5d5);
          }
          if (puVar30 == puVar3) break;
          piVar7 = (int *)*puVar30;
          puVar30 = puVar30 + 1;
          *piVar7 = iVar14;
        }
        iVar14 = iVar14 + 1;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_e8.HashSize = 0;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e8.Elements);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        TStack_3b8.UnvisitedBitMask = TStack_3b8.UnvisitedBitMask & ~TStack_3b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b8);
        pFVar35 = local_5d0;
      } while( true );
    }
    local_5c0[0] = *(int *)(pFVar34 + 0x1e0);
    local_268 = -1;
    local_264 = 0;
    local_1f8.Elements._48_4_ = 0xffffffff;
    local_1a8.Elements._48_4_ = 0xffffffff;
    local_298._0_8_ = (FScriptContainerElement *)0x0;
    local_298._8_8_ = 0;
    local_278 = (ForElementType<unsigned_int>)0x0;
    local_270 = 0;
    local_26c = 0x80;
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250 = 0;
    local_1f8.Elements._0_8_ = 0;
    local_1f8.Elements._8_8_ = 0;
    local_1f8.Elements._32_8_ = 0;
    local_1f8.Elements._40_4_ = 0;
    local_1f8.Elements._44_4_ = 0x80;
    local_1f8.Elements._52_4_ = 0;
    local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1f8.HashSize = 0;
    local_1a8.Elements._0_8_ = 0;
    local_1a8.Elements._8_8_ = 0;
    local_1a8.Elements._32_8_ = 0;
    local_1a8.Elements._40_4_ = 0;
    local_1a8.Elements._44_4_ = 0x80;
    local_1a8.Elements._52_4_ = 0;
    local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1a8.HashSize = 0;
    if ((-1 < local_5c0[0]) && (local_5c0[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298,&local_430,
                 (bool *)local_5c0);
    }
    uVar16 = *(uint *)(pFVar34 + 0xec);
    if ((-1 < (int)uVar16) && ((int)uVar16 < (pFVar35->Asset->Textures).ArrayNum)) {
      if (local_264 == 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_298,(int *)(local_298 + 8),
                            (int *)(local_298 + 0xc));
        iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10),1);
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_298 + 0x10);
        if (local_278 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_278;
        }
        bVar19 = (byte)iVar15 & 0x1f;
        if (iVar15 < 0) {
          iVar15 = iVar15 + 0x1f;
          bVar19 = bVar19 - 0x20;
        }
        puVar27 = (uint *)((longlong)FVar22 + (longlong)(iVar15 >> 5) * 4);
        *puVar27 = *puVar27 & ~(1 << (bVar19 & 0x1f));
        iVar15 = local_268;
      }
      else {
        local_264 = local_264 + -1;
        iVar15 = *(int *)(local_298._0_8_ + (longlong)local_268 * 0xc + 4);
        iVar14 = local_268;
        if (local_264 != 0) {
          *(undefined4 *)(local_298._0_8_ + (longlong)iVar15 * 0xc) = 0xffffffff;
        }
      }
      local_268 = iVar15;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_298,&local_370,iVar14);
      if (local_370.Pointer != (uint *)0x0) {
        *(uint *)local_370.Pointer = uVar16;
        *(uint *)((longlong)local_370.Pointer + 4) = 0xffffffff;
      }
      uVar16 = *(uint *)local_370.Pointer;
      if ((local_298._8_4_ - local_264 != 1) && (local_298._8_4_ != local_264)) {
        FVar21.Data = (FScriptContainerElement *)local_260;
        if ((ForElementType<FSetElementId>)local_258.Data != (ForElementType<FSetElementId>)0x0) {
          FVar21.Data = local_258.Data;
        }
        for (iVar14 = *(int *)((longlong)FVar21.Data + (ulonglong)(local_250 - 1 & uVar16) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_298._0_8_ + (longlong)iVar14 * 0xc + 4)) {
          if (*(uint *)(local_298._0_8_ + (longlong)iVar14 * 0xc) == uVar16) {
            if (iVar14 != -1) {
              *(uint *)(local_298._0_8_ + (longlong)iVar14 * 0xc) = uVar16;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_298,local_370.Index,1);
              pFVar35 = local_5d0;
              goto LAB_14e64992b;
            }
            break;
          }
        }
      }
      uVar32 = local_298._8_4_ - local_264;
      uVar26 = 1;
      if (3 < uVar32) {
        uVar20 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_42c = (undefined4)lVar23;
        uVar26 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((int)uVar32 < 1) || ((int)uVar26 <= (int)local_250)) {
        uVar16 = local_250 - 1 & uVar16;
        *(uint *)((longlong)local_370.Pointer + 8) = uVar16;
        FVar21.Data = (FScriptContainerElement *)local_260;
        if ((ForElementType<FSetElementId>)local_258.Data != (ForElementType<FSetElementId>)0x0) {
          FVar21.Data = local_258.Data;
        }
        uVar20 = (longlong)(int)local_250 - 1U & (longlong)(int)uVar16;
        *(uint *)((longlong)local_370.Pointer + 4) = *(uint *)((longlong)FVar21.Data + uVar20 * 4);
        *(int *)((longlong)FVar21.Data + uVar20 * 4) = local_370.Index;
        pFVar35 = local_5d0;
      }
      else {
        local_250 = uVar26;
        if ((ForElementType<FSetElementId>)local_258.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_258,0,0,4);
        }
        if (uVar26 != 0) {
          uVar16 = uVar26;
          if (uVar26 < 2) {
            if ((ForElementType<FSetElementId>)local_258.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar16 = 0;
              goto LAB_14e649704;
            }
          }
          else {
LAB_14e649704:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_258,0,uVar16,4);
          }
          uVar20 = 0;
          if (0 < (int)uVar26) {
            uVar33 = (ulonglong)uVar26;
            do {
              FVar21.Data = (FScriptContainerElement *)local_260;
              if ((ForElementType<FSetElementId>)local_258.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar21.Data = local_258.Data;
              }
              uVar17 = (longlong)(int)uVar26 - 1U & uVar20;
              uVar20 = uVar20 + 1;
              *(undefined4 *)((longlong)FVar21.Data + uVar17 * 4) = 0xffffffff;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
        }
        pFVar35 = local_5d0;
        if (local_250 != 0) {
          pTStack_528 = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10);
          local_530 = 0;
          uStack_52c = 1;
          iStack_51c = 0;
          iStack_518 = 0;
          if (local_270 != 0) {
            FVar22 = (ForElementType<unsigned_int>)((longlong)local_298 + 0x10);
            if (local_278 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_278;
            }
            uVar16 = *(uint *)FVar22;
            while (uVar16 == 0) {
              iStack_518 = iStack_518 + 0x20;
              lVar23 = (longlong)local_530;
              local_530 = local_530 + 1;
              if ((int)(local_270 + -1 + (local_270 + -1 >> 0x1f & 0x1fU)) >> 5 < local_530)
              goto LAB_14e649822;
              uVar16 = ((uint *)((longlong)FVar22 + 4))[lVar23];
            }
            uStack_52c = -uVar16 & uVar16;
            uVar20 = (ulonglong)uStack_52c * 2 + 1;
            lVar23 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_428 = (int)lVar23;
            iStack_51c = iStack_518 + -1 + local_428;
            if (local_270 < iStack_51c) {
LAB_14e649822:
              iStack_51c = local_270;
            }
          }
          local_520 = 0xffffffff;
          local_418 = (FTextureMap **)local_298;
          local_410._padding_ = CONCAT44(uStack_52c,local_530);
          local_410.CurrentBitIndex = iStack_51c;
          local_410.UnvisitedBitMask = 0xffffffff;
          local_410._28_4_ = uStack_514;
          local_410.BaseBitIndex = iStack_518;
          local_410.Array = pTStack_528;
          iVar14 = iStack_51c;
          if (iStack_51c < local_270) {
            do {
              lVar23 = (longlong)iVar14;
              pFVar5 = *local_418;
              fVar31 = (float)(local_250 - 1 &
                              (uint)(pFVar5->TextureTransform).Offset[lVar23 * 3 + -2]);
              (pFVar5->TextureTransform).Offset[lVar23 * 3] = fVar31;
              FVar21.Data = (FScriptContainerElement *)local_260;
              if ((ForElementType<FSetElementId>)local_258.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar21.Data = local_258.Data;
              }
              uVar20 = (longlong)(int)local_250 - 1U & (longlong)(int)fVar31;
              (pFVar5->TextureTransform).Offset[lVar23 * 3 + -1] =
                   *(float *)((longlong)FVar21.Data + uVar20 * 4);
              *(int *)((longlong)FVar21.Data + uVar20 * 4) = iVar14;
              local_410.UnvisitedBitMask = local_410.UnvisitedBitMask & ~local_410._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_410);
              pFVar35 = local_5d0;
              iVar14 = local_410.CurrentBitIndex;
            } while (local_410.CurrentBitIndex < (local_410.Array)->NumBits);
          }
        }
      }
    }
LAB_14e64992b:
    local_5b8[0] = *(int *)(pFVar34 + 0x274);
    if ((-1 < local_5b8[0]) && (local_5b8[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298,&local_424,
                 (bool *)local_5b8);
    }
    local_450 = pFVar34 + 0x1e0;
    if (((pFVar34 != (FScriptContainerElement *)0xfffffffffffffe20) && (-1 < *(int *)local_450)) &&
       (*(int *)local_450 < (pFVar35->Asset->Textures).ArrayNum)) {
      local_358 = &local_450;
      local_360 = local_450;
      TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,GLTF::FTextureMap_*_&>_>
                (&local_1a8,(TPairInitializer<int_&,GLTF::FTextureMap_*_&> *)local_420,
                 (bool *)&local_360);
    }
    local_448 = pFVar34 + 0xec;
    if (((pFVar34 != (FScriptContainerElement *)0xffffffffffffff14) && (-1 < *(int *)local_448)) &&
       (*(int *)local_448 < (pFVar35->Asset->Textures).ArrayNum)) {
      local_348 = &local_448;
      local_350 = local_448;
      TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,GLTF::FTextureMap_*_&>_>
                (&local_1a8,(TPairInitializer<int_&,GLTF::FTextureMap_*_&> *)(local_420 + 4),
                 (bool *)&local_350);
    }
    local_440 = pFVar34 + 0x274;
    if (((pFVar34 != (FScriptContainerElement *)0xfffffffffffffd8c) && (-1 < *(int *)local_440)) &&
       (*(int *)local_440 < (pFVar35->Asset->Textures).ArrayNum)) {
      local_338 = &local_440;
      local_340 = local_440;
      TSet<TTuple<int,GLTF::FTextureMap_*>,TDefaultMapHashableKeyFuncs<int,GLTF::FTextureMap_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,GLTF::FTextureMap_*_&>_>
                (&local_1a8,&local_4a0,(bool *)&local_340);
    }
    local_5b0[0] = *(int *)(pFVar34 + 0x10);
    if ((-1 < local_5b0[0]) && (local_5b0[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_47c,(bool *)local_5b0);
    }
    local_5a8[0] = *(int *)(pFVar34 + 0x44);
    if ((-1 < local_5a8[0]) && (local_5a8[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,(int *)((longlong)&local_4a0.Key + 4),(bool *)local_5a8);
    }
    local_5a0[0] = *(int *)(pFVar34 + 0x68);
    if ((-1 < local_5a0[0]) && (local_5a0[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,(int *)&local_4a0.Value,(bool *)local_5a0);
    }
    local_598[0] = *(int *)(pFVar34 + 0xac);
    if ((-1 < local_598[0]) && (local_598[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,(int *)((longlong)&local_4a0.Value + 4),(bool *)local_598);
    }
    local_590[0] = *(int *)(pFVar34 + 0xcc);
    if ((-1 < local_590[0]) && (local_590[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_490,(bool *)local_590);
    }
    local_588[0] = *(int *)(pFVar34 + 0x10c);
    if ((-1 < local_588[0]) && (local_588[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_48c,(bool *)local_588);
    }
    local_580[0] = *(int *)(pFVar34 + 0x140);
    if ((-1 < local_580[0]) && (local_580[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_488,(bool *)local_580);
    }
    local_578[0] = *(int *)(pFVar34 + 0x160);
    if ((-1 < local_578[0]) && (local_578[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_484,(bool *)local_578);
    }
    local_570[0] = *(int *)(pFVar34 + 0x184);
    if ((-1 < local_570[0]) && (local_570[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_480,(bool *)local_570);
    }
    local_568[0] = *(int *)(pFVar34 + 0x1b8);
    if ((-1 < local_568[0]) && (local_568[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,(int *)&local_460.Value,(bool *)local_568);
    }
    local_560[0] = *(int *)(pFVar34 + 600);
    if ((-1 < local_560[0]) && (local_560[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_478,(bool *)local_560);
    }
    local_558[0] = *(int *)(pFVar34 + 0x29c);
    if ((-1 < local_558[0]) && (local_558[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_474,(bool *)local_558);
    }
    local_550[0] = *(int *)(pFVar34 + 0x2c4);
    if ((-1 < local_550[0]) && (local_550[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_470,(bool *)local_550);
    }
    local_548[0] = *(int *)(pFVar34 + 0x2e4);
    if ((-1 < local_548[0]) && (local_548[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_46c,(bool *)local_548);
    }
    local_540[0] = *(int *)(pFVar34 + 0x1fc);
    if ((-1 < local_540[0]) && (local_540[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_468,(bool *)local_540);
    }
    local_5c8[0] = *(int *)(pFVar34 + 0x218);
    if ((-1 < local_5c8[0]) && (local_5c8[0] < (pFVar35->Asset->Textures).ArrayNum)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1f8,&local_464,(bool *)local_5c8);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Intersect
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,&local_1f8);
    if (local_88._8_4_ != local_54) {
      local_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_4e0._padding_._0_4_ = 0;
      local_4e0._padding_._4_4_ = 1;
      local_4e0.UnvisitedBitMask = 0xffffffff;
      local_4e0.CurrentBitIndex = 0;
      local_4e0.BaseBitIndex = 0;
      if (local_60 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
      }
      TStack_3e8._padding_ = CONCAT44(local_4e0._padding_._4_4_,(undefined4)local_4e0._padding_);
      local_308 = local_88._8_4_ - local_54;
      local_3f0 = (longlong *)local_88;
      TStack_3e8.CurrentBitIndex = local_4e0.CurrentBitIndex;
      TStack_3e8.UnvisitedBitMask = local_4e0.UnvisitedBitMask;
      TStack_3e8._28_4_ = local_4e0._28_4_;
      TStack_3e8.BaseBitIndex = local_4e0.BaseBitIndex;
      local_330._16_8_ = local_4e0.Array;
      uStack_3c8 = CONCAT44(uStack_304,local_308);
      TStack_3e8.Array = local_4e0.Array;
      local_330._0_8_ = local_3f0;
      local_330._8_8_ = TStack_3e8._padding_;
      local_330._24_8_ = TStack_3e8._16_8_;
      local_330._32_8_ = TStack_3e8._24_8_;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_330,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),local_60);
      local_2c8 = pTVar18->_padding_;
      pTVar9 = pTVar18->Array;
      uVar10._0_4_ = pTVar18->UnvisitedBitMask;
      uVar10._4_4_ = pTVar18->CurrentBitIndex;
      uStack_2b0 = *(undefined8 *)&pTVar18->BaseBitIndex;
      pTStack_2c0 = pTVar9;
      local_2b8 = uVar10;
      while( true ) {
        plVar12 = local_3f0;
        if ((int)local_3f0[1] - *(int *)((longlong)local_3f0 + 0x34) != (int)uStack_3c8) {
          local_5d7 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5d7);
        }
        if (((TStack_3e8.CurrentBitIndex == uVar10._4_4_) && (TStack_3e8.Array == pTVar9)) &&
           (plVar12 == (longlong *)local_88)) break;
        lVar23 = *plVar12;
        uVar16 = *(uint *)(lVar23 + (longlong)TStack_3e8.CurrentBitIndex * 0xc);
        pbVar2 = (bool *)(lVar23 + (longlong)TStack_3e8.CurrentBitIndex * 0xc);
        if ((int)local_240 != local_214) {
          puVar24 = local_210;
          if (local_208 != (undefined1 *)0x0) {
            puVar24 = local_208;
          }
          for (iVar14 = *(int *)(puVar24 + (ulonglong)(local_200 - 1U & uVar16) * 4); iVar14 != -1;
              iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + local_248)) {
            if (*(uint *)((longlong)iVar14 * 0x20 + local_248) == uVar16) goto LAB_14e649fbe;
          }
        }
        local_388 = &local_4f0;
        local_4f0 = (void *)0x0;
        local_4e8 = 0;
        local_390 = pbVar2;
        TSet<TTuple<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps>,TDefaultMapHashableKeyFuncs<int,`GLTF::FFileReader::ResolveConflictingTextures'::__l2::FAffectedTextureMaps,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,_GLTF::FFileReader::ResolveConflictingTextures_::__l2::FAffectedTextureMaps_&&>_>
                  (&local_248,&local_460,(bool *)&local_390);
        if (local_4f0 != (void *)0x0) {
          FMemory::Free(local_4f0);
        }
LAB_14e649fbe:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,
                   (int *)((longlong)&local_460.Key + 4),pbVar2);
        puVar27 = (uint *)0x0;
        if ((int)local_240 != local_214) {
          puVar24 = local_210;
          if (local_208 != (undefined1 *)0x0) {
            puVar24 = local_208;
          }
          uVar16 = *(uint *)(puVar24 + (ulonglong)(local_200 - 1U & *(uint *)pbVar2) * 4);
          while (puVar27 = (uint *)0x0, uVar16 != 0xffffffff) {
            puVar27 = (uint *)((longlong)(int)uVar16 * 0x20 + local_248);
            if (*puVar27 == *(uint *)pbVar2) {
              if (puVar27 != (uint *)0x0) goto LAB_14e64a064;
              break;
            }
            uVar16 = puVar27[6];
          }
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
LAB_14e64a064:
        pFVar1 = (ForAnyElementType *)(puVar27 + 2);
        if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
          FVar25 = (ForElementType<FSetElementId>)&local_1a8.Hash;
          if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar25 = local_1a8.Hash.SecondaryData;
          }
          iVar14 = *(int *)((longlong)FVar25 +
                           (ulonglong)(local_1a8.HashSize - 1U & *(uint *)pbVar2) * 4);
          while (iVar14 != -1) {
            lVar23 = local_1a8.Elements._0_8_ + (longlong)iVar14 * 0x18;
            if (*(uint *)(local_1a8.Elements._0_8_ + (longlong)iVar14 * 0x18) == *(uint *)pbVar2) {
              if (lVar23 != 0) goto LAB_14e64a0f4;
              goto LAB_14e64a0ce;
            }
            iVar14 = *(int *)(lVar23 + 0x10);
          }
        }
        lVar23 = 0;
LAB_14e64a0ce:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
LAB_14e64a0f4:
        pFVar28 = (FScriptContainerElement *)(lVar23 + 8);
        if (((pFVar1->Data <= pFVar28) && (pFVar28 < pFVar1->Data + (longlong)(int)puVar27[5] * 8))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar16 = puVar27[4];
        if (uVar16 == puVar27[5]) {
          uVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,pFVar1,(int *)(puVar27 + 5));
        }
        puVar27[4] = uVar16 + 1;
        *(undefined8 *)(pFVar1->Data + (longlong)(int)uVar16 * 8) = *(undefined8 *)pFVar28;
        TStack_3e8.UnvisitedBitMask = TStack_3e8.UnvisitedBitMask & ~TStack_3e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e8);
      }
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    local_1a8.HashSize = 0;
    if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,GLTF::FTextureMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,GLTF::FTextureMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8.Elements);
    local_1f8.HashSize = 0;
    if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1f8.Elements);
    local_250 = 0;
    if ((ForElementType<FSetElementId>)local_258.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_258.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_298);
    uVar20 = (ulonglong)local_538;
    pFVar34 = pFVar34 + 0x370;
  } while( true );
}

// SetLocalBindPosesForJoints @ 14e64a8b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall GLTF::FFileReader::SetLocalBindPosesForJoints(FFileReader *this)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  uint uVar29;
  FFileReader *pFVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  FText *pFVar34;
  FText *pFVar35;
  FTextFormat *pFVar36;
  TTransform<double> *pTVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  FScriptContainerElement *pFVar42;
  ForAnyElementType FVar43;
  FAsset *pFVar44;
  uint uVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  uint uVar48;
  TBitArray<FDefaultBitArrayAllocator> *pTVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  TBitArray<FDefaultBitArrayAllocator> *pTVar52;
  ulonglong uVar53;
  longlong lVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  FString local_1a8;
  undefined8 local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  int local_170;
  FFileReader *local_168;
  ForElementType<unsigned_int> *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  double local_130;
  double local_128;
  double local_120;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8 [2];
  undefined4 local_bc;
  
  dVar28 = __real_3f1a36e2e0000000;
  uVar29 = _UNK_15061cc8c;
  uVar51 = _UNK_15061cc88;
  uVar45 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar44 = this->Asset;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  pFVar47 = (pFVar44->Nodes).AllocatorInstance.Data;
  iVar33 = (pFVar44->Nodes).ArrayNum;
  pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar47 + 0x150);
  pFVar50 = pFVar47 + (longlong)iVar33 * 0x260;
  local_168 = this;
  do {
    if ((pFVar44->Nodes).ArrayNum != iVar33) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<GLTF::FNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c8);
    }
    pFVar30 = local_168;
    uVar46 = 0;
    uVar48 = 0;
    if (pFVar47 == pFVar50) {
      iVar33 = (int)local_1b8;
      if ((int)local_1b8 < 1) {
        pFVar44 = local_168->Asset;
        if ((pFVar44->Skins).ArrayNum != 0) {
          do {
            uVar45 = (uint)uVar46;
            uVar40 = 0;
            if ((int)uVar45 < (pFVar44->Skins).ArrayNum) {
              uVar40 = ~uVar45 >> 0x1f;
            }
            if (uVar40 == 0) {
              bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar31) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar53 = 0;
            pFVar47 = (pFVar44->Skins).AllocatorInstance.Data;
            lVar54 = (longlong)(int)uVar45 * 0x98;
            lVar41 = *(longlong *)(pFVar47 + lVar54);
            if ((*(int *)(lVar41 + 4) == *(int *)(pFVar47 + lVar54 + 0x20)) &&
               (((*(longlong *)(lVar41 + 0x98) != 0 || (*(char *)(lVar41 + 0x18) != '\0')) &&
                (*(int *)(pFVar47 + lVar54 + 0x20) != 0)))) {
              do {
                uVar51 = (uint)uVar53;
                pFVar44 = pFVar30->Asset;
                uVar40 = 0;
                if ((int)uVar51 < *(int *)(pFVar47 + lVar54 + 0x20)) {
                  uVar40 = ~uVar51 >> 0x1f;
                }
                if (uVar40 == 0) {
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                uVar40 = *(uint *)(*(longlong *)(pFVar47 + lVar54 + 0x18) +
                                  (longlong)(int)uVar51 * 4);
                uVar51 = 0;
                if ((int)uVar40 < (pFVar44->Nodes).ArrayNum) {
                  uVar51 = ~uVar40 >> 0x1f;
                }
                if (uVar51 == 0) {
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                pFVar50 = (pFVar44->Nodes).AllocatorInstance.Data;
                lVar41 = (longlong)(int)uVar40 * 0x260;
                if ((pFVar50[lVar41 + 400] == (FScriptContainerElement)0x0) &&
                   (*(int *)(pFVar50 + lVar41 + 0x148) != *(int *)(pFVar50 + lVar41 + 0x174))) {
                  pFVar42 = pFVar50 + lVar41 + 0x178;
                  if (*(FScriptContainerElement **)(pFVar50 + lVar41 + 0x180) !=
                      (FScriptContainerElement *)0x0) {
                    pFVar42 = *(FScriptContainerElement **)(pFVar50 + lVar41 + 0x180);
                  }
                  iVar33 = *(int *)(pFVar42 +
                                   ((ulonglong)(*(int *)(pFVar50 + lVar41 + 0x188) - 1) &
                                   uVar46 & 0xffffffff) * 4);
                  if (iVar33 != -1) {
                    do {
                      if (*(uint *)((longlong)iVar33 * 0x80 +
                                   *(longlong *)(pFVar50 + lVar41 + 0x140)) == uVar45) {
                        pFVar50[lVar41 + 400] = (FScriptContainerElement)0x1;
                        pTVar37 = TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                                  ::FindChecked((TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                                                 *)(pFVar50 + lVar41 + 0x140),uVar45);
                        dVar28 = (pTVar37->Rotation).XY.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1a0) = (pTVar37->Rotation).XY.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1a0 + 8) = dVar28;
                        dVar28 = (pTVar37->Rotation).ZW.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1b0) = (pTVar37->Rotation).ZW.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1b0 + 8) = dVar28;
                        dVar28 = (pTVar37->Translation).XY.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1c0) =
                             (pTVar37->Translation).XY.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1c0 + 8) = dVar28;
                        dVar28 = (pTVar37->Translation).ZW.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1d0) =
                             (pTVar37->Translation).ZW.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1d0 + 8) = dVar28;
                        dVar28 = (pTVar37->Scale3D).XY.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1e0) = (pTVar37->Scale3D).XY.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1e0 + 8) = dVar28;
                        dVar28 = (pTVar37->Scale3D).ZW.m128d_f64[1];
                        *(double *)(pFVar50 + lVar41 + 0x1f0) = (pTVar37->Scale3D).ZW.m128d_f64[0];
                        *(double *)(pFVar50 + lVar41 + 0x1f0 + 8) = dVar28;
                        break;
                      }
                      iVar33 = *(int *)((longlong)iVar33 * 0x80 + 0x70 +
                                       *(longlong *)(pFVar50 + lVar41 + 0x140));
                    } while (iVar33 != -1);
                  }
                }
                uVar53 = uVar53 + 1;
              } while (uVar53 < (ulonglong)(longlong)*(int *)(pFVar47 + lVar54 + 0x20));
            }
            pFVar44 = pFVar30->Asset;
            uVar46 = uVar46 + 1;
          } while (uVar46 < (ulonglong)(longlong)(pFVar44->Skins).ArrayNum);
        }
      }
      else {
        pFVar47 = local_1c0.Data + (longlong)(int)local_1b8 * 0x10;
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        FVar43.Data = local_1c0.Data;
        while( true ) {
          uVar40 = (uint)uVar46;
          if ((int)local_1b8 != iVar33) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1b0);
            uVar40 = local_1a8.Data.ArrayNum;
          }
          if (FVar43.Data == pFVar47) break;
          iVar32 = uVar40 - 1;
          if (uVar40 == 0) {
            iVar32 = 0;
          }
          if (0 < iVar32) {
            ::FString::AppendChars(&local_1a8,L", ",2);
          }
          iVar32 = *(int *)(FVar43.Data + 8) + -1;
          if (*(int *)(FVar43.Data + 8) == 0) {
            iVar32 = 0;
          }
          ::FString::AppendChars(&local_1a8,*(wchar_t **)FVar43.Data,iVar32);
          uVar46 = (ulonglong)(uint)local_1a8.Data.ArrayNum;
          FVar43.Data = FVar43.Data + 0x10;
        }
        pFVar34 = FText::FromString(&local_f8,&local_1a8);
        pFVar35 = FText::AsLocalizable_Advanced_LocText
                            (&local_108,L"InterchangeGLTFReader",L"MultipleSkinsUseSameJointProblem"
                             ,
                             L"The same Joint(s) are used in multiple Skins with multiple different InverseBindMatrix values, which is not supported. Ignoring InverseBindMatrices for the entire Import. Offending Joints\' Names: {0}."
                            );
        pFVar36 = FTextFormat::FTextFormat(local_e8,pFVar35,Default);
        pFVar34 = FText::Format<FText>(&local_118,pFVar36,pFVar34);
        piVar1 = (int *)((longlong)&pFVar30->_padding_ + 4);
        iVar33 = (int)pFVar30->_padding_;
        if (iVar33 == *piVar1) {
          iVar33 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar30,piVar1);
        }
        *(int *)&pFVar30->_padding_ = iVar33 + 1;
        lVar54 = pFVar30->_padding_;
        lVar41 = (longlong)iVar33 * 3 + 1;
        *(undefined4 *)(lVar54 + -8 + lVar41 * 8) = 1;
        FText::FText((FText *)(lVar54 + lVar41 * 8),pFVar34);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        pFVar30->Asset->HasAbnormalInverseBindMatrices = true;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FString,int>((FString *)local_1c0.Data,(int)local_1b8);
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      return;
    }
    uVar39 = pTVar52->NumBits;
    TStack_190._padding_._4_4_ = 1;
    uStack_144 = uVar48;
    local_140 = uVar48;
    if (uVar39 != 0) {
      pTVar6 = *(TBitArray<FDefaultBitArrayAllocator> **)
                &(pTVar52->AllocatorInstance).SecondaryData.field_0x0;
      pTVar49 = pTVar52;
      if (pTVar6 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar49 = pTVar6;
      }
      uVar5 = *(uint *)(pTVar49->AllocatorInstance).InlineData;
      uVar53 = uVar46;
      while( true ) {
        uVar48 = (uint)uVar46;
        local_140 = (uint)uVar53;
        if (uVar5 != 0) break;
        lVar41 = (longlong)(int)uVar48;
        local_140 = local_140 + 0x20;
        uVar53 = (ulonglong)local_140;
        uVar48 = uVar48 + 1;
        uVar46 = (ulonglong)uVar48;
        uStack_144 = uVar39;
        if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar48)
        goto LAB_14e64a9ed;
        uVar5 = *(uint *)((pTVar49->AllocatorInstance).InlineData + lVar41 * 4 + 4);
      }
      TStack_190._padding_._4_4_ = -uVar5 & uVar5;
      uVar46 = (ulonglong)TStack_190._padding_._4_4_ * 2 + 1;
      lVar41 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar41 == 0; lVar41 = lVar41 + -1) {
        }
      }
      local_170 = (int)lVar41;
      uStack_144 = local_170 + -1 + local_140;
      if ((int)uVar39 < (int)uStack_144) {
        uStack_144 = uVar39;
      }
    }
LAB_14e64a9ed:
    local_160 = &pTVar52[-1].AllocatorInstance.SecondaryData;
    uStack_148 = 0xffffffff;
    uStack_13c = local_bc;
    TStack_190._28_4_ = local_bc;
    TStack_190.BaseBitIndex = local_140;
    if ((int)uStack_144 < (int)uVar39) {
      FVar7 = *local_160;
      lVar41 = (longlong)(int)uStack_144 * 0x80;
      pdVar2 = (double *)(lVar41 + 0x10 + (longlong)FVar7);
      dVar24 = *pdVar2;
      dVar25 = pdVar2[1];
      pdVar2 = (double *)(lVar41 + 0x20 + (longlong)FVar7);
      dVar26 = *pdVar2;
      dVar27 = pdVar2[1];
      pdVar2 = (double *)(lVar41 + 0x30 + (longlong)FVar7);
      dVar20 = *pdVar2;
      dVar21 = pdVar2[1];
      pdVar2 = (double *)(lVar41 + 0x40 + (longlong)FVar7);
      dVar22 = *pdVar2;
      dVar23 = pdVar2[1];
      pdVar2 = (double *)(lVar41 + 0x50 + (longlong)FVar7);
      dVar16 = *pdVar2;
      dVar17 = pdVar2[1];
      pdVar2 = (double *)(lVar41 + 0x60 + (longlong)FVar7);
      dVar18 = *pdVar2;
      dVar19 = pdVar2[1];
    }
    else {
      dVar24 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar25 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      dVar26 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dVar27 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      dVar20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar21 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      dVar22 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dVar23 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    }
    TStack_190.CurrentBitIndex = uStack_144;
    TStack_190.UnvisitedBitMask = ~TStack_190._padding_._4_4_;
    TStack_190._padding_._0_4_ = uVar48;
    TStack_190.Array = pTVar52;
    uStack_158 = uVar48;
    uStack_154 = TStack_190._padding_._4_4_;
    local_150 = pTVar52;
    local_198 = local_160;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    if (TStack_190.CurrentBitIndex < (TStack_190.Array)->NumBits) {
      local_130 = dVar28;
      do {
        lVar41 = (longlong)TStack_190.CurrentBitIndex * 0x80;
        FVar7 = *local_198;
        pdVar2 = (double *)(lVar41 + 0x40 + (longlong)FVar7);
        dVar15 = dVar22 - *pdVar2;
        dVar57 = dVar23 - pdVar2[1];
        lVar54 = -(ulonglong)
                  (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                             SUB84(dVar57,0) & uVar51));
        auVar9._8_4_ = (int)lVar54;
        auVar9._0_8_ = -(ulonglong)
                        (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                                   SUB84(dVar15,0) & uVar40));
        auVar9._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
        uVar48 = movmskpd(TStack_190.CurrentBitIndex,auVar9);
        pdVar2 = (double *)(lVar41 + 0x30 + (longlong)FVar7);
        dVar15 = dVar20 - *pdVar2;
        dVar57 = dVar21 - pdVar2[1];
        lVar54 = -(ulonglong)
                  (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                             SUB84(dVar57,0) & uVar51));
        auVar10._8_4_ = (int)lVar54;
        auVar10._0_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                         SUB84(dVar15,0) & uVar40));
        auVar10._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
        iVar32 = movmskpd((undefined4)local_198,auVar10);
        if ((uVar48 & 0x3fffffff) != 0 || iVar32 != 0) {
LAB_14e64ac1c:
          if ((local_1c0.Data <= pFVar47) &&
             (pFVar47 < local_1c0.Data + (longlong)local_1b8._4_4_ * 0x10)) {
            bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar31) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar32 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar32 + 1);
          ::FString::FString((FString *)(local_1c0.Data + (longlong)iVar32 * 0x10),
                             (FString *)pFVar47);
          break;
        }
        pdVar2 = (double *)(lVar41 + 0x10 + (longlong)FVar7);
        pdVar3 = (double *)(lVar41 + 0x20 + (longlong)FVar7);
        dVar15 = dVar26 - *pdVar3;
        dVar57 = dVar27 - pdVar3[1];
        pdVar3 = (double *)(lVar41 + 0x20 + (longlong)FVar7);
        local_128 = dVar28;
        lVar54 = -(ulonglong)
                  (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                             SUB84(dVar57,0) & uVar51));
        auVar11._8_4_ = (int)lVar54;
        auVar11._0_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                         SUB84(dVar15,0) & uVar40));
        auVar11._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
        iVar38 = movmskpd(0,auVar11);
        pdVar4 = (double *)(lVar41 + 0x10 + (longlong)FVar7);
        dVar15 = dVar24 - *pdVar4;
        dVar57 = dVar25 - pdVar4[1];
        lVar54 = -(ulonglong)
                  (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                             SUB84(dVar57,0) & uVar51));
        dVar57 = *pdVar2 + dVar24;
        dVar58 = pdVar2[1] + dVar25;
        dVar59 = *pdVar3 + dVar26;
        dVar60 = pdVar3[1] + dVar27;
        auVar12._8_4_ = (int)lVar54;
        auVar12._0_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                         SUB84(dVar15,0) & uVar40));
        auVar12._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
        uVar48 = movmskpd(iVar32,auVar12);
        uVar39 = iVar38 << 2 | uVar48;
        if (uVar39 != 0) {
          lVar54 = -(ulonglong)
                    (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar29,
                                               SUB84(dVar60,0) & uVar51));
          auVar13._8_4_ = (int)lVar54;
          auVar13._0_8_ =
               -(ulonglong)
                (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar45,
                                           SUB84(dVar59,0) & uVar40));
          auVar13._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
          uVar39 = movmskpd(uVar39,auVar13);
          auVar55._8_8_ =
               -(ulonglong)
                (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar29,
                                           SUB84(dVar58,0) & uVar51));
          auVar55._0_8_ =
               -(ulonglong)
                (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar45,
                                           SUB84(dVar57,0) & uVar40));
          uVar48 = movmskpd(uVar48,auVar55);
          if ((uVar39 & 0x3fffffff) != 0 || uVar48 != 0) goto LAB_14e64ac1c;
        }
        local_120 = dVar28;
        pdVar2 = (double *)(lVar41 + 0x60 + (longlong)FVar7);
        dVar15 = dVar18 - *pdVar2;
        dVar57 = dVar19 - pdVar2[1];
        lVar54 = -(ulonglong)
                  (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                             SUB84(dVar57,0) & uVar51));
        auVar14._8_4_ = (int)lVar54;
        auVar14._0_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                         SUB84(dVar15,0) & uVar40));
        auVar14._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
        uVar39 = movmskpd(0,auVar14);
        pdVar2 = (double *)(lVar41 + 0x50 + (longlong)FVar7);
        dVar15 = dVar16 - *pdVar2;
        dVar57 = dVar17 - pdVar2[1];
        auVar56._8_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar29,
                                         SUB84(dVar57,0) & uVar51));
        auVar56._0_8_ =
             -(ulonglong)
              (dVar28 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar45,
                                         SUB84(dVar15,0) & uVar40));
        iVar32 = movmskpd(uVar48,auVar56);
        if ((uVar39 & 0x3fffffff) != 0 || iVar32 != 0) goto LAB_14e64ac1c;
        TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
      } while (TStack_190.CurrentBitIndex < (TStack_190.Array)->NumBits);
    }
    pFVar47 = pFVar47 + 0x260;
    pTVar52 = pTVar52 + 0x13;
  } while( true );
}

// SetupAccessor @ 14e64bf70

void __thiscall GLTF::FFileReader::SetupAccessor(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  uint uVar2;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  FAsset *pFVar5;
  FAsset *pFVar6;
  FScriptContainerElement *pFVar7;
  FExtensionsHandler *this_01;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  EComponentType EVar13;
  EType EVar14;
  uint uVar15;
  EComponentType EVar16;
  int iVar17;
  TSharedPtr<FJsonValue,1> *pTVar18;
  FString *pFVar19;
  TSharedPtr<FJsonObject,1> *pTVar20;
  longlong lVar21;
  FJsonObject *pFVar22;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar23;
  ulong64 uVar24;
  ulong64 uVar25;
  FSparse *pFVar26;
  FAccessor *this_02;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  bool local_res8;
  uint local_res18;
  uint local_res20;
  ulong64 local_7b0;
  uint local_7a8;
  ulong64 local_7a0;
  ulong64 local_790;
  ulong64 local_788;
  ulong64 local_780;
  ulong64 local_778 [2];
  wchar_t *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  wchar_t *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  wchar_t *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  wchar_t *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  wchar_t *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  wchar_t *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  wchar_t *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  wchar_t *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  wchar_t *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  wchar_t *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  wchar_t *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  wchar_t *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  wchar_t *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  wchar_t *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  wchar_t *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  wchar_t *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  wchar_t *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  wchar_t *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  wchar_t *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  wchar_t *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  wchar_t *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  wchar_t *local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  wchar_t *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  wchar_t *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  wchar_t *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  wchar_t *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  wchar_t *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  wchar_t *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  wchar_t *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  wchar_t *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  wchar_t *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  wchar_t *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  wchar_t *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  TStringView<wchar_t> local_468;
  TStringView<wchar_t> local_458;
  FString local_448;
  TStringView<wchar_t> local_438;
  TStringView<wchar_t> local_428;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  TStringView<wchar_t> local_2e8;
  FString local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  FSparse local_228;
  FSparse local_1b0;
  FSparse local_138;
  FSparse local_c0;
  
  uVar29 = this->BufferViewCount;
  local_768 = L"bufferView";
  uStack_760 = 10;
  local_4d8._12_4_ = uStack_75c;
  local_4d8.Size = 10;
  uVar2 = (this->Asset->Accessors).ArrayNum;
  local_4d8.DataPtr = L"bufferView";
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar11,&local_4d8);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c029:
    uVar11 = uVar29;
  }
  else {
    local_758 = L"bufferView";
    uStack_750 = 10;
    local_4c8._12_4_ = uStack_74c;
    local_4c8.Size = 10;
    local_4c8.DataPtr = L"bufferView";
    dVar9 = FJsonObject::GetNumberField(param_1,&local_4c8);
    uVar11 = (int)dVar9;
    if ((int)dVar9 < 0) goto LAB_14e64c029;
  }
  uVar29 = 0;
  uVar28 = 0;
  if (this->BufferViewCount <= uVar11) {
    local_5b8 = L"bufferView";
    uStack_5b0 = 10;
    local_318._12_4_ = uStack_5ac;
    local_318.Size = 10;
    local_318.DataPtr = L"bufferView";
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
    pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar11,&local_318);
    if (((pTVar18 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar18->Object != (FJsonValue *)0x0)) &&
       (pTVar18->Object->Type == Number)) {
      pFVar3 = this->Asset;
      piVar1 = &(pFVar3->Accessors).ArrayMax;
      iVar17 = (pFVar3->Accessors).ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8d0,&(pFVar3->Accessors).AllocatorInstance,piVar1);
      }
      (pFVar3->Accessors).ArrayNum = iVar17 + 1;
      DefaultConstructItems<GLTF::FAccessor,int>
                ((pFVar3->Accessors).AllocatorInstance.Data + (longlong)iVar17 * 0xd0,1);
      goto LAB_14e64d230;
    }
    uStack_5a0 = 5;
    local_5a8 = L"count";
    local_308._12_4_ = uStack_59c;
    local_308.Size = 5;
    local_308.DataPtr = L"count";
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"count");
    pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar11,&local_308);
    if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
       (pTVar18->Object->Type != Number)) {
LAB_14e64cc39:
      local_res18 = 0;
    }
    else {
      local_598 = L"count";
      uStack_590 = 5;
      local_2f8._12_4_ = uStack_58c;
      local_2f8.Size = 5;
      local_2f8.DataPtr = L"count";
      dVar9 = FJsonObject::GetNumberField(param_1,&local_2f8);
      local_res18 = (uint)dVar9;
      if ((int)local_res18 < 0) goto LAB_14e64cc39;
    }
    uStack_580 = 4;
    local_588 = L"type";
    local_2e8._12_4_ = uStack_57c;
    local_2e8.Size = 4;
    local_2e8.DataPtr = L"type";
    pFVar19 = FJsonObject::GetStringField(param_1,&local_2d8,&local_2e8);
    EVar14 = AccessorTypeFromString(pFVar19);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    uStack_570 = 0xd;
    local_578 = L"componentType";
    local_2c8._12_4_ = uStack_56c;
    local_2c8.Size = 0xd;
    local_2c8.DataPtr = L"componentType";
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"componentType");
    pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar11,&local_2c8);
    if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
       (pTVar18->Object->Type != Number)) {
LAB_14e64cd2b:
      uVar11 = uVar29;
    }
    else {
      local_568 = L"componentType";
      uStack_560 = 0xd;
      local_2b8._12_4_ = uStack_55c;
      local_2b8.Size = 0xd;
      local_2b8.DataPtr = L"componentType";
      dVar9 = FJsonObject::GetNumberField(param_1,&local_2b8);
      uVar11 = (int)dVar9;
      if ((int)dVar9 < 0) goto LAB_14e64cd2b;
    }
    EVar13 = ComponentTypeFromNumber((ushort)uVar11);
    uStack_550 = 10;
    local_558 = L"normalized";
    local_2a8._12_4_ = uStack_54c;
    local_2a8.Size = 10;
    local_2a8.DataPtr = L"normalized";
    uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"normalized");
    pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar29,&local_2a8);
    if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
       (pTVar18->Object->Type != Boolean)) {
      local_res8 = false;
    }
    else {
      local_548 = L"normalized";
      uStack_540 = 10;
      local_298._12_4_ = uStack_53c;
      local_298.Size = 10;
      local_298.DataPtr = L"normalized";
      local_res8 = FJsonObject::GetBoolField(param_1,&local_298);
    }
    uStack_530 = 6;
    local_538 = L"sparse";
    local_288._12_4_ = uStack_52c;
    local_288.Size = 6;
    local_288.DataPtr = L"sparse";
    uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"sparse");
    pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar29,&local_288);
    if ((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) {
      pFVar3 = this->Asset;
      local_c0.bHasSparse = false;
      piVar1 = &(pFVar3->Accessors).ArrayMax;
      local_c0.Count = 0;
      local_c0.Indices.Count = 0;
      local_c0.Indices.BufferView.Buffer.ByteLength = 0;
      local_c0.Indices.BufferView.Buffer.Data = (uchar *)0x0;
      iVar17 = (pFVar3->Accessors).ArrayNum;
      local_c0.Indices.BufferView.ByteOffset = 0;
      local_c0.Indices.BufferView.ByteLength = 0;
      local_c0.Indices.BufferView.ByteStride = 0;
      local_c0.Indices.ByteOffset = 0;
      local_c0.Indices.ComponentType = None;
      local_c0.Values.BufferView.Buffer.ByteLength = 0;
      local_c0.Values.BufferView.Buffer.Data = (uchar *)0x0;
      local_c0.Values.BufferView.ByteStride = 0;
      local_c0.Values.BufferView.ByteOffset = 0;
      local_c0.Values.BufferView.ByteLength = 0;
      local_c0.Values.ByteOffset = 0;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8d0,&(pFVar3->Accessors).AllocatorInstance,piVar1);
      }
      (pFVar3->Accessors).ArrayNum = iVar17 + 1;
      pFVar26 = &local_c0;
      this_02 = (FAccessor *)((pFVar3->Accessors).AllocatorInstance.Data + (longlong)iVar17 * 0xd0);
    }
    else {
      local_528 = L"sparse";
      uStack_520 = 6;
      local_278._12_4_ = uStack_51c;
      local_278.Size = 6;
      local_278.DataPtr = L"sparse";
      pTVar20 = FJsonObject::GetObjectField(param_1,&local_278);
      pFVar22 = TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(pTVar20);
      uVar11 = GetUnsignedInt(pFVar22,L"count",0);
      uStack_510 = 7;
      local_518 = L"indices";
      local_268._12_4_ = uStack_50c;
      local_268.Size = 7;
      local_268.DataPtr = L"indices";
      pTVar20 = FJsonObject::GetObjectField(pFVar22,&local_268);
      pTVar23 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(pTVar20);
      uVar29 = this->BufferViewCount;
      local_508 = L"bufferView";
      uStack_500 = 10;
      local_258._12_4_ = uStack_4fc;
      local_258.Size = 10;
      local_258.DataPtr = L"bufferView";
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
      pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar23,uVar12,&local_258);
      if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0))
         || (pTVar18->Object->Type != Number)) {
LAB_14e64cf4c:
        uVar12 = uVar29;
      }
      else {
        local_4f8 = L"bufferView";
        uStack_4f0 = 10;
        local_248._12_4_ = uStack_4ec;
        local_248.Size = 10;
        local_248.DataPtr = L"bufferView";
        dVar9 = FJsonObject::GetNumberField((FJsonObject *)pTVar23,&local_248);
        uVar12 = (int)dVar9;
        if ((int)dVar9 < 0) goto LAB_14e64cf4c;
      }
      uVar24 = GetUnsignedInt64((FJsonObject *)pTVar23,L"byteOffset",0);
      uVar29 = GetUnsignedInt((FJsonObject *)pTVar23,L"componentType",0);
      EVar16 = ComponentTypeFromNumber((ushort)uVar29);
      local_4e8 = L"values";
      uStack_4e0 = 6;
      local_238._12_4_ = uStack_4dc;
      local_238.Size = 6;
      local_238.DataPtr = L"values";
      pTVar20 = FJsonObject::GetObjectField(pFVar22,&local_238);
      pFVar22 = TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(pTVar20);
      uVar15 = GetUnsignedInt(pFVar22,L"bufferView",this->BufferViewCount);
      lVar21 = (longlong)(int)uVar15;
      uVar25 = GetUnsignedInt64(pFVar22,L"byteOffset",0);
      pFVar3 = this->Asset;
      uVar29 = uVar28;
      if ((int)uVar15 < (pFVar3->BufferViews).ArrayNum) {
        uVar29 = ~uVar15 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar5 = this->Asset;
      pFVar4 = (pFVar3->BufferViews).AllocatorInstance.Data;
      uVar29 = uVar28;
      if ((int)uVar12 < (pFVar5->BufferViews).ArrayNum) {
        uVar29 = ~uVar12 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      piVar1 = &(pFVar3->Accessors).ArrayMax;
      lVar27 = (longlong)(int)uVar12;
      local_138.bHasSparse = true;
      pFVar7 = (pFVar5->BufferViews).AllocatorInstance.Data;
      local_138.Indices.BufferView.Buffer.ByteLength = *(ulong64 *)(pFVar7 + lVar27 * 0x28);
      local_138.Indices.BufferView.Buffer.Data = *(uchar **)(pFVar7 + lVar27 * 0x28 + 8);
      local_138.Indices.BufferView.ByteOffset = *(ulong64 *)(pFVar7 + lVar27 * 0x28 + 0x10);
      local_138.Indices.BufferView.ByteLength = *(ulong64 *)(pFVar7 + lVar27 * 0x28 + 0x10 + 8);
      local_138.Indices.BufferView._32_8_ = *(undefined8 *)(pFVar7 + lVar27 * 0x28 + 0x20);
      local_138.Values.BufferView.Buffer.ByteLength = *(ulong64 *)(pFVar4 + lVar21 * 0x28);
      local_138.Values.BufferView.Buffer.Data = *(uchar **)(pFVar4 + lVar21 * 0x28 + 8);
      local_138.Values.BufferView.ByteOffset = *(ulong64 *)(pFVar4 + lVar21 * 0x28 + 0x10);
      local_138.Values.BufferView.ByteLength = *(ulong64 *)(pFVar4 + lVar21 * 0x28 + 0x10 + 8);
      iVar17 = (pFVar3->Accessors).ArrayNum;
      local_138.Values.BufferView._32_8_ = *(undefined8 *)(pFVar4 + lVar21 * 0x28 + 0x20);
      local_138.Count = uVar11;
      local_138.Indices.Count = uVar11;
      local_138.Indices.ByteOffset = uVar24;
      local_138.Indices.ComponentType = EVar16;
      local_138.Values.ByteOffset = uVar25;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8d0,&(pFVar3->Accessors).AllocatorInstance,piVar1);
      }
      (pFVar3->Accessors).ArrayNum = iVar17 + 1;
      pFVar26 = &local_138;
      this_02 = (FAccessor *)((pFVar3->Accessors).AllocatorInstance.Data + (longlong)iVar17 * 0xd0);
    }
    FAccessor::FAccessor(this_02,uVar2,local_res18,EVar14,EVar13,local_res8,pFVar26);
    goto LAB_14e64d230;
  }
  uStack_740 = 10;
  local_748 = L"byteOffset";
  local_4b8._12_4_ = uStack_73c;
  local_4b8.Size = 10;
  local_4b8.DataPtr = L"byteOffset";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteOffset");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_4b8);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c0c4:
    local_7a0 = 0;
  }
  else {
    local_738 = L"byteOffset";
    uStack_730 = 10;
    local_4a8._12_4_ = uStack_72c;
    local_4a8.Size = 10;
    local_4a8.DataPtr = L"byteOffset";
    bVar10 = FJsonObject::TryGetNumberField(param_1,&local_4a8,&local_788);
    if (!bVar10) goto LAB_14e64c0c4;
    local_7a0 = local_788;
  }
  uStack_720 = 0xd;
  local_728 = L"componentType";
  local_498._12_4_ = uStack_71c;
  local_498.Size = 0xd;
  local_498.DataPtr = L"componentType";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"componentType");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_498);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c146:
    uVar12 = uVar29;
  }
  else {
    local_718 = L"componentType";
    uStack_710 = 0xd;
    local_488._12_4_ = uStack_70c;
    local_488.Size = 0xd;
    local_488.DataPtr = L"componentType";
    dVar9 = FJsonObject::GetNumberField(param_1,&local_488);
    uVar12 = (int)dVar9;
    if ((int)dVar9 < 0) goto LAB_14e64c146;
  }
  EVar13 = ComponentTypeFromNumber((ushort)uVar12);
  uStack_700 = 5;
  local_708 = L"count";
  local_478._12_4_ = uStack_6fc;
  local_478.Size = 5;
  local_478.DataPtr = L"count";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"count");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_478);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c1d7:
    local_res18 = 0;
  }
  else {
    local_6f8 = L"count";
    uStack_6f0 = 5;
    local_468._12_4_ = uStack_6ec;
    local_468.Size = 5;
    local_468.DataPtr = L"count";
    dVar9 = FJsonObject::GetNumberField(param_1,&local_468);
    local_res18 = (uint)dVar9;
    if ((int)local_res18 < 0) goto LAB_14e64c1d7;
  }
  uStack_6e0 = 4;
  local_6e8 = L"type";
  local_458._12_4_ = uStack_6dc;
  local_458.Size = 4;
  local_458.DataPtr = L"type";
  pFVar19 = FJsonObject::GetStringField(param_1,&local_448,&local_458);
  EVar14 = AccessorTypeFromString(pFVar19);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  uStack_6d0 = 10;
  local_6d8 = L"normalized";
  local_438._12_4_ = uStack_6cc;
  local_438.Size = 10;
  local_438.DataPtr = L"normalized";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"normalized");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_438);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Boolean)) {
    local_res8 = false;
  }
  else {
    local_6c8 = L"normalized";
    uStack_6c0 = 10;
    local_428._12_4_ = uStack_6bc;
    local_428.Size = 10;
    local_428.DataPtr = L"normalized";
    local_res8 = FJsonObject::GetBoolField(param_1,&local_428);
  }
  uStack_6b0 = 6;
  local_6b8 = L"sparse";
  local_418._12_4_ = uStack_6ac;
  local_418.Size = 6;
  local_418.DataPtr = L"sparse";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"sparse");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar12,&local_418);
  if ((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) {
    pFVar3 = this->Asset;
    local_1b0.bHasSparse = false;
    local_1b0.Count = 0;
    local_1b0.Indices.Count = 0;
    local_1b0.Indices.BufferView.ByteStride = 0;
    local_1b0.Indices.ByteOffset = 0;
    local_1b0.Indices.BufferView.Buffer.ByteLength = 0;
    local_1b0.Indices.BufferView.Buffer.Data = (uchar *)0x0;
    uVar29 = uVar28;
    if ((int)uVar11 < (pFVar3->BufferViews).ArrayNum) {
      uVar29 = ~uVar11 >> 0x1f;
    }
    local_1b0.Indices.ComponentType = None;
    local_1b0.Values.BufferView.ByteStride = 0;
    local_1b0.Values.ByteOffset = 0;
    local_1b0.Indices.BufferView.ByteOffset = 0;
    local_1b0.Indices.BufferView.ByteLength = 0;
    local_1b0.Values.BufferView.Buffer.ByteLength = 0;
    local_1b0.Values.BufferView.Buffer.Data = (uchar *)0x0;
    local_1b0.Values.BufferView.ByteOffset = 0;
    local_1b0.Values.BufferView.ByteLength = 0;
    if (uVar29 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    piVar1 = &(pFVar3->Accessors).ArrayMax;
    pFVar4 = (pFVar3->BufferViews).AllocatorInstance.Data;
    iVar17 = (pFVar3->Accessors).ArrayNum;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8d0,&(pFVar3->Accessors).AllocatorInstance,piVar1);
    }
    (pFVar3->Accessors).ArrayNum = iVar17 + 1;
    FAccessor::FAccessor
              ((FAccessor *)((pFVar3->Accessors).AllocatorInstance.Data + (longlong)iVar17 * 0xd0),
               uVar2,(FBufferView *)(pFVar4 + (longlong)(int)uVar11 * 0x28),local_7a0,local_res18,
               EVar14,EVar13,local_res8,&local_1b0);
    goto LAB_14e64d230;
  }
  local_6a8 = L"sparse";
  uStack_6a0 = 6;
  local_408._12_4_ = uStack_69c;
  local_408.Size = 6;
  local_408.DataPtr = L"sparse";
  pTVar20 = FJsonObject::GetObjectField(param_1,&local_408);
  if (pTVar20->Object == (FJsonObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar23 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)pTVar20->Object;
  local_698 = L"count";
  uStack_690 = 5;
  local_3f8._12_4_ = uStack_68c;
  local_3f8.Size = 5;
  local_3f8.DataPtr = L"count";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"count");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar23,uVar12,&local_3f8);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c3e8:
    local_7a8 = 0;
  }
  else {
    local_688 = L"count";
    uStack_680 = 5;
    local_3e8._12_4_ = uStack_67c;
    local_3e8.Size = 5;
    local_3e8.DataPtr = L"count";
    dVar9 = FJsonObject::GetNumberField((FJsonObject *)pTVar23,&local_3e8);
    local_7a8 = (uint)dVar9;
    if ((int)local_7a8 < 0) goto LAB_14e64c3e8;
  }
  uStack_670 = 7;
  local_678 = L"indices";
  local_3d8._12_4_ = uStack_66c;
  local_3d8.Size = 7;
  local_3d8.DataPtr = L"indices";
  pTVar20 = FJsonObject::GetObjectField((FJsonObject *)pTVar23,&local_3d8);
  if (pTVar20->Object == (FJsonObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)pTVar20->Object;
  uVar12 = this->BufferViewCount;
  local_668 = L"bufferView";
  uStack_660 = 10;
  local_3c8._12_4_ = uStack_65c;
  local_3c8.Size = 10;
  local_3c8.DataPtr = L"bufferView";
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar15,&local_3c8);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c4f3:
    local_res20 = uVar12;
  }
  else {
    uStack_650 = 10;
    local_658 = L"bufferView";
    local_3b8._12_4_ = uStack_64c;
    local_3b8.Size = 10;
    local_3b8.DataPtr = L"bufferView";
    dVar9 = FJsonObject::GetNumberField((FJsonObject *)this_00,&local_3b8);
    local_res20 = (int)dVar9;
    if ((int)dVar9 < 0) goto LAB_14e64c4f3;
  }
  uStack_640 = 10;
  local_648 = L"byteOffset";
  local_3a8._12_4_ = uStack_63c;
  local_3a8.Size = 10;
  local_3a8.DataPtr = L"byteOffset";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteOffset");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar12,&local_3a8);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c593:
    local_790 = 0;
  }
  else {
    local_638 = L"byteOffset";
    uStack_630 = 10;
    local_398._12_4_ = uStack_62c;
    local_398.Size = 10;
    local_398.DataPtr = L"byteOffset";
    bVar10 = FJsonObject::TryGetNumberField((FJsonObject *)this_00,&local_398,&local_780);
    if (!bVar10) goto LAB_14e64c593;
    local_790 = local_780;
  }
  local_628 = L"componentType";
  uStack_620 = 0xd;
  local_388._12_4_ = uStack_61c;
  local_388.Size = 0xd;
  local_388.DataPtr = L"componentType";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"componentType");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(this_00,uVar12,&local_388);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c61f:
    uVar12 = uVar29;
  }
  else {
    local_618 = L"componentType";
    uStack_610 = 0xd;
    local_378._12_4_ = uStack_60c;
    local_378.Size = 0xd;
    local_378.DataPtr = L"componentType";
    dVar9 = FJsonObject::GetNumberField((FJsonObject *)this_00,&local_378);
    uVar12 = (int)dVar9;
    if ((int)dVar9 < 0) goto LAB_14e64c61f;
  }
  EVar16 = ComponentTypeFromNumber((ushort)uVar12);
  local_608 = L"values";
  uStack_600 = 6;
  local_368._12_4_ = uStack_5fc;
  local_368.Size = 6;
  local_368.DataPtr = L"values";
  pTVar20 = FJsonObject::GetObjectField((FJsonObject *)pTVar23,&local_368);
  if (pTVar20->Object == (FJsonObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar23 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)pTVar20->Object;
  uVar12 = this->BufferViewCount;
  local_5f8 = L"bufferView";
  uStack_5f0 = 10;
  local_358._12_4_ = uStack_5ec;
  local_358.Size = 10;
  local_358.DataPtr = L"bufferView";
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar23,uVar15,&local_358);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c726:
    uVar15 = uVar12;
  }
  else {
    local_5e8 = L"bufferView";
    uStack_5e0 = 10;
    local_348._12_4_ = uStack_5dc;
    local_348.Size = 10;
    local_348.DataPtr = L"bufferView";
    dVar9 = FJsonObject::GetNumberField((FJsonObject *)pTVar23,&local_348);
    uVar15 = (int)dVar9;
    if ((int)dVar9 < 0) goto LAB_14e64c726;
  }
  uStack_5d0 = 10;
  local_5d8 = L"byteOffset";
  local_338._12_4_ = uStack_5cc;
  local_338.Size = 10;
  local_338.DataPtr = L"byteOffset";
  uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteOffset");
  pTVar18 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>(pTVar23,uVar12,&local_338);
  if (((pTVar18 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar18->Object == (FJsonValue *)0x0)) ||
     (pTVar18->Object->Type != Number)) {
LAB_14e64c7c3:
    local_7b0 = 0;
  }
  else {
    local_5c8 = L"byteOffset";
    uStack_5c0 = 10;
    local_328._12_4_ = uStack_5bc;
    local_328.Size = 10;
    local_328.DataPtr = L"byteOffset";
    bVar10 = FJsonObject::TryGetNumberField((FJsonObject *)pTVar23,&local_328,local_778);
    if (!bVar10) goto LAB_14e64c7c3;
    local_7b0 = local_778[0];
  }
  pFVar3 = this->Asset;
  if ((int)uVar15 < (pFVar3->BufferViews).ArrayNum) {
    uVar29 = ~uVar15 >> 0x1f;
  }
  if (uVar29 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = (pFVar3->BufferViews).AllocatorInstance.Data;
  lVar21 = (longlong)(int)uVar15;
  lVar27 = (longlong)(int)local_res20;
  pFVar5 = this->Asset;
  uVar29 = uVar28;
  if ((int)local_res20 < (pFVar5->BufferViews).ArrayNum) {
    uVar29 = ~local_res20 >> 0x1f;
  }
  if (uVar29 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = this->Asset;
  local_228.Count = local_7a8;
  local_228.Indices.Count = local_7a8;
  pFVar7 = (pFVar5->BufferViews).AllocatorInstance.Data;
  local_228.bHasSparse = true;
  local_228.Indices.BufferView.Buffer.ByteLength = *(ulong64 *)(pFVar7 + lVar27 * 0x28);
  local_228.Indices.BufferView.Buffer.Data = *(uchar **)(pFVar7 + lVar27 * 0x28 + 8);
  local_228.Indices.BufferView.ByteOffset = *(ulong64 *)(pFVar7 + lVar27 * 0x28 + 0x10);
  local_228.Indices.BufferView.ByteLength = *(ulong64 *)(pFVar7 + lVar27 * 0x28 + 0x10 + 8);
  local_228.Indices.BufferView._32_8_ = *(undefined8 *)(pFVar7 + lVar27 * 0x28 + 0x20);
  local_228.Indices.ByteOffset = local_790;
  local_228.Values.BufferView.Buffer.ByteLength = *(ulong64 *)(pFVar4 + lVar21 * 0x28);
  local_228.Values.BufferView.Buffer.Data = *(uchar **)(pFVar4 + lVar21 * 0x28 + 8);
  local_228.Values.BufferView.ByteOffset = *(ulong64 *)(pFVar4 + lVar21 * 0x28 + 0x10);
  local_228.Values.BufferView.ByteLength = *(ulong64 *)(pFVar4 + lVar21 * 0x28 + 0x10 + 8);
  local_228.Values.BufferView._32_8_ = *(undefined8 *)(pFVar4 + lVar21 * 0x28 + 0x20);
  local_228.Values.ByteOffset = local_7b0;
  uVar29 = uVar28;
  if ((int)uVar11 < (pFVar6->BufferViews).ArrayNum) {
    uVar29 = ~uVar11 >> 0x1f;
  }
  local_228.Indices.ComponentType = EVar16;
  if (uVar29 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  piVar1 = &(pFVar3->Accessors).ArrayMax;
  pFVar4 = (pFVar6->BufferViews).AllocatorInstance.Data;
  iVar17 = (pFVar3->Accessors).ArrayNum;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8d0,&(pFVar3->Accessors).AllocatorInstance,piVar1);
  }
  (pFVar3->Accessors).ArrayNum = iVar17 + 1;
  FAccessor::FAccessor
            ((FAccessor *)((pFVar3->Accessors).AllocatorInstance.Data + (longlong)iVar17 * 0xd0),
             uVar2,(FBufferView *)(pFVar4 + (longlong)(int)uVar11 * 0x28),local_7a0,local_res18,
             EVar14,EVar13,local_res8,&local_228);
LAB_14e64d230:
  this_01 = (this->ExtensionsHandler).Ptr;
  iVar17 = (this->Asset->Accessors).ArrayNum;
  uVar29 = iVar17 - 1;
  if ((int)uVar29 < iVar17) {
    uVar28 = ~uVar29 >> 0x1f;
  }
  if (uVar28 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupAccessorExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FExtensionsHandler::CheckExtensions(this_01,param_1,&Extensions);
  return;
}

// SetupAnimation @ 14e64d3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupAnimation(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FAsset *pFVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FExtensionsHandler *this_00;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  TSharedPtr<FJsonValue,1> *pTVar17;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  longlong *plVar20;
  TSharedPtr<FJsonObject,1> *pTVar21;
  char *pcVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  atomic<unsigned_char> *paVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  double dVar30;
  double dVar31;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_350;
  FString local_340;
  undefined4 local_330;
  undefined4 uStack_32c;
  FScriptContainerElement *pFStack_328;
  FScriptContainerElement *local_320;
  FString local_318;
  FScriptContainerElement *local_308;
  int local_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *pFStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  FString local_2e8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_2c0;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1a8;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  pFVar3 = this->Asset;
  iVar10 = (pFVar3->Animations).ArrayNum;
  piVar1 = &(pFVar3->Animations).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x890,&(pFVar3->Animations).AllocatorInstance,piVar1);
  }
  uStack_1c0 = 4;
  (pFVar3->Animations).ArrayNum = iVar10 + 1;
  local_1c8 = L"name";
  pFVar26 = (pFVar3->Animations).AllocatorInstance.Data + (longlong)iVar10 * 0x90;
  local_308 = pFVar26 + 0x20;
  pFVar29 = pFVar26 + 0x10;
  local_2c8 = pFVar26 + 0x2c;
  *(undefined8 *)(pFVar26 + 0x40) = 0;
  *(undefined8 *)(pFVar26 + 0x48) = 0;
  pFVar28 = pFVar26 + 0x1c;
  *(undefined8 *)(pFVar26 + 0x68) = 0;
  local_78._12_4_ = uStack_1bc;
  local_78.Size = 4;
  *(undefined4 *)(pFVar26 + 0x7c) = 0;
  local_2c0 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)(pFVar26 + 0x30);
  *(undefined8 *)local_2c0 = 0;
  *(undefined8 *)(pFVar26 + 0x38) = 0;
  *(undefined8 *)(pFVar26 + 0x50) = 0;
  *(undefined8 *)pFVar26 = 0;
  *(undefined8 *)(pFVar26 + 8) = 0;
  *(FScriptContainerElement **)&pFVar29->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar26 + 0x18) = 0;
  *(int *)pFVar28 = 0;
  *(undefined8 *)&local_308->field_0x0 = 0;
  *(undefined4 *)(pFVar26 + 0x28) = 0;
  *(undefined4 *)local_2c8 = 0;
  *(undefined4 *)(pFVar26 + 0x58) = 0;
  *(undefined4 *)(pFVar26 + 0x5c) = 0x80;
  *(undefined4 *)(pFVar26 + 0x60) = 0xffffffff;
  *(undefined4 *)(pFVar26 + 100) = 0;
  *(undefined8 *)(pFVar26 + 0x70) = 0;
  *(undefined4 *)(pFVar26 + 0x78) = 0;
  *(undefined8 *)(pFVar26 + 0x80) = 0;
  *(undefined8 *)(pFVar26 + 0x88) = 0;
  local_78.DataPtr = L"name";
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar11,&local_78);
  if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
     (pTVar17->Object->Type != String)) {
    local_340.Data.ArrayNum = 0;
    local_340.Data.ArrayMax = 0;
    local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_1b8 = L"name";
    uStack_1b0 = 4;
    local_68._12_4_ = uStack_1ac;
    local_68.Size = 4;
    local_68.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_340,&local_68);
  }
  if (pFVar26 != (FScriptContainerElement *)&local_340) {
    if (*(void **)pFVar26 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar26);
    }
    *(FScriptContainerElement **)pFVar26 = local_340.Data.AllocatorInstance.Data;
    *(int *)(pFVar26 + 8) = local_340.Data.ArrayNum;
    local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar26 + 0xc) = local_340.Data.ArrayMax;
    local_340.Data.ArrayNum = 0;
    local_340.Data.ArrayMax = 0;
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  uStack_2b0 = 8;
  local_2b8 = L"samplers";
  local_158._12_4_ = uStack_2ac;
  local_158.Size = 8;
  local_158.DataPtr = L"samplers";
  pTVar18 = FJsonObject::GetArrayField(param_1,&local_158);
  uVar11 = pTVar18->ArrayNum;
  local_2d8 = pTVar18;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*(int *)pFVar28 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar11,(ForAnyElementType *)pFVar29,*(int *)(pFVar26 + 0x18),(int *)pFVar28);
  }
  uVar11 = pTVar18->ArrayNum;
  uVar19 = (ulonglong)(int)uVar11;
  pFVar27 = (pTVar18->AllocatorInstance).Data;
  local_2d0 = pFVar27 + uVar19 * 0x10;
  while( true ) {
    pFVar5 = local_2d0;
    if (pTVar18->ArrayNum != (int)uVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar27 == pFVar5) break;
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar20 = (longlong *)(**(code **)**(undefined8 **)pFVar27)();
    if ((*plVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar4 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*plVar20;
    uStack_2a0 = 5;
    local_2a8 = L"input";
    local_148._12_4_ = uStack_29c;
    local_148.Size = 5;
    local_148.DataPtr = L"input";
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"input");
    pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar12,&local_148);
    if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
       (pTVar17->Object->Type != Number)) {
LAB_14e64d729:
      uVar12 = 0xffffffff;
    }
    else {
      local_298 = L"input";
      uStack_290 = 5;
      local_138._12_4_ = uStack_28c;
      local_138.Size = 5;
      local_138.DataPtr = L"input";
      dVar30 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_138);
      uVar12 = (uint)dVar30;
      if ((int)uVar12 < 0) goto LAB_14e64d729;
    }
    local_288 = L"output";
    uStack_280 = 6;
    local_128._12_4_ = uStack_27c;
    local_128.Size = 6;
    local_128.DataPtr = L"output";
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"output");
    pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar13,&local_128);
    if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
       (pTVar17->Object->Type != Number)) {
LAB_14e64d7a4:
      uVar13 = 0xffffffff;
    }
    else {
      local_278 = L"output";
      uStack_270 = 6;
      local_118._12_4_ = uStack_26c;
      local_118.Size = 6;
      local_118.DataPtr = L"output";
      dVar30 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_118);
      uVar13 = (uint)dVar30;
      if ((int)uVar13 < 0) goto LAB_14e64d7a4;
    }
    if ((uVar12 == 0xffffffff) || (uVar13 == 0xffffffff)) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8658679761230364019>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                         ,0x28d,"(Input != INDEX_NONE) && (Output != INDEX_NONE)");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      pFVar3 = this->Asset;
      uVar14 = 0;
      if ((int)uVar13 < (pFVar3->Accessors).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (pFVar3->Accessors).AllocatorInstance.Data;
      pFVar3 = this->Asset;
      uVar14 = 0;
      if ((int)uVar12 < (pFVar3->Accessors).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFStack_328 = (pFVar3->Accessors).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xd0;
      local_330 = 0;
      local_320 = pFVar5 + (longlong)(int)uVar13 * 0xd0;
      ::FString::FString(&local_2e8,L"LINEAR");
      uStack_260 = 0xd;
      local_268 = L"interpolation";
      local_108._12_4_ = uStack_25c;
      local_108.Size = 0xd;
      local_108.DataPtr = L"interpolation";
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"interpolation");
      pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar12,&local_108);
      FVar23.Data = local_2e8.Data.AllocatorInstance.Data;
      if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0))
         || (pTVar17->Object->Type != String)) {
        local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar10 = local_2e8.Data.ArrayNum;
        local_350.Data.ArrayNum = iVar10;
        if (iVar10 == 0) {
          local_350.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,0,(ForAnyElementType *)&local_350,iVar10,&local_350.Data.ArrayMax);
          memcpy(local_350.Data.AllocatorInstance.Data,FVar23.Data,(longlong)iVar10 * 2);
        }
      }
      else {
        local_258 = L"interpolation";
        uStack_250 = 0xd;
        local_f8._12_4_ = uStack_24c;
        local_f8.Size = 0xd;
        local_f8.DataPtr = L"interpolation";
        FJsonObject::GetStringField((FJsonObject *)pTVar4,&local_350,&local_f8);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_350.Data.ArrayNum != 0) {
        FVar23.Data = local_350.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar23.Data,L"LINEAR");
      if (iVar10 == 0) {
        local_330 = 0;
      }
      else {
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_350.Data.ArrayNum != 0) {
          FVar23.Data = local_350.Data.AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar23.Data,L"STEP");
        if (iVar10 == 0) {
          local_330 = 1;
        }
        else {
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_350.Data.ArrayNum != 0) {
            FVar23.Data = local_350.Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar23.Data,L"CUBICSPLINE");
          if (iVar10 == 0) {
            local_330 = 2;
          }
        }
      }
      if (((*(FScriptContainerElement **)&pFVar29->field_0x0 <=
            (FScriptContainerElement *)&local_330) &&
          ((FScriptContainerElement *)&local_330 <
           *(FScriptContainerElement **)&pFVar29->field_0x0 + (longlong)*(int *)pFVar28 * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)(pFVar26 + 0x18);
      if (iVar10 == *(int *)pFVar28) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar29,(int *)pFVar28);
      }
      *(int *)(pFVar26 + 0x18) = iVar10 + 1;
      pFVar6 = *(FScriptContainerElement **)&pFVar29->field_0x0;
      pFVar5 = pFVar6 + (longlong)iVar10 * 0x18;
      *(ulonglong *)pFVar5 = CONCAT44(uStack_32c,local_330);
      *(FScriptContainerElement **)(pFVar5 + 8) = pFStack_328;
      *(FScriptContainerElement **)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = local_320;
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
    }
    pFVar27 = pFVar27 + 0x10;
    uVar19 = (ulonglong)uVar11;
    pTVar18 = local_2d8;
  }
  local_248 = L"channels";
  uStack_240 = 8;
  local_a8._12_4_ = uStack_23c;
  local_a8.Size = 8;
  local_a8.DataPtr = L"channels";
  pTVar18 = FJsonObject::GetArrayField(param_1,&local_a8);
  uVar11 = pTVar18->ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*(int *)local_2c8 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar11,(ForAnyElementType *)local_308,*(int *)&local_308[8].field_0x0,
               (int *)local_2c8);
  }
  uVar11 = pTVar18->ArrayNum;
  uVar19 = (ulonglong)(int)uVar11;
  pFVar29 = (pTVar18->AllocatorInstance).Data;
  pFVar28 = pFVar29 + uVar19 * 0x10;
  do {
    while( true ) {
      if (pTVar18->ArrayNum != (int)uVar19) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar29 == pFVar28) {
        local_1a8.Hash.InlineData[0] = '\0';
        local_1a8.Hash.InlineData[1] = '\0';
        local_1a8.Hash.InlineData[2] = '\0';
        local_1a8.Hash.InlineData[3] = '\0';
        local_1a8.Hash._padding_ = 0;
        local_1a8.Elements._16_8_ = 0;
        local_1a8.Elements._24_8_ = 0;
        local_1a8.HashSize = 0;
        local_1a8._76_4_ = 0;
        local_1a8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_1a8.Elements._48_8_ = _UNK_150631d98;
        local_1a8.Elements._0_8_ = 0;
        local_1a8.Elements._8_8_ = 0;
        local_1a8.Elements._32_8_ = 0;
        local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        GLTF::`anonymous_namespace'::ProcessExtras(param_1,local_2c0,&local_1a8);
        this_00 = (this->ExtensionsHandler).Ptr;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`GLTF::FExtensionsHandler::SetupAnimationExtensions'::__l2::
                 _dynamic_atexit_destructor_for__Extensions__);
          _Init_thread_footer(&::_TSS0);
        }
        FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
        return;
      }
      if ((*(longlong *)pFVar29 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar20 = (longlong *)(**(code **)**(undefined8 **)pFVar29)();
      if ((*plVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar4 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)*plVar20;
      local_238 = L"sampler";
      uStack_230 = 7;
      local_e8._12_4_ = uStack_22c;
      local_e8.Size = 7;
      local_e8.DataPtr = L"sampler";
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"sampler");
      pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar12,&local_e8);
      if (((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar17->Object != (FJsonValue *)0x0))
         && (pTVar17->Object->Type == Number)) break;
LAB_14e64e07f:
      pcVar22 = "Index != INDEX_NONE";
      iVar10 = 0x2ab;
      paVar25 = &bGEnsureHasExecuted<_8658679761230363989>;
LAB_14e64e093:
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar25,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                         ,iVar10,pcVar22);
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = (ulonglong)uVar11;
      pFVar29 = pFVar29 + 0x10;
    }
    local_228 = L"sampler";
    uStack_220 = 7;
    local_d8._12_4_ = uStack_21c;
    local_d8.Size = 7;
    local_d8.DataPtr = L"sampler";
    dVar30 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_d8);
    if ((int)dVar30 < 0) goto LAB_14e64e07f;
    local_218 = L"target";
    uStack_210 = 6;
    local_c8._12_4_ = uStack_20c;
    local_c8.Size = 6;
    local_c8.DataPtr = L"target";
    pTVar21 = FJsonObject::GetObjectField((FJsonObject *)pTVar4,&local_c8);
    if ((pTVar21->Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar4 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)pTVar21->Object;
    uStack_200 = 4;
    local_208 = L"node";
    local_b8._12_4_ = uStack_1fc;
    local_b8.Size = 4;
    local_b8.DataPtr = L"node";
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"node");
    pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar12,&local_b8);
    if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
       (pTVar17->Object->Type != Number)) {
LAB_14e64e069:
      pcVar22 = "NodeIndex != INDEX_NONE";
      iVar10 = 0x2b2;
      paVar25 = &bGEnsureHasExecuted<_8658679761230363982>;
      goto LAB_14e64e093;
    }
    local_1f8 = L"node";
    uStack_1f0 = 4;
    local_58._12_4_ = uStack_1ec;
    local_58.Size = 4;
    local_58.DataPtr = L"node";
    dVar31 = FJsonObject::GetNumberField((FJsonObject *)pTVar4,&local_58);
    uVar12 = (uint)dVar31;
    if ((int)uVar12 < 0) goto LAB_14e64e069;
    pFVar3 = this->Asset;
    uVar13 = 0;
    if ((int)uVar12 < (pFVar3->Nodes).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1e8 = L"path";
    pFStack_2f8 = (pFVar3->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x260;
    uStack_1e0 = 4;
    local_98._12_4_ = uStack_1dc;
    local_98.Size = 4;
    local_98.DataPtr = L"path";
    local_300 = (int)dVar30;
    uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"path");
    pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar4,uVar12,&local_98);
    if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
       (pTVar17->Object->Type != String)) {
      iVar10 = 0;
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.Data.ArrayNum = 0;
      local_318.Data.ArrayMax = 0;
    }
    else {
      local_1d8 = L"path";
      uStack_1d0 = 4;
      local_88._12_4_ = uStack_1cc;
      local_88.Size = 4;
      local_88.DataPtr = L"path";
      FJsonObject::GetStringField((FJsonObject *)pTVar4,&local_318,&local_88);
      iVar10 = local_318.Data.ArrayNum;
    }
    FVar23.Data = local_318.Data.AllocatorInstance.Data;
    FVar24.Data = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      FVar24.Data = local_318.Data.AllocatorInstance.Data;
    }
    iVar15 = wcscmp((wchar_t *)FVar24.Data,L"rotation");
    if (iVar15 == 0) {
LAB_14e64df93:
      uVar16 = 1;
    }
    else {
      FVar24.Data = (FScriptContainerElement *)L"";
      if (iVar10 != 0) {
        FVar24.Data = FVar23.Data;
      }
      iVar15 = wcscmp((wchar_t *)FVar24.Data,L"scale");
      if (iVar15 == 0) {
        uVar16 = 2;
      }
      else {
        FVar24.Data = (FScriptContainerElement *)L"";
        if (iVar10 != 0) {
          FVar24.Data = FVar23.Data;
        }
        iVar15 = wcscmp((wchar_t *)FVar24.Data,L"translation");
        uVar16 = 0;
        if (iVar15 != 0) {
          FVar24.Data = (FScriptContainerElement *)L"";
          if (iVar10 != 0) {
            FVar24.Data = FVar23.Data;
          }
          iVar10 = wcscmp((wchar_t *)FVar24.Data,L"weights");
          if (iVar10 != 0) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8036928033329774488>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ConversionUtilities.h"
                               ,0x68,"false");
            FVar23.Data = local_318.Data.AllocatorInstance.Data;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            goto LAB_14e64df93;
          }
          uVar16 = 3;
        }
      }
    }
    local_2f0 = uVar16;
    if (FVar23.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar23.Data);
    }
    pFVar27 = local_308;
    pFVar26 = local_308 + 0xc;
    if (((*(int **)&local_308->field_0x0 <= &local_300) &&
        (&local_300 < *(int **)&local_308->field_0x0 + (longlong)*(int *)pFVar26 * 6)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = *(int *)&pFVar27[8].field_0x0;
    if (iVar10 == *(int *)pFVar26) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)pFVar27,(int *)pFVar26);
    }
    pFVar29 = pFVar29 + 0x10;
    *(int *)&pFVar27[8].field_0x0 = iVar10 + 1;
    lVar7 = *(longlong *)&pFVar27->field_0x0;
    puVar2 = (undefined8 *)(lVar7 + (longlong)iVar10 * 0x18);
    *puVar2 = CONCAT44(uStack_2fc,local_300);
    puVar2[1] = pFStack_2f8;
    *(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10) = CONCAT44(uStack_2ec,local_2f0);
    uVar19 = (ulonglong)uVar11;
  } while( true );
}

// SetupBuffer @ 14e64ea40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FFileReader::SetupBuffer(FFileReader *this,FJsonObject *param_1,FString *param_2)

{
  int *piVar1;
  longlong lVar2;
  FAsset *pFVar3;
  longlong lVar4;
  FExtensionsHandler *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  FText *pFVar12;
  FString *pFVar13;
  IFileManager *pIVar14;
  longlong *plVar15;
  ulonglong uVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  uint local_res8 [2];
  FScriptContainerElement *local_res10;
  ulonglong local_res20;
  FString local_198;
  FString local_188;
  FString local_178;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FText local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uStack_160 = 10;
  local_168 = L"byteLength";
  local_118._12_4_ = uStack_15c;
  local_118.Size = 10;
  local_118.DataPtr = L"byteLength";
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteLength");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar8,&local_118);
  if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
     (pTVar11->Object->Type != Number)) {
LAB_14e64eaec:
    uVar22 = 0;
  }
  else {
    local_158 = L"byteLength";
    uStack_150 = 10;
    local_108._12_4_ = uStack_14c;
    local_108.Size = 10;
    local_108.DataPtr = L"byteLength";
    bVar6 = FJsonObject::TryGetNumberField(param_1,&local_108,&local_res20);
    uVar22 = local_res20;
    if (!bVar6) goto LAB_14e64eaec;
  }
  pFVar3 = this->Asset;
  piVar1 = &(pFVar3->Buffers).ArrayMax;
  iVar9 = (pFVar3->Buffers).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar3->Buffers).AllocatorInstance,piVar1);
  }
  (pFVar3->Buffers).ArrayNum = iVar9 + 1;
  pFVar23 = (pFVar3->Buffers).AllocatorInstance.Data;
  *(ulonglong *)(pFVar23 + (longlong)iVar9 * 0x10) = uVar22;
  *(undefined8 *)(pFVar23 + (longlong)iVar9 * 0x10 + 8) = 0;
  pFVar3 = this->Asset;
  iVar9 = (pFVar3->Buffers).ArrayNum;
  uVar20 = iVar9 - 1;
  uVar8 = 0;
  if ((int)uVar20 < iVar9) {
    uVar8 = ~uVar20 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = false;
  pFVar23 = (pFVar3->Buffers).AllocatorInstance.Data + (longlong)(pFVar3->Buffers).ArrayNum * 0x10;
  local_148 = L"uri";
  uStack_140 = 3;
  local_f8._12_4_ = uStack_13c;
  local_f8.Size = 3;
  local_f8.DataPtr = L"uri";
  local_res10 = pFVar23;
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"uri");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar8,&local_f8);
  if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
     (pTVar11->Object->Type != String)) {
    uVar8 = (uint)(this->Asset->BinData).ArrayNum;
    if (uVar8 == 0) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"InterchangeGLTFReader",L"BINChunkMissing",
                           L"Buffer from BIN chunk is missing or empty.");
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      iVar9 = (int)this->_padding_;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar9 + 1;
      lVar4 = this->_padding_;
      lVar2 = (longlong)iVar9 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar12);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    else if (uVar8 < uVar22) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"InterchangeGLTFReader",L"BINChunkTooSmall",
                           L"Buffer from BIN chunk is too small.");
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      iVar9 = (int)this->_padding_;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar9 + 1;
      lVar4 = this->_padding_;
      lVar2 = (longlong)iVar9 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar12);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    else {
      *(FScriptContainerElement **)(pFVar23 + -8) = (this->Asset->BinData).AllocatorInstance.Data;
    }
    goto LAB_14e64f0e8;
  }
  local_138 = L"uri";
  uStack_130 = 3;
  local_e8._12_4_ = uStack_12c;
  local_e8.Size = 3;
  local_e8.DataPtr = L"uri";
  FJsonObject::GetStringField(param_1,&local_198,&local_e8);
  bVar7 = ::FString::StartsWith(&local_198,L"data:",5,IgnoreCase);
  if (bVar7) {
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_res8[0] = 0;
    bVar7 = GLTF::`anonymous_namespace'::DecodeDataURI
                      (&local_198,&local_188,this->CurrentBufferOffset,local_res8);
    FVar21.Data = local_188.Data.AllocatorInstance.Data;
    if (bVar7) {
      iVar9 = local_188.Data.ArrayNum;
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_188.Data.ArrayNum != 0) {
        FVar19.Data = local_188.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"application/octet-stream");
      if (iVar10 != 0) {
        FVar19.Data = (FScriptContainerElement *)L"";
        if (iVar9 != 0) {
          FVar19.Data = FVar21.Data;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"application/gltf-buffer");
        if (iVar9 != 0) goto LAB_14e64ece8;
      }
      if (local_res8[0] != uVar22) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8658679761230364472>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                           ,200,"DataSize == ByteLength");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14e64ece8;
      }
      bVar6 = true;
    }
    else {
LAB_14e64ece8:
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_d8,L"InterchangeGLTFReader",L"BufferDecodingProblem",
                           L"Problem decoding buffer from data URI.");
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      iVar9 = (int)this->_padding_;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar9 + 1;
      lVar4 = this->_padding_;
      lVar2 = (longlong)iVar9 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar12);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
    }
    pFVar23 = local_res10;
    if (FVar21.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar21.Data);
      pFVar23 = local_res10;
    }
  }
  else {
    local_128 = local_198.Data.AllocatorInstance.Data;
    iStack_120 = local_198.Data.ArrayNum + -1;
    if (local_198.Data.ArrayNum == 0) {
      iStack_120 = 0;
    }
    local_c8._12_4_ = uStack_11c;
    local_c8.Size = iStack_120;
    local_c8.DataPtr = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    pFVar13 = FGenericPlatformHttp::UrlDecode(&local_b8,&local_c8);
    if (&local_198 != pFVar13) {
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      local_198.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_198.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::operator/(&local_178,param_2,&local_198);
    pIVar14 = IFileManager::Get();
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar21.Data = local_178.Data.AllocatorInstance.Data;
    }
    plVar15 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,FVar21.Data,0);
    if (plVar15 == (longlong *)0x0) {
      pFVar12 = FText::FromString(&local_58,&local_178);
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"InterchangeGLTFReader",L"LoadingFileFailed",
                           L"Could not load file: \'{0}\'");
      pFVar18 = FTextFormat::FTextFormat(&local_48,pFVar17,Default);
      pFVar12 = FText::Format<FText>(&local_98,pFVar18,pFVar12);
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      iVar9 = (int)this->_padding_;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      *(int *)&this->_padding_ = iVar9 + 1;
      lVar4 = this->_padding_;
      lVar2 = (longlong)iVar9 * 3 + 1;
      *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
      FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar12);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      uVar16 = (**(code **)(*plVar15 + 0x30))(plVar15);
      if (uVar22 == uVar16) {
        (**(code **)(*plVar15 + 0x188))(plVar15,this->CurrentBufferOffset,uVar22);
        bVar6 = true;
      }
      else {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_a8,L"InterchangeGLTFReader",L"NonMatchingBufferFileSize",
                             L"Buffer file size does not match.");
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        iVar9 = (int)this->_padding_;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        *(int *)&this->_padding_ = iVar9 + 1;
        lVar4 = this->_padding_;
        lVar2 = (longlong)iVar9 * 3 + 1;
        *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
        FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar12);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      (**(code **)(*plVar15 + 0x210))(plVar15);
      (**(code **)*plVar15)(plVar15,1);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    *(uchar **)(pFVar23 + -8) = this->CurrentBufferOffset;
    this->CurrentBufferOffset = this->CurrentBufferOffset + uVar22;
  }
LAB_14e64f0e8:
  this_00 = (this->ExtensionsHandler).Ptr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GLTF::FExtensionsHandler::SetupBufferExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
  return;
}

// SetupBufferView @ 14e64f200

void __thiscall GLTF::FFileReader::SetupBufferView(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  FAsset *pFVar2;
  FExtensionsHandler *this_00;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulong64 local_res8;
  ulong64 local_res10;
  ulong64 local_res18;
  ulong64 local_res20;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  uVar9 = this->BufferCount;
  local_c8._12_4_ = uStack_13c;
  local_c8.Size = 6;
  local_c8.DataPtr = L"buffer";
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"buffer");
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar8,&local_c8);
  if (((pTVar12 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar12->Object == (FJsonValue *)0x0)) ||
     (pTVar12->Object->Type != Number)) {
LAB_14e64f293:
    uVar8 = uVar9;
  }
  else {
    local_b8._12_4_ = uStack_12c;
    local_b8.Size = 6;
    local_b8.DataPtr = L"buffer";
    dVar4 = FJsonObject::GetNumberField(param_1,&local_b8);
    uVar8 = (int)dVar4;
    if ((int)dVar4 < 0) goto LAB_14e64f293;
  }
  if (this->BufferCount <= uVar8) {
    return;
  }
  local_a8._12_4_ = uStack_11c;
  local_a8.Size = 10;
  local_a8.DataPtr = L"byteOffset";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteOffset");
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_a8);
  uVar9 = 0;
  if (((pTVar12 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar12->Object == (FJsonValue *)0x0)) ||
     (pTVar12->Object->Type != Number)) {
LAB_14e64f343:
    local_res8 = 0;
  }
  else {
    local_98._12_4_ = uStack_10c;
    local_98.Size = 10;
    local_98.DataPtr = L"byteOffset";
    bVar7 = FJsonObject::TryGetNumberField(param_1,&local_98,&local_res18);
    if (!bVar7) goto LAB_14e64f343;
    local_res8 = local_res18;
  }
  local_88._12_4_ = uStack_fc;
  local_88.Size = 10;
  local_88.DataPtr = L"byteLength";
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteLength");
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar10,&local_88);
  if (((pTVar12 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar12->Object == (FJsonValue *)0x0)) ||
     (pTVar12->Object->Type != Number)) {
LAB_14e64f3d1:
    local_res10 = 0;
  }
  else {
    local_78._12_4_ = uStack_ec;
    local_78.Size = 10;
    local_78.DataPtr = L"byteLength";
    bVar7 = FJsonObject::TryGetNumberField(param_1,&local_78,&local_res20);
    if (!bVar7) goto LAB_14e64f3d1;
    local_res10 = local_res20;
  }
  local_68._12_4_ = uStack_dc;
  local_68.Size = 10;
  local_68.DataPtr = L"byteStride";
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"byteStride");
  pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar10,&local_68);
  if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0)) &&
     (pTVar12->Object->Type == Number)) {
    local_58._12_4_ = uStack_cc;
    local_58.Size = 10;
    local_58.DataPtr = L"byteStride";
    dVar4 = FJsonObject::GetNumberField(param_1,&local_58);
    uVar10 = (int)dVar4;
    if (-1 < (int)dVar4) goto LAB_14e64f44e;
  }
  uVar10 = uVar9;
LAB_14e64f44e:
  pFVar2 = this->Asset;
  uVar14 = uVar9;
  if ((int)uVar8 < (pFVar2->Buffers).ArrayNum) {
    uVar14 = ~uVar8 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar11 = (pFVar2->BufferViews).ArrayNum;
  piVar1 = &(pFVar2->BufferViews).ArrayMax;
  pFVar15 = (pFVar2->Buffers).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(pFVar2->BufferViews).AllocatorInstance,piVar1);
  }
  (pFVar2->BufferViews).ArrayNum = iVar11 + 1;
  uVar5 = *(undefined8 *)pFVar15;
  uVar6 = *(undefined8 *)(pFVar15 + 8);
  lVar13 = (longlong)iVar11;
  pFVar15 = (pFVar2->BufferViews).AllocatorInstance.Data;
  *(ulong64 *)(pFVar15 + lVar13 * 0x28 + 0x10) = local_res8;
  *(uint *)(pFVar15 + lVar13 * 0x28 + 0x20) = uVar10;
  *(ulong64 *)(pFVar15 + lVar13 * 0x28 + 0x18) = local_res10;
  *(undefined8 *)(pFVar15 + lVar13 * 0x28) = uVar5;
  *(undefined8 *)(pFVar15 + lVar13 * 0x28 + 8) = uVar6;
  this_00 = (this->ExtensionsHandler).Ptr;
  iVar11 = (this->Asset->BufferViews).ArrayNum;
  uVar8 = iVar11 - 1;
  if ((int)uVar8 < iVar11) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GLTF::FExtensionsHandler::SetupBufferViewExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
  return;
}

// SetupCamera @ 14e64f670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall GLTF::FFileReader::SetupCamera(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  FAsset *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FExtensionsHandler *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  TSharedPtr<FJsonObject,1> *pTVar14;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  FString local_448;
  FString local_438;
  FString local_428;
  wchar_t *local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  wchar_t *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  wchar_t *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  wchar_t *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FScriptContainerElement *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  wchar_t *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  wchar_t *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  wchar_t *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  wchar_t *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  wchar_t *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  wchar_t *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_298;
  TStringView<wchar_t> local_248;
  FText local_238;
  FText local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FText local_b8;
  FText local_a8;
  TStringView<wchar_t> local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58 [3];
  
  pFVar2 = this->Asset;
  pFVar17 = (pFVar2->Nodes).AllocatorInstance.Data;
  uVar9 = (pFVar2->Cameras).ArrayNum;
  pFVar20 = pFVar17 + (longlong)(pFVar2->Nodes).ArrayNum * 0x260;
  for (; (pFVar18 = (FScriptContainerElement *)0x0, pFVar17 != pFVar20 &&
         (pFVar18 = pFVar17, uVar9 != *(uint *)(pFVar17 + 0x8c))); pFVar17 = pFVar17 + 0x260) {
  }
  uStack_410 = 4;
  local_418 = L"name";
  local_138._12_4_ = uStack_40c;
  local_138.Size = 4;
  local_138.DataPtr = L"name";
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar7,&local_138);
  if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
     (pTVar10->Object->Type != String)) {
    local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.Data.ArrayNum = 0;
    local_428.Data.ArrayMax = 0;
  }
  else {
    local_408 = L"name";
    uStack_400 = 4;
    local_248._12_4_ = uStack_3fc;
    local_248.Size = 4;
    local_248.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_428,&local_248);
  }
  if (pFVar18 == (FScriptContainerElement *)0x0) {
    pFVar11 = FText::FromString(local_58,&local_428);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_228,L"InterchangeGLTFReader",L"NoCameraNodeFound",
                         L"No camera node found for camera {0}(\'{1}\')");
    pFVar13 = FTextFormat::FTextFormat(&local_88,pFVar12,Default);
    pFVar11 = FText::Format<unsigned_int,FText>(&local_238,pFVar13,uVar9,pFVar11);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar8 = (int)this->_padding_;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    *(int *)&this->_padding_ = iVar8 + 1;
    lVar3 = this->_padding_;
    lVar19 = (longlong)iVar8 * 3 + 1;
    *(undefined4 *)(lVar3 + -8 + lVar19 * 8) = 1;
    FText::FText((FText *)(lVar3 + lVar19 * 8),pFVar11);
    if (local_238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
    }
    if (local_228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar2 = this->Asset;
    piVar1 = &(pFVar2->Cameras).ArrayMax;
    iVar8 = (pFVar2->Cameras).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&(pFVar2->Cameras).AllocatorInstance,piVar1);
    }
    uStack_3f0 = 4;
    (pFVar2->Cameras).ArrayNum = iVar8 + 1;
    pFVar17 = (pFVar2->Cameras).AllocatorInstance.Data;
    lVar19 = (longlong)iVar8 * 0x90;
    local_3f8 = L"name";
    local_218._12_4_ = uStack_3ec;
    local_218.Size = 4;
    local_218.DataPtr = L"name";
    *(FScriptContainerElement **)(pFVar17 + lVar19) = pFVar18;
    pFVar20 = pFVar17 + lVar19 + 8;
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)(pFVar20 + 8) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x20) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x24) = 0x42c80000;
    pFVar17[lVar19 + 0x28] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar17 + lVar19 + 0x30) = 0;
    *(undefined8 *)(pFVar17 + lVar19 + 0x38) = 0;
    *(undefined8 *)(pFVar17 + lVar19 + 0x50) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x58) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x5c) = 0x80;
    *(undefined4 *)(pFVar17 + lVar19 + 0x60) = 0xffffffff;
    *(undefined4 *)(pFVar17 + lVar19 + 100) = 0;
    *(undefined8 *)(pFVar17 + lVar19 + 0x70) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x78) = 0;
    *(undefined8 *)(pFVar17 + lVar19 + 0x80) = 0;
    *(undefined8 *)(pFVar17 + lVar19 + 0x88) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x18) = 0;
    *(undefined4 *)(pFVar17 + lVar19 + 0x1c) = 0x3f800000;
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar9,&local_218);
    if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
       (pTVar10->Object->Type != String)) {
      local_438.Data.ArrayNum = 0;
      local_438.Data.ArrayMax = 0;
      local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      uStack_3e0 = 4;
      local_3e8 = L"name";
      local_208._12_4_ = uStack_3dc;
      local_208.Size = 4;
      local_208.DataPtr = L"name";
      FJsonObject::GetStringField(param_1,&local_438,&local_208);
    }
    if (pFVar20 != (FScriptContainerElement *)&local_438) {
      if (*(void **)pFVar20 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar20);
      }
      *(FScriptContainerElement **)pFVar20 = local_438.Data.AllocatorInstance.Data;
      *(int *)(pFVar20 + 8) = local_438.Data.ArrayNum;
      local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar20 + 0xc) = local_438.Data.ArrayMax;
      local_438.Data.ArrayNum = 0;
      local_438.Data.ArrayMax = 0;
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    uStack_3d0 = 4;
    local_3d8 = L"type";
    local_1f8._12_4_ = uStack_3cc;
    local_1f8.Size = 4;
    local_1f8.DataPtr = L"type";
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"type");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar9,&local_1f8);
    if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
       (pTVar10->Object->Type != String)) {
      local_448.Data.ArrayMax = 0;
      local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_448.Data.ArrayNum = 0;
    }
    else {
      local_3c8 = L"type";
      uStack_3c0 = 4;
      local_1e8._12_4_ = uStack_3bc;
      local_1e8.Size = 4;
      local_1e8.DataPtr = L"type";
      FJsonObject::GetStringField(param_1,&local_448,&local_1e8);
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_448.Data.ArrayNum != 0) {
      FVar16.Data = local_448.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"perspective");
    if (iVar8 == 0) {
      local_3b8 = local_448.Data.AllocatorInstance.Data;
      iStack_3b0 = local_448.Data.ArrayNum + -1;
      if (local_448.Data.ArrayNum == 0) {
        iStack_3b0 = 0;
      }
      local_1d8._12_4_ = uStack_3ac;
      local_1d8.Size = iStack_3b0;
      local_1d8.DataPtr = (wchar_t *)local_448.Data.AllocatorInstance.Data;
      pTVar14 = FJsonObject::GetObjectField(param_1,&local_1d8);
      if ((pTVar14->Object == (FJsonObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar15 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)pTVar14->Object;
      uStack_3a0 = 5;
      local_3a8 = L"znear";
      local_1c8._12_4_ = uStack_39c;
      local_1c8.Size = 5;
      local_1c8.DataPtr = L"znear";
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"znear");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_1c8);
      fVar23 = 0.0;
      if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
         || (pTVar10->Object->Type != Number)) {
        fVar22 = 0.0;
      }
      else {
        local_398 = L"znear";
        uStack_390 = 5;
        local_1b8._12_4_ = uStack_38c;
        local_1b8.Size = 5;
        local_1b8.DataPtr = L"znear";
        dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_1b8);
        fVar22 = (float)dVar21;
      }
      uStack_380 = 4;
      local_388 = L"zfar";
      local_1a8._12_4_ = uStack_37c;
      local_1a8.Size = 4;
      local_1a8.DataPtr = L"zfar";
      *(float *)(pFVar17 + lVar19 + 0x20) = fVar22;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"zfar");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_1a8);
      if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
         || (pTVar10->Object->Type != Number)) {
        fVar22 = fVar22 + __real_41200000;
      }
      else {
        local_378 = L"zfar";
        uStack_370 = 4;
        local_198._12_4_ = uStack_36c;
        local_198.Size = 4;
        local_198.DataPtr = L"zfar";
        dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_198);
        fVar22 = (float)dVar21;
      }
      uStack_360 = 0xb;
      local_368 = L"aspectRatio";
      local_188._12_4_ = uStack_35c;
      local_188.Size = 0xb;
      local_188.DataPtr = L"aspectRatio";
      *(float *)(pFVar17 + lVar19 + 0x24) = fVar22;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"aspectRatio");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_188);
      fVar22 = __real_3f800000;
      if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
         && (pTVar10->Object->Type == Number)) {
        local_358 = L"aspectRatio";
        uStack_350 = 0xb;
        local_178._12_4_ = uStack_34c;
        local_178.Size = 0xb;
        local_178.DataPtr = L"aspectRatio";
        dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_178);
        fVar22 = (float)dVar21;
      }
      uStack_340 = 4;
      local_348 = L"yfov";
      local_168._12_4_ = uStack_33c;
      local_168.Size = 4;
      local_168.DataPtr = L"yfov";
      *(float *)(pFVar17 + lVar19 + 0x1c) = fVar22;
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"yfov");
      pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_168);
      if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
         && (pTVar10->Object->Type == Number)) {
        local_338 = L"yfov";
        uStack_330 = 4;
        local_158._12_4_ = uStack_32c;
        local_158.Size = 4;
        local_158.DataPtr = L"yfov";
        dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_158);
        fVar23 = (float)dVar21;
      }
      *(float *)(pFVar17 + lVar19 + 0x18) = fVar23;
      pFVar17[lVar19 + 0x28] = (FScriptContainerElement)0x1;
    }
    else {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_448.Data.ArrayNum != 0) {
        FVar16.Data = local_448.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"orthographic");
      if (iVar8 == 0) {
        local_328 = local_448.Data.AllocatorInstance.Data;
        iStack_320 = local_448.Data.ArrayNum + -1;
        if (local_448.Data.ArrayNum == 0) {
          iStack_320 = 0;
        }
        local_148._12_4_ = uStack_31c;
        local_148.Size = iStack_320;
        local_148.DataPtr = (wchar_t *)local_448.Data.AllocatorInstance.Data;
        pTVar14 = FJsonObject::GetObjectField(param_1,&local_148);
        pTVar15 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                   *)TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(pTVar14);
        uStack_310 = 5;
        local_318 = L"znear";
        local_c8._12_4_ = uStack_30c;
        local_c8.Size = 5;
        local_c8.DataPtr = L"znear";
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"znear");
        pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_c8);
        fVar23 = 0.0;
        if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
           || (pTVar10->Object->Type != Number)) {
          fVar22 = 0.0;
        }
        else {
          local_308 = L"znear";
          uStack_300 = 5;
          local_128._12_4_ = uStack_2fc;
          local_128.Size = 5;
          local_128.DataPtr = L"znear";
          dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_128);
          fVar22 = (float)dVar21;
        }
        uStack_2f0 = 4;
        local_2f8 = L"zfar";
        local_118._12_4_ = uStack_2ec;
        local_118.Size = 4;
        local_118.DataPtr = L"zfar";
        *(float *)(pFVar17 + lVar19 + 0x20) = fVar22;
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"zfar");
        pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_118);
        if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
           || (pTVar10->Object->Type != Number)) {
          fVar22 = fVar22 + __real_41200000;
        }
        else {
          local_2e8 = L"zfar";
          uStack_2e0 = 4;
          local_108._12_4_ = uStack_2dc;
          local_108.Size = 4;
          local_108.DataPtr = L"zfar";
          dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_108);
          fVar22 = (float)dVar21;
        }
        uStack_2d0 = 4;
        local_2d8 = L"xmag";
        local_f8._12_4_ = uStack_2cc;
        local_f8.Size = 4;
        local_f8.DataPtr = L"xmag";
        *(float *)(pFVar17 + lVar19 + 0x24) = fVar22;
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"xmag");
        pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_f8);
        if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0))
           || (pTVar10->Object->Type != Number)) {
          fVar22 = 0.0;
        }
        else {
          local_2c8 = L"xmag";
          uStack_2c0 = 4;
          local_e8._12_4_ = uStack_2bc;
          local_e8.Size = 4;
          local_e8.DataPtr = L"xmag";
          dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_e8);
          fVar22 = (float)dVar21;
        }
        uStack_2b0 = 4;
        local_2b8 = L"ymag";
        local_d8._12_4_ = uStack_2ac;
        local_d8.Size = 4;
        local_d8.DataPtr = L"ymag";
        *(float *)(pFVar17 + lVar19 + 0x18) = fVar22;
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"ymag");
        pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(pTVar15,uVar9,&local_d8);
        if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0))
           && (pTVar10->Object->Type == Number)) {
          local_2a8 = L"ymag";
          uStack_2a0 = 4;
          local_98._12_4_ = uStack_29c;
          local_98.Size = 4;
          local_98.DataPtr = L"ymag";
          dVar21 = FJsonObject::GetNumberField((FJsonObject *)pTVar15,&local_98);
          fVar23 = (float)dVar21;
        }
        *(float *)(pFVar17 + lVar19 + 0x1c) = fVar23;
        pFVar17[lVar19 + 0x28] = (FScriptContainerElement)0x0;
      }
      else {
        pFVar11 = FText::FromString(&local_78,&local_448);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_a8,L"InterchangeGLTFReader",L"InvalidCameraType",
                             L"Invalid camera type: {0}");
        pFVar13 = FTextFormat::FTextFormat(&local_68,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_b8,pFVar13,pFVar11);
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        iVar8 = (int)this->_padding_;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        *(int *)&this->_padding_ = iVar8 + 1;
        lVar4 = this->_padding_;
        lVar3 = (longlong)iVar8 * 3 + 1;
        *(undefined4 *)(lVar4 + -8 + lVar3 * 8) = 2;
        FText::FText((FText *)(lVar4 + lVar3 * 8),pFVar11);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
    }
    local_298.Hash.InlineData[0] = '\0';
    local_298.Hash.InlineData[1] = '\0';
    local_298.Hash.InlineData[2] = '\0';
    local_298.Hash.InlineData[3] = '\0';
    local_298.Hash._padding_ = 0;
    local_298.Elements._16_8_ = 0;
    local_298.Elements._24_8_ = 0;
    local_298.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_298.Elements._48_8_ = _UNK_150631d98;
    local_298.HashSize = 0;
    local_298._76_4_ = 0;
    local_298.Elements._0_8_ = 0;
    local_298.Elements._8_8_ = 0;
    local_298.Elements._32_8_ = 0;
    local_298.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    GLTF::`anonymous_namespace'::ProcessExtras
              (param_1,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)(pFVar17 + lVar19 + 0x30),&local_298);
    this_00 = (this->ExtensionsHandler).Ptr;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`GLTF::FExtensionsHandler::SetupCameraExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
    FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupImage @ 14e650280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
GLTF::FFileReader::SetupImage(FFileReader *this,FJsonObject *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FExtensionsHandler *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  EFormat EVar13;
  uint uVar14;
  TSharedPtr<FJsonValue,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FText *pFVar17;
  FScriptContainerElement *pFVar18;
  IFileManager *pIVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  wchar_t *pwVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  uint local_res10 [2];
  FString *local_res18;
  char local_res20;
  FString local_248;
  FString local_238;
  FString local_228;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_218;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_178;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FText local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  pFVar3 = this->Asset;
  iVar10 = (pFVar3->Images).ArrayNum;
  piVar2 = &(pFVar3->Images).ArrayMax;
  local_res18 = param_2;
  local_res20 = param_3;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a8,&(pFVar3->Images).AllocatorInstance,piVar2);
  }
  uStack_200 = 4;
  (pFVar3->Images).ArrayNum = iVar10 + 1;
  local_208 = L"name";
  pFVar25 = (pFVar3->Images).AllocatorInstance.Data + (longlong)iVar10 * 0xa8;
  local_128._12_4_ = uStack_1fc;
  local_128.Size = 4;
  local_128.DataPtr = L"name";
  *(undefined8 *)pFVar25 = 0;
  local_218 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)(pFVar25 + 0x48);
  *(undefined8 *)(pFVar25 + 8) = 0;
  pFVar18 = pFVar25 + 0x10;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = pFVar25 + 0x28;
  *(undefined8 *)(pFVar25 + 0x18) = 0;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)(pFVar25 + 0x30) = 0;
  *(undefined4 *)(pFVar25 + 0x38) = 0;
  *(undefined8 *)(pFVar25 + 0x40) = 0;
  *(undefined8 *)local_218 = 0;
  *(undefined8 *)(pFVar25 + 0x50) = 0;
  *(undefined8 *)(pFVar25 + 0x68) = 0;
  *(undefined4 *)(pFVar25 + 0x70) = 0;
  *(undefined4 *)(pFVar25 + 0x74) = 0x80;
  *(undefined4 *)(pFVar25 + 0x78) = 0xffffffff;
  *(undefined4 *)(pFVar25 + 0x7c) = 0;
  *(undefined8 *)(pFVar25 + 0x88) = 0;
  *(undefined4 *)(pFVar25 + 0x90) = 0;
  *(undefined8 *)(pFVar25 + 0x98) = 0;
  *(undefined8 *)(pFVar25 + 0xa0) = 0;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar11,&local_128);
  if (((pTVar15 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar15->Object == (FJsonValue *)0x0)) ||
     (pTVar15->Object->Type != String)) {
    local_248.Data.ArrayNum = 0;
    local_248.Data.ArrayMax = 0;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_1f8 = L"name";
    uStack_1f0 = 4;
    local_118._12_4_ = uStack_1ec;
    local_118.Size = 4;
    local_118.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_248,&local_118);
  }
  if (pFVar25 != (FScriptContainerElement *)&local_248) {
    if (*(void **)pFVar25 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar25);
    }
    *(FScriptContainerElement **)pFVar25 = local_248.Data.AllocatorInstance.Data;
    *(int *)(pFVar25 + 8) = local_248.Data.ArrayNum;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar25 + 0xc) = local_248.Data.ArrayMax;
    local_248.Data.ArrayNum = 0;
    local_248.Data.ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  uStack_1e0 = 3;
  local_1e8 = L"uri";
  local_108._12_4_ = uStack_1dc;
  local_108.Size = 3;
  local_108.DataPtr = L"uri";
  bVar9 = false;
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"uri");
  pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar11,&local_108);
  if (((pTVar15 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar15->Object == (FJsonValue *)0x0)) ||
     (pTVar15->Object->Type != String)) {
    uStack_1b0 = 10;
    local_1b8 = L"bufferView";
    local_88._12_4_ = uStack_1ac;
    local_88.Size = 10;
    local_88.DataPtr = L"bufferView";
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"bufferView");
    pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar11,&local_88);
    if (((pTVar15 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar15->Object != (FJsonValue *)0x0)) &&
       (pTVar15->Object->Type == Number)) {
      local_1a8 = L"bufferView";
      uStack_1a0 = 10;
      local_78._12_4_ = uStack_19c;
      local_78.Size = 10;
      local_78.DataPtr = L"bufferView";
      dVar26 = FJsonObject::GetNumberField(param_1,&local_78);
      uVar11 = (uint)dVar26;
      if ((-1 < (int)uVar11) && ((int)uVar11 < (this->Asset->BufferViews).ArrayNum)) {
        uStack_190 = 8;
        local_198 = L"mimeType";
        local_68._12_4_ = uStack_18c;
        local_68.Size = 8;
        local_68.DataPtr = L"mimeType";
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"mimeType");
        pTVar15 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>
                            ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              *)param_1,uVar14,&local_68);
        if ((pTVar15 == (TSharedPtr<FJsonValue,1> *)0x0) ||
           ((pTVar15->Object == (FJsonValue *)0x0 || (pTVar15->Object->Type != String)))) {
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
        }
        else {
          local_188 = L"mimeType";
          uStack_180 = 8;
          local_58._12_4_ = uStack_17c;
          local_58.Size = 8;
          local_58.DataPtr = L"mimeType";
          FJsonObject::GetStringField(param_1,&local_228,&local_58);
        }
        FVar7.Data = local_228.Data.AllocatorInstance.Data;
        EVar13 = ImageFormatFromMimeType(&local_228);
        *(EFormat *)(pFVar25 + 0x20) = EVar13;
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
        }
        pFVar3 = this->Asset;
        uVar14 = 0;
        if ((int)uVar11 < (pFVar3->BufferViews).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = (pFVar3->BufferViews).AllocatorInstance.Data;
        lVar22 = (longlong)(int)uVar11;
        *(undefined4 *)(pFVar25 + 0x38) = *(undefined4 *)(pFVar18 + lVar22 * 0x28 + 0x18);
        *(longlong *)(pFVar25 + 0x40) =
             *(longlong *)(pFVar18 + lVar22 * 0x28 + 0x10) +
             *(longlong *)(pFVar18 + lVar22 * 0x28 + 8);
      }
    }
    goto LAB_14e650a2c;
  }
  uStack_1d0 = 3;
  local_1d8 = L"uri";
  local_f8._12_4_ = uStack_1cc;
  local_f8.Size = 3;
  local_f8.DataPtr = L"uri";
  pFVar16 = (FScriptContainerElement *)FJsonObject::GetStringField(param_1,&local_e8,&local_f8);
  if (pFVar18 != pFVar16) {
    pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
             AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar25 + 0x18) = *(int *)&pFVar16[8].field_0x0;
    *(int *)(pFVar25 + 0x1c) = *(int *)&pFVar16[0xc].field_0x0;
    *(undefined8 *)&pFVar16[8].field_0x0 = 0;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar8 = ::FString::StartsWith((FString *)pFVar18,L"data:",5,IgnoreCase);
  if (!bVar8) {
    local_1c8 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
                AllocatorInstance).Data;
    iStack_1c0 = *(int *)(pFVar25 + 0x18) + -1;
    if (*(int *)(pFVar25 + 0x18) == 0) {
      iStack_1c0 = 0;
    }
    local_c8._12_4_ = uStack_1bc;
    local_c8.Size = iStack_1c0;
    local_c8.DataPtr = (wchar_t *)local_1c8;
    pFVar16 = (FScriptContainerElement *)FGenericPlatformHttp::UrlDecode(&local_b8,&local_c8);
    if (pFVar18 != pFVar16) {
      pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar25 + 0x18) = *(int *)&pFVar16[8].field_0x0;
      *(int *)(pFVar25 + 0x1c) = *(int *)&pFVar16[0xc].field_0x0;
      *(undefined8 *)&pFVar16[8].field_0x0 = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    EVar13 = ImageFormatFromFilename((FString *)pFVar18);
    *(EFormat *)(pFVar25 + 0x20) = EVar13;
    pFVar18 = (FScriptContainerElement *)::operator/(&local_a8,local_res18,(FString *)pFVar18);
    if (pFVar1 != pFVar18) {
      pFVar16 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                AllocatorInstance).Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->
             AllocatorInstance).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar25 + 0x30) = *(int *)&pFVar18[8].field_0x0;
      *(int *)(pFVar25 + 0x34) = *(int *)&pFVar18[0xc].field_0x0;
      *(undefined8 *)&pFVar18[8].field_0x0 = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_res20 != '\0') {
      pIVar19 = IFileManager::Get();
      if (*(int *)(pFVar25 + 0x30) == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                  AllocatorInstance).Data;
      }
      plVar20 = (longlong *)(**(code **)((longlong)*pIVar19 + 0x18))(pIVar19,pwVar24,0);
      if (plVar20 == (longlong *)0x0) {
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"InterchangeGLTFReader",L"ErrorLoadingImageFile",
                             L"Could not load image file.");
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        iVar10 = (int)this->_padding_;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar2);
        }
        *(int *)&this->_padding_ = iVar10 + 1;
        lVar5 = this->_padding_;
        lVar22 = (longlong)iVar10 * 3 + 1;
        *(undefined4 *)(lVar5 + -8 + lVar22 * 8) = 2;
        FText::FText((FText *)(lVar5 + lVar22 * 8),pFVar17);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      else {
        uVar21 = (**(code **)(*plVar20 + 0x30))(plVar20);
        (**(code **)(*plVar20 + 0x188))(plVar20,this->CurrentBufferOffset,uVar21);
        (**(code **)(*plVar20 + 0x210))(plVar20);
        (**(code **)*plVar20)(plVar20,1);
        *(int *)(pFVar25 + 0x38) = (int)uVar21;
        *(uchar **)(pFVar25 + 0x40) = this->CurrentBufferOffset;
        this->CurrentBufferOffset = this->CurrentBufferOffset + *(uint *)(pFVar25 + 0x38);
      }
    }
    goto LAB_14e650a2c;
  }
  local_res10[0] = 0;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  bVar8 = GLTF::`anonymous_namespace'::DecodeDataURI
                    ((FString *)pFVar18,&local_238,this->CurrentBufferOffset,local_res10);
  FVar7.Data = local_238.Data.AllocatorInstance.Data;
  iVar10 = local_238.Data.ArrayNum;
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar23.Data = local_238.Data.AllocatorInstance.Data;
  }
  iVar12 = wcscmp((wchar_t *)FVar23.Data,L"image/jpeg");
  if (iVar12 == 0) {
LAB_14e6505ab:
    uVar11 = 2;
  }
  else {
    FVar23.Data = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      FVar23.Data = FVar7.Data;
    }
    iVar12 = wcscmp((wchar_t *)FVar23.Data,L"image/jpg");
    if (iVar12 == 0) goto LAB_14e6505ab;
    FVar23.Data = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      FVar23.Data = FVar7.Data;
    }
    iVar10 = wcscmp((wchar_t *)FVar23.Data,L"image/png");
    uVar11 = (uint)(iVar10 == 0);
  }
  *(uint *)(pFVar25 + 0x20) = uVar11;
  if ((bVar8) && (uVar11 != 0)) {
    bVar9 = true;
    *(uint *)(pFVar25 + 0x38) = local_res10[0];
  }
  else {
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_d8,L"InterchangeGLTFReader",L"DecodingImageProblem",
                         L"Problem decoding image from data URI.");
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    iVar10 = (int)this->_padding_;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar2);
    }
    *(int *)&this->_padding_ = iVar10 + 1;
    lVar5 = this->_padding_;
    lVar22 = (longlong)iVar10 * 3 + 1;
    *(undefined4 *)(lVar5 + -8 + lVar22 * 8) = 2;
    FText::FText((FText *)(lVar5 + lVar22 * 8),pFVar17);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (bVar9) {
    *(uchar **)(pFVar25 + 0x40) = this->CurrentBufferOffset;
    this->CurrentBufferOffset = this->CurrentBufferOffset + *(uint *)(pFVar25 + 0x38);
  }
LAB_14e650a2c:
  local_178.Hash.InlineData[0] = '\0';
  local_178.Hash.InlineData[1] = '\0';
  local_178.Hash.InlineData[2] = '\0';
  local_178.Hash.InlineData[3] = '\0';
  local_178.Hash._padding_ = 0;
  local_178.Elements._16_8_ = 0;
  local_178.Elements._24_8_ = 0;
  local_178.HashSize = 0;
  local_178._76_4_ = 0;
  local_178.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_178.Elements._48_8_ = _UNK_150631d98;
  local_178.Elements._0_8_ = 0;
  local_178.Elements._8_8_ = 0;
  local_178.Elements._32_8_ = 0;
  local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GLTF::`anonymous_namespace'::ProcessExtras(param_1,local_218,&local_178);
  this_00 = (this->ExtensionsHandler).Ptr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GLTF::FExtensionsHandler::SetupImageExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
  return;
}

// SetupMaterial @ 14e652310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupMaterial(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  double dVar2;
  FAsset *pFVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  EAlphaMode EVar8;
  EAlphaMode EVar9;
  int iVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TVector<double> *pTVar12;
  TSharedPtr<FJsonObject,1> *pTVar13;
  TVector4<double> *pTVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  FMaterial *pFVar17;
  wchar_t *_Str1;
  float fVar18;
  double dVar19;
  float fVar20;
  FString local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1d8;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TVector4<double>_u_0 local_98;
  TVector<double> local_78;
  TVector4<double> local_58;
  
  pFVar3 = this->Asset;
  local_2b8 = L"name";
  uStack_2b0 = 4;
  local_188._12_4_ = uStack_2ac;
  local_188.Size = 4;
  local_188.DataPtr = L"name";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar6,&local_188);
  if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
     (pTVar11->Object->Type != String)) {
    local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data.ArrayNum = 0;
    local_2d8.Data.ArrayMax = 0;
  }
  else {
    local_2a8 = L"name";
    uStack_2a0 = 4;
    local_a8._12_4_ = uStack_29c;
    local_a8.Size = 4;
    local_a8.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_2d8,&local_a8);
  }
  iVar7 = (pFVar3->Materials).ArrayNum;
  piVar1 = &(pFVar3->Materials).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x370,0x10,&(pFVar3->Materials).AllocatorInstance,piVar1);
  }
  (pFVar3->Materials).ArrayNum = iVar7 + 1;
  FMaterial::FMaterial
            ((FMaterial *)((pFVar3->Materials).AllocatorInstance.Data + (longlong)iVar7 * 0x370),
             &local_2d8);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  pFVar3 = this->Asset;
  iVar7 = (pFVar3->Materials).ArrayNum;
  uVar6 = iVar7 - 1;
  EVar8 = Opaque;
  EVar9 = EVar8;
  if ((int)uVar6 < iVar7) {
    EVar9 = ~uVar6 >> 0x1f;
  }
  if ((EVar9 == Opaque) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar17 = (FMaterial *)
            ((pFVar3->Materials).AllocatorInstance.Data +
            (longlong)(pFVar3->Materials).ArrayNum * 0x370 + -0x370);
  SetTextureMap(param_1,L"emissiveTexture",(wchar_t *)0x0,&this->Asset->Textures,&pFVar17->Emissive,
                ((this->ExtensionsHandler).Ptr)->Messages);
  pTVar12 = GetVec3(&local_78,param_1,L"emissiveFactor",&UE::Math::TVector<double>::ZeroVector);
  dVar19 = (pTVar12->field0_0x0)._s_0.Y;
  dVar2 = (pTVar12->field0_0x0)._s_0.Z;
  (pFVar17->EmissiveFactor).field0_0x0._s_0.X = (float)(pTVar12->field0_0x0)._s_0.X;
  (pFVar17->EmissiveFactor).field0_0x0._s_0.Y = (float)dVar19;
  (pFVar17->EmissiveFactor).field0_0x0._s_0.Z = (float)dVar2;
  fVar18 = SetTextureMap(param_1,L"normalTexture",L"scale",&this->Asset->Textures,&pFVar17->Normal,
                         ((this->ExtensionsHandler).Ptr)->Messages);
  pFVar17->NormalScale = fVar18;
  fVar18 = SetTextureMap(param_1,L"occlusionTexture",L"strength",&this->Asset->Textures,
                         &pFVar17->Occlusion,((this->ExtensionsHandler).Ptr)->Messages);
  pFVar17->OcclusionStrength = fVar18;
  local_298 = L"pbrMetallicRoughness";
  uStack_290 = 0x14;
  local_178._12_4_ = uStack_28c;
  local_178.Size = 0x14;
  local_178.DataPtr = L"pbrMetallicRoughness";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0x14,L"pbrMetallicRoughness");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar6,&local_178);
  _Str1 = L"";
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Object)) {
    local_288 = L"pbrMetallicRoughness";
    uStack_280 = 0x14;
    local_168._12_4_ = uStack_27c;
    local_168.Size = 0x14;
    local_168.DataPtr = L"pbrMetallicRoughness";
    pTVar13 = FJsonObject::GetObjectField(param_1,&local_168);
    if ((pTVar13->Object == (FJsonObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)pTVar13->Object;
    SetTextureMap((FJsonObject *)this_00,L"baseColorTexture",(wchar_t *)0x0,&this->Asset->Textures,
                  &pFVar17->BaseColor,((this->ExtensionsHandler).Ptr)->Messages);
    local_98._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_98._s_0.Y = _UNK_150689688;
    local_98._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
    local_98._s_0.W = _UNK_150689688;
    pTVar14 = GetVec4(&local_58,(FJsonObject *)this_00,L"baseColorFactor",
                      (TVector4<double> *)&local_98._s_0);
    local_2c8 = (float)(pTVar14->field0_0x0)._s_0.X;
    fStack_2c4 = (float)(pTVar14->field0_0x0)._s_0.Y;
    fStack_2c0 = (float)(pTVar14->field0_0x0)._s_0.Z;
    fStack_2bc = (float)(pTVar14->field0_0x0)._s_0.W;
    (pFVar17->BaseColorFactor).field0_0x0._s_0.X = local_2c8;
    (pFVar17->BaseColorFactor).field0_0x0._s_0.Y = fStack_2c4;
    (pFVar17->BaseColorFactor).field0_0x0._s_0.Z = fStack_2c0;
    (pFVar17->BaseColorFactor).field0_0x0._s_0.W = fStack_2bc;
    SetTextureMap((FJsonObject *)this_00,L"metallicRoughnessTexture",(wchar_t *)0x0,
                  &this->Asset->Textures,&(pFVar17->MetallicRoughness).Map,
                  ((this->ExtensionsHandler).Ptr)->Messages);
    uStack_270 = 0xe;
    local_278 = L"metallicFactor";
    local_158._12_4_ = uStack_26c;
    local_158.Size = 0xe;
    local_158.DataPtr = L"metallicFactor";
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"metallicFactor");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(this_00,uVar6,&local_158);
    fVar18 = __real_3f800000;
    fVar20 = __real_3f800000;
    if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
       (pTVar11->Object->Type == Number)) {
      local_268 = L"metallicFactor";
      uStack_260 = 0xe;
      local_148._12_4_ = uStack_25c;
      local_148.Size = 0xe;
      local_148.DataPtr = L"metallicFactor";
      dVar19 = FJsonObject::GetNumberField((FJsonObject *)this_00,&local_148);
      fVar20 = (float)dVar19;
    }
    uStack_250 = 0xf;
    local_258 = L"roughnessFactor";
    local_138._12_4_ = uStack_24c;
    local_138.Size = 0xf;
    local_138.DataPtr = L"roughnessFactor";
    (pFVar17->MetallicRoughness).MetallicFactor = fVar20;
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xf,L"roughnessFactor");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(this_00,uVar6,&local_138);
    if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
       (pTVar11->Object->Type == Number)) {
      local_248 = L"roughnessFactor";
      uStack_240 = 0xf;
      local_128._12_4_ = uStack_23c;
      local_128.Size = 0xf;
      local_128.DataPtr = L"roughnessFactor";
      dVar19 = FJsonObject::GetNumberField((FJsonObject *)this_00,&local_128);
      fVar18 = (float)dVar19;
    }
    (pFVar17->MetallicRoughness).RoughnessFactor = fVar18;
  }
  uStack_230 = 9;
  local_238 = L"alphaMode";
  local_118._12_4_ = uStack_22c;
  local_118.Size = 9;
  local_118.DataPtr = L"alphaMode";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"alphaMode");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar6,&local_118);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == String)) {
    local_228 = L"alphaMode";
    uStack_220 = 9;
    local_108._12_4_ = uStack_21c;
    local_108.Size = 9;
    local_108.DataPtr = L"alphaMode";
    pFVar15 = FJsonObject::GetStringField(param_1,&local_f8,&local_108);
    iVar7 = (pFVar15->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    iVar10 = wcscmp(pwVar16,L"OPAQUE");
    if (iVar10 != 0) {
      if (iVar7 == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      iVar10 = wcscmp(pwVar16,L"MASK");
      if (iVar10 == 0) {
        EVar8 = Mask;
      }
      else {
        if (iVar7 != 0) {
          _Str1 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        iVar7 = wcscmp(_Str1,L"BLEND");
        if (iVar7 == 0) {
          EVar8 = Blend;
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8036928033329774511>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ConversionUtilities.h"
                             ,0x51,"false");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
    pFVar17->AlphaMode = EVar8;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (pFVar17->AlphaMode == Mask) {
      uStack_210 = 0xb;
      local_218 = L"alphaCutoff";
      local_e8._12_4_ = uStack_20c;
      local_e8.Size = 0xb;
      local_e8.DataPtr = L"alphaCutoff";
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"alphaCutoff");
      pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)param_1,uVar6,&local_e8);
      fVar18 = __real_3f000000;
      if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0))
         && (pTVar11->Object->Type == Number)) {
        local_208 = L"alphaCutoff";
        uStack_200 = 0xb;
        local_d8._12_4_ = uStack_1fc;
        local_d8.Size = 0xb;
        local_d8.DataPtr = L"alphaCutoff";
        dVar19 = FJsonObject::GetNumberField(param_1,&local_d8);
        fVar18 = (float)dVar19;
      }
      pFVar17->AlphaCutoff = fVar18;
    }
  }
  uStack_1f0 = 0xb;
  local_1f8 = L"doubleSided";
  local_c8._12_4_ = uStack_1ec;
  local_c8.Size = 0xb;
  local_c8.DataPtr = L"doubleSided";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"doubleSided");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar6,&local_c8);
  if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
     (pTVar11->Object->Type != Boolean)) {
    bVar5 = false;
  }
  else {
    local_1e8 = L"doubleSided";
    uStack_1e0 = 0xb;
    local_b8._12_4_ = uStack_1dc;
    local_b8.Size = 0xb;
    local_b8.DataPtr = L"doubleSided";
    bVar5 = FJsonObject::GetBoolField(param_1,&local_b8);
  }
  pFVar17->bIsDoubleSided = bVar5;
  local_1d8.Elements._16_8_ = 0;
  local_1d8.Elements._24_8_ = 0;
  local_1d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1d8.Elements._48_8_ = _UNK_150631d98;
  local_1d8.Hash.InlineData[0] = '\0';
  local_1d8.Hash.InlineData[1] = '\0';
  local_1d8.Hash.InlineData[2] = '\0';
  local_1d8.Hash.InlineData[3] = '\0';
  local_1d8.Hash._padding_ = 0;
  local_1d8.HashSize = 0;
  local_1d8._76_4_ = 0;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GLTF::`anonymous_namespace'::ProcessExtras(param_1,&pFVar17->Extras,&local_1d8);
  FExtensionsHandler::SetupMaterialExtensions((this->ExtensionsHandler).Ptr,param_1,pFVar17);
  return;
}

// SetupMesh @ 14e654230

void __thiscall GLTF::FFileReader::SetupMesh(FFileReader *this,FJsonObject *param_1,bool param_2)

{
  TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FAsset *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FJsonValue *pFVar7;
  FScriptContainerElement *pFVar8;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  FExtensionsHandler *this_01;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  TSharedPtr<FJsonValue,1> *pTVar16;
  ulonglong uVar17;
  longlong *plVar18;
  FText *pFVar19;
  TSharedPtr<FJsonObject,1> *pTVar20;
  FScriptContainerElement *pFVar21;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar22;
  longlong lVar23;
  uint uVar24;
  FMesh *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 local_res20 [8];
  undefined1 local_228;
  undefined1 local_227 [3];
  float local_224;
  uint local_220 [2];
  FMesh *local_218;
  undefined1 local_210 [24];
  FString local_1f8;
  FString local_1e8;
  wchar_t *local_1d8;
  undefined1 auStack_1d0 [16];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  initializer_list<FString> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FText local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  
  pFVar3 = this->Asset;
  piVar2 = &(pFVar3->Meshes).ArrayMax;
  iVar12 = (pFVar3->Meshes).ArrayNum;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a8,&(pFVar3->Meshes).AllocatorInstance,piVar2);
  }
  (pFVar3->Meshes).ArrayNum = iVar12 + 1;
  lVar23 = (longlong)iVar12 * 0xa8;
  pFVar26 = (pFVar3->Meshes).AllocatorInstance.Data;
  iVar14 = -1;
  *(undefined8 *)(pFVar26 + lVar23 + 0x50) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x50 + 8) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x78) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x88) = 0;
  *(undefined2 *)(pFVar26 + lVar23 + 0xa0) = 0;
  *(undefined4 *)(pFVar26 + lVar23 + 0xa2) = 0;
  *(undefined2 *)(pFVar26 + lVar23 + 0xa6) = 0;
  *(undefined8 *)(pFVar26 + lVar23) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 8) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x10) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x18) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x20) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x28) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x30) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x38) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x40) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x48) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x60) = 0;
  *(undefined4 *)(pFVar26 + lVar23 + 0x68) = 0;
  *(undefined4 *)(pFVar26 + lVar23 + 0x6c) = 0x80;
  *(undefined4 *)(pFVar26 + lVar23 + 0x70) = 0xffffffff;
  *(undefined4 *)(pFVar26 + lVar23 + 0x74) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x80) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x90) = 0;
  *(undefined8 *)(pFVar26 + lVar23 + 0x98) = 0;
  pFVar3 = this->Asset;
  iVar12 = (pFVar3->Meshes).ArrayNum;
  uVar24 = iVar12 - 1;
  uVar13 = 0;
  if ((int)uVar24 < iVar12) {
    uVar13 = ~uVar24 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1e8.Data.ArrayNum = 10;
  pFVar25 = (FMesh *)((pFVar3->Meshes).AllocatorInstance.Data +
                     (longlong)(pFVar3->Meshes).ArrayNum * 0xa8 + -0xa8);
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x152c6f6e0;
  local_148._12_4_ = local_1e8.Data.ArrayMax;
  local_148.Size = 10;
  local_148.DataPtr = L"primitives";
  local_218 = pFVar25;
  pTVar15 = FJsonObject::GetArrayField(param_1,&local_148);
  auStack_1d0._0_4_ = 4;
  local_1d8 = L"name";
  local_138._12_4_ = auStack_1d0._4_4_;
  local_138.Size = 4;
  local_138.DataPtr = L"name";
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar13,&local_138);
  if (((pTVar16 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar16->Object == (FJsonValue *)0x0)) ||
     (pTVar16->Object->Type != String)) {
    local_210._8_4_ = 0;
    local_210._12_4_ = 0;
    local_210._0_8_ = (FScriptContainerElement *)0x0;
  }
  else {
    auStack_1d0._8_8_ = L"name";
    uStack_1c0 = 4;
    local_128._12_4_ = uStack_1bc;
    local_128.Size = 4;
    local_128.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,(FString *)local_210,&local_128);
  }
  if (pFVar25 != (FMesh *)local_210) {
    pFVar26 = (pFVar25->Name).Data.AllocatorInstance.Data;
    if (pFVar26 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar26);
    }
    (pFVar25->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_210._0_8_;
    (pFVar25->Name).Data.ArrayNum = local_210._8_4_;
    local_210._0_8_ = (FScriptContainerElement *)0x0;
    (pFVar25->Name).Data.ArrayMax = local_210._12_4_;
    local_210._8_4_ = 0;
    local_210._12_4_ = 0;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  uVar13 = pTVar15->ArrayNum;
  pTVar1 = &pFVar25->Primitives;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar2 = &(pFVar25->Primitives).ArrayMax;
  if (*piVar2 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,uVar13,&pTVar1->AllocatorInstance,(pFVar25->Primitives).ArrayNum,piVar2);
  }
  local_210._16_4_ = pTVar15->ArrayNum;
  uVar17 = (ulonglong)(int)local_210._16_4_;
  local_220[0] = 0;
  pFVar26 = (pTVar15->AllocatorInstance).Data;
  pFVar27 = pFVar26 + uVar17 * 0x10;
  do {
    if (pTVar15->ArrayNum != (int)uVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar26 == pFVar27) {
      uStack_1b0 = 7;
      local_1b8 = L"weights";
      local_108._12_4_ = uStack_1ac;
      local_108.Size = 7;
      local_108.DataPtr = L"weights";
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"weights");
      pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)param_1,uVar13,&local_108);
      if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) {
        local_1a8 = L"weights";
        uStack_1a0 = 7;
        local_f8._12_4_ = uStack_19c;
        local_f8.Size = 7;
        local_f8.DataPtr = L"weights";
        pTVar15 = FJsonObject::GetArrayField(param_1,&local_f8);
        iVar12 = pTVar15->ArrayNum;
        pFVar26 = (pTVar15->AllocatorInstance).Data;
        pFVar27 = pFVar26 + (longlong)iVar12 * 0x10;
        while( true ) {
          if (pTVar15->ArrayNum != iVar12) {
            local_228 = 0;
            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_228);
          }
          pFVar25 = local_218;
          if (pFVar26 == pFVar27) break;
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar26 + 8);
          pFVar7 = *(FJsonValue **)pFVar26;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar7 == (FJsonValue *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar10 = FJsonValue::AsNumber(pFVar7);
          pFVar8 = (pFVar25->MorphTargetWeights).AllocatorInstance.Data;
          local_224 = (float)dVar10;
          if (((pFVar8 <= (FScriptContainerElement *)&local_224) &&
              ((FScriptContainerElement *)&local_224 <
               pFVar8 + (longlong)(pFVar25->MorphTargetWeights).ArrayMax * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar14 = (pFVar25->MorphTargetWeights).ArrayNum;
          piVar2 = &(pFVar25->MorphTargetWeights).ArrayMax;
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar25->MorphTargetWeights).AllocatorInstance,piVar2);
          }
          (pFVar25->MorphTargetWeights).ArrayNum = iVar14 + 1;
          *(float *)((pFVar25->MorphTargetWeights).AllocatorInstance.Data + (longlong)iVar14 * 4) =
               local_224;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          pFVar26 = pFVar26 + 0x10;
        }
      }
      uStack_190 = 6;
      local_198 = L"extras";
      local_e8._12_4_ = uStack_18c;
      local_e8.Size = 6;
      local_e8.DataPtr = L"extras";
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"extras");
      pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)param_1,uVar13,&local_e8);
      pFVar25 = local_218;
      if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) {
        local_188 = L"extras";
        uStack_180 = 6;
        local_d8._12_4_ = uStack_17c;
        local_d8.Size = 6;
        local_d8.DataPtr = L"extras";
        pTVar20 = FJsonObject::GetObjectField(param_1,&local_d8);
        if ((pTVar20->Object == (FJsonObject *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                   *)pTVar20->Object;
        local_178 = L"targetNames";
        uStack_170._0_1_ = true;
        uStack_170._1_1_ = false;
        uStack_170._2_2_ = 0;
        local_c8._12_4_ = uStack_16c;
        local_c8.Size = 0xb;
        local_c8.DataPtr = L"targetNames";
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"targetNames");
        pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>(this_00,uVar13,&local_c8);
        if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0))
        {
          if ((pTVar20->Object == (FJsonObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_168 = L"targetNames";
          uStack_160 = 0xb;
          local_b8._12_4_ = uStack_15c;
          local_b8.Size = 0xb;
          local_b8.DataPtr = L"targetNames";
          pTVar15 = FJsonObject::GetArrayField(pTVar20->Object,&local_b8);
          iVar12 = pTVar15->ArrayNum;
          pFVar26 = (pTVar15->AllocatorInstance).Data;
          pFVar27 = pFVar26 + (longlong)iVar12 * 0x10;
          while( true ) {
            if (pTVar15->ArrayNum != iVar12) {
              local_227[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_227);
            }
            pFVar25 = local_218;
            if (pFVar26 == pFVar27) break;
            pTVar4 = *(TReferenceControllerBase<1> **)(pFVar26 + 8);
            pFVar7 = *(FJsonValue **)pFVar26;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar7 == (FJsonValue *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar21 = (FScriptContainerElement *)FJsonValue::AsString(pFVar7,&local_a8);
            pFVar8 = (pFVar25->MorphTargetNames).AllocatorInstance.Data;
            if (((pFVar8 <= pFVar21) &&
                (pFVar21 < pFVar8 + (longlong)(pFVar25->MorphTargetNames).ArrayMax * 0x10)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar14 = (pFVar25->MorphTargetNames).ArrayNum;
            piVar2 = &(pFVar25->MorphTargetNames).ArrayMax;
            if (iVar14 == *piVar2) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pFVar25->MorphTargetNames).AllocatorInstance,piVar2);
            }
            pFVar8 = (pFVar25->MorphTargetNames).AllocatorInstance.Data;
            (pFVar25->MorphTargetNames).ArrayNum = iVar14 + 1;
            lVar23 = (longlong)iVar14;
            *(undefined8 *)(pFVar8 + lVar23 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar8 + lVar23 * 0x10) =
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->
                 AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->AllocatorInstance
            ).Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar8 + lVar23 * 0x10 + 8) = *(int *)&pFVar21[8].field_0x0;
            *(int *)(pFVar8 + lVar23 * 0x10 + 0xc) = *(int *)&pFVar21[0xc].field_0x0;
            *(undefined8 *)&pFVar21[8].field_0x0 = 0;
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            pFVar26 = pFVar26 + 0x10;
          }
        }
        ::FString::FString(&local_1f8,L"targetNames");
        local_158._First = &local_1f8;
        local_158._Last = &local_1e8;
        pTVar22 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                            (&local_98,&local_158);
        pFVar25 = local_218;
        GLTF::`anonymous_namespace'::ProcessExtras(param_1,&local_218->Extras,pTVar22);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
      FMesh::GenerateIsValidCache(pFVar25,true);
      this_01 = (this->ExtensionsHandler).Ptr;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`GLTF::FExtensionsHandler::SetupMeshExtensions'::__l2::
               _dynamic_atexit_destructor_for__Extensions__);
        _Init_thread_footer(&::_TSS0);
      }
      FExtensionsHandler::CheckExtensions(this_01,param_1,&Extensions);
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar26 + 8);
    puVar5 = *(undefined8 **)pFVar26;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((puVar5 == (undefined8 *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    plVar18 = (longlong *)(**(code **)*puVar5)(puVar5);
    if ((*plVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SetupPrimitive(this,(FJsonObject *)*plVar18,local_218,param_2,local_220);
    iVar12 = (pFVar25->Primitives).ArrayNum;
    uVar13 = iVar12 - 1;
    if (iVar14 == -1) {
      uVar24 = 0;
      if ((int)uVar13 < iVar12) {
        uVar24 = ~uVar13 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar14 = *(int *)((pTVar1->AllocatorInstance).Data +
                       (longlong)(pFVar25->Primitives).ArrayNum * 0xa0 + -0x18);
    }
    else {
      uVar24 = 0;
      if ((int)uVar13 < iVar12) {
        uVar24 = ~uVar13 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (iVar14 != *(int *)((pTVar1->AllocatorInstance).Data +
                            (longlong)(pFVar25->Primitives).ArrayNum * 0xa0 + -0x18)) {
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"InterchangeGLTFReader",L"InconsistentNumMorphTargets",
                             L"Number of Primitive.Targets is not consistent across the Mesh.");
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        iVar12 = (int)this->_padding_;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar2);
        }
        *(int *)&this->_padding_ = iVar12 + 1;
        lVar6 = this->_padding_;
        lVar23 = (longlong)iVar12 * 3 + 1;
        *(undefined4 *)(lVar6 + -8 + lVar23 * 8) = 2;
        FText::FText((FText *)(lVar6 + lVar23 * 8),pFVar19);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
      }
    }
    local_220[0] = local_220[0] + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar17 = (ulonglong)(uint)local_210._16_4_;
    pFVar26 = pFVar26 + 0x10;
  } while( true );
}

// SetupMorphTarget @ 14e654d00

void __thiscall
GLTF::FFileReader::SetupMorphTarget
          (FFileReader *this,FJsonObject *param_1,FPrimitive *param_2,bool param_3)

{
  int *piVar1;
  FAsset *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  TSharedPtr<FJsonValue,1> *pTVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FAccessor *pFVar14;
  FAccessor *pFVar15;
  FScriptContainerElement FVar16;
  FScriptContainerElement FVar17;
  FScriptContainerElement local_108;
  EMeshAttributeType local_107 [7];
  TArray<TTuple<GLTF::EMeshAttributeType,GLTF::FAccessor_&>,TSizedDefaultAllocator<32>_> local_100;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  size_t sVar9;
  
  iVar12 = 0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xb,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
  pFVar15 = &`GLTF::AccessorAtIndex'::`7'::EmptyAccessor;
  FVar16 = (FScriptContainerElement)0x0;
  do {
    local_108 = FVar16;
    pFVar8 = GLTF::ToString(&local_88,(EMeshAttributeType *)&local_108);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_e8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e654db7:
      pFVar13 = local_e8;
      sVar9 = wcslen((wchar_t *)local_e8);
      iVar6 = (int)sVar9;
    }
    else {
      pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
      iVar6 = iVar12;
      local_e8 = pFVar13;
      if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_14e654db7;
    }
    local_a8._12_4_ = uStack_dc;
    local_a8.Size = iVar6;
    local_a8.DataPtr = (wchar_t *)local_e8;
    iStack_e0 = iVar6;
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)pFVar13);
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar7,&local_a8);
    iVar6 = 0;
    if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
       (pTVar10->Object->Type != Number)) {
LAB_14e654e9b:
      pFVar14 = &`GLTF::AccessorAtIndex'::`7'::EmptyAccessor;
    }
    else {
      iVar11 = iVar6;
      local_c8 = pFVar13;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        sVar9 = wcslen((wchar_t *)pFVar13);
        iVar11 = (int)sVar9;
      }
      local_98._12_4_ = uStack_bc;
      local_98.Size = iVar11;
      local_98.DataPtr = (wchar_t *)local_c8;
      iStack_c0 = iVar11;
      dVar4 = FJsonObject::GetNumberField(param_1,&local_98);
      iVar11 = (int)dVar4;
      if ((iVar11 < 0) || (pFVar2 = this->Asset, (pFVar2->Accessors).ArrayNum <= iVar11))
      goto LAB_14e654e9b;
      if ((iVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (FAccessor *)((pFVar2->Accessors).AllocatorInstance.Data + (longlong)iVar11 * 0xd0);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar14->bQuantized = param_3;
    iVar11 = local_100.ArrayNum;
    if (local_100.ArrayNum == local_100.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_100.AllocatorInstance,&local_100.ArrayMax);
    }
    local_100.ArrayNum = iVar11 + 1;
    FVar17 = (FScriptContainerElement)((char)FVar16 + 1);
    local_100.AllocatorInstance.Data[(longlong)iVar11 * 0x10] = FVar16;
    *(FAccessor **)(local_100.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) = pFVar14;
    FVar16 = FVar17;
  } while ((byte)FVar17 < 0xb);
  local_107[0] = COLOR_0;
  pFVar8 = GLTF::ToString(&local_58,local_107);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
    local_d8 = pFVar13;
    if (pFVar13 == (FScriptContainerElement *)0x0) goto LAB_14e654f39;
  }
  pFVar13 = local_d8;
  sVar9 = wcslen((wchar_t *)local_d8);
  iVar6 = (int)sVar9;
LAB_14e654f39:
  local_78._12_4_ = uStack_cc;
  local_78.Size = iVar6;
  local_78.DataPtr = (wchar_t *)local_d8;
  iStack_d0 = iVar6;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)pFVar13);
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar7,&local_78);
  if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) &&
     (pTVar10->Object->Type == Number)) {
    local_b8 = pFVar13;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      sVar9 = wcslen((wchar_t *)pFVar13);
      iVar12 = (int)sVar9;
    }
    local_68._12_4_ = uStack_ac;
    local_68.Size = iVar12;
    local_68.DataPtr = (wchar_t *)local_b8;
    iStack_b0 = iVar12;
    dVar4 = FJsonObject::GetNumberField(param_1,&local_68);
    iVar12 = (int)dVar4;
    if ((-1 < iVar12) && (pFVar2 = this->Asset, iVar12 < (pFVar2->Accessors).ArrayNum)) {
      if ((iVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (FAccessor *)((pFVar2->Accessors).AllocatorInstance.Data + (longlong)iVar12 * 0xd0);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar12 = local_100.ArrayNum;
  if (local_100.ArrayNum == local_100.ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_100.AllocatorInstance,&local_100.ArrayMax);
  }
  local_100.ArrayNum = iVar12 + 1;
  piVar1 = &(param_2->MorphTargets).ArrayMax;
  local_100.AllocatorInstance.Data[(longlong)iVar12 * 0x10] = (FScriptContainerElement)0xb;
  *(FAccessor **)(local_100.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) = pFVar15;
  iVar12 = (param_2->MorphTargets).ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(param_2->MorphTargets).AllocatorInstance,piVar1);
  }
  (param_2->MorphTargets).ArrayNum = iVar12 + 1;
  FAttributeAccessors::FAttributeAccessors
            ((FAttributeAccessors *)
             ((param_2->MorphTargets).AllocatorInstance.Data + (longlong)iVar12 * 0x18),&local_100,
             true);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return;
}

// SetupNode @ 14e6550d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupNode(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FAsset *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FJsonValue *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  double dVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FNode *pFVar16;
  TSharedPtr<FJsonValue,1> *pTVar17;
  TVector<double> *pTVar18;
  TQuat<double> *pTVar19;
  ulonglong uVar20;
  VectorRegister4Double *pVVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FNode *pFVar24;
  double dVar25;
  double extraout_XMM0_Qb;
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_3b8;
  float local_3b4;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_3b0;
  undefined1 local_3a8 [136];
  int iStack_320;
  int iStack_31c;
  wchar_t *local_318;
  int iStack_310;
  float fStack_30c;
  wchar_t *local_308;
  undefined1 auStack_300 [24];
  wchar_t *local_2e8;
  int iStack_2e0;
  int iStack_2dc;
  wchar_t *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  int iStack_2c0;
  int iStack_2bc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_2b8;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TStringView<wchar_t> local_1a8;
  TQuat<double> local_198;
  undefined4 local_178;
  undefined4 uStack_174;
  double dStack_170;
  double local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150;
  int iStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  int iStack_140;
  int iStack_13c;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  TVector<double> local_118;
  TVector<double> local_100;
  TQuat<double> local_e8;
  TMatrix<double> local_c8;
  
  pFVar4 = this->Asset;
  piVar1 = &(pFVar4->Nodes).ArrayMax;
  iVar14 = (pFVar4->Nodes).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x260,0x10,&(pFVar4->Nodes).AllocatorInstance,piVar1);
  }
  (pFVar4->Nodes).ArrayNum = iVar14 + 1;
  pFVar16 = GLTF::FNode::FNode((FNode *)((pFVar4->Nodes).AllocatorInstance.Data +
                                        (longlong)iVar14 * 0x260));
  local_3a8._32_8_ = L"name";
  local_3a8._40_4_ = 4;
  local_1a8._12_4_ = local_3a8._44_4_;
  local_1a8.Size = 4;
  local_1a8.DataPtr = L"name";
  pFVar16->Index = (this->Asset->Nodes).ArrayNum + -1;
  local_3a8._16_8_ = pFVar16;
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,&local_1a8);
  if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
     (pTVar17->Object->Type != String)) {
    local_3a8._8_4_ = 0;
    local_3a8._12_4_ = 0;
    local_3a8._0_8_ = (FScriptContainerElement *)0x0;
  }
  else {
    local_3a8._48_8_ = L"name";
    local_3a8._56_4_ = 4;
    local_268._12_4_ = local_3a8._60_4_;
    local_268.Size = 4;
    local_268.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,(FString *)local_3a8,&local_268);
  }
  if (pFVar16 != (FNode *)local_3a8) {
    pFVar22 = (pFVar16->Name).Data.AllocatorInstance.Data;
    if (pFVar22 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar22);
    }
    (pFVar16->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3a8._0_8_;
    (pFVar16->Name).Data.ArrayNum = local_3a8._8_4_;
    local_3a8._0_8_ = (FScriptContainerElement *)0x0;
    (pFVar16->Name).Data.ArrayMax = local_3a8._12_4_;
    local_3a8._8_4_ = 0;
    local_3a8._12_4_ = 0;
  }
  if ((FScriptContainerElement *)local_3a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_3a8._0_8_);
  }
  local_3a8._72_4_ = 6;
  local_3a8._64_8_ = L"matrix";
  local_258._12_4_ = local_3a8._76_4_;
  local_258.Size = 6;
  local_258.DataPtr = L"matrix";
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"matrix");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,&local_258);
  if ((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) {
    pTVar18 = GetVec3(&local_118,param_1,L"translation",&UE::Math::TVector<double>::ZeroVector);
    dVar28 = (pTVar18->field0_0x0)._s_0.Y;
    dVar25 = (pTVar18->field0_0x0)._s_0.Z;
    (pFVar16->Transform).Translation.XY.m128d_f64[0] = (pTVar18->field0_0x0)._s_0.X;
    (pFVar16->Transform).Translation.XY.m128d_f64[1] = dVar28;
    (pFVar16->Transform).Translation.ZW.m128d_f64[0] = dVar25;
    (pFVar16->Transform).Translation.ZW.m128d_f64[1] = 0.0;
    local_198.Z = ___xmm_3ff00000000000000000000000000000;
    local_198.W = _UNK_15061cbc8;
    local_198.X = 0.0;
    local_198.Y = 0.0;
    pTVar19 = GetQuat(&local_e8,param_1,L"rotation",&local_198);
    dVar25 = pTVar19->Y;
    dVar28 = pTVar19->Z;
    dVar11 = pTVar19->W;
    (pFVar16->Transform).Rotation.XY.m128d_f64[0] = pTVar19->X;
    (pFVar16->Transform).Rotation.XY.m128d_f64[1] = dVar25;
    (pFVar16->Transform).Rotation.ZW.m128d_f64[0] = dVar28;
    (pFVar16->Transform).Rotation.ZW.m128d_f64[1] = dVar11;
    pTVar18 = GetVec3(&local_100,param_1,L"scale",&UE::Math::TVector<double>::OneVector);
    dVar28 = (pTVar18->field0_0x0)._s_0.Y;
    dVar25 = (pTVar18->field0_0x0)._s_0.Z;
    (pFVar16->Transform).Scale3D.XY.m128d_f64[0] = (pTVar18->field0_0x0)._s_0.X;
    (pFVar16->Transform).Scale3D.XY.m128d_f64[1] = dVar28;
    (pFVar16->Transform).Scale3D.ZW.m128d_f64[0] = dVar25;
    (pFVar16->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  else {
    GetMat4(&local_c8,param_1,L"matrix",&UE::Math::TMatrix<double>::Identity);
    GLTF::`anonymous_namespace'::SetTransformFromMatrix<double>(&pFVar16->Transform,&local_c8);
    dVar28 = extraout_XMM0_Qb;
  }
  pVVar21 = &(pFVar16->Transform).Scale3D;
  local_178 = *(undefined4 *)(pFVar16->Transform).Translation.XY.m128d_f64;
  uStack_174 = *(undefined4 *)((longlong)(pFVar16->Transform).Translation.XY.m128d_f64 + 4);
  uStack_128 = *(undefined4 *)((pFVar16->Transform).Translation.XY.m128d_f64 + 1);
  uStack_124 = *(undefined4 *)((longlong)(pFVar16->Transform).Translation.XY.m128d_f64 + 0xc);
  dStack_170 = (pFVar16->Transform).Translation.ZW.m128d_f64[0];
  auVar9._4_8_ = dVar28;
  auVar9._0_4_ = uStack_174;
  auVar26._0_8_ = auVar9._0_8_ << 0x20;
  auVar26._8_4_ = uStack_128;
  auVar26._12_4_ = uStack_124;
  local_168 = auVar26._8_8_;
  local_3a8._80_8_ = L"children";
  local_3a8._88_4_ = 8;
  *(undefined4 *)(pFVar16->Transform).Translation.XY.m128d_f64 = local_178;
  *(undefined4 *)((longlong)(pFVar16->Transform).Translation.XY.m128d_f64 + 4) = uStack_174;
  (pFVar16->Transform).Translation.XY.m128d_f64[1] = dStack_170;
  (pFVar16->Transform).Translation.ZW.m128d_f64[0] = local_168;
  (pFVar16->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  local_160 = *(undefined4 *)(pVVar21->XY).m128d_f64;
  uStack_15c = *(undefined4 *)((longlong)(pFVar16->Transform).Scale3D.XY.m128d_f64 + 4);
  uStack_158 = *(undefined4 *)((pFVar16->Transform).Scale3D.XY.m128d_f64 + 1);
  uStack_154 = *(undefined4 *)((longlong)(pFVar16->Transform).Scale3D.XY.m128d_f64 + 0xc);
  local_150 = *(int *)(pFVar16->Transform).Scale3D.ZW.m128d_f64;
  iStack_14c = *(int *)((longlong)(pFVar16->Transform).Scale3D.ZW.m128d_f64 + 4);
  auVar10._4_8_ = dStack_170;
  auVar10._0_4_ = uStack_15c;
  auVar27._0_8_ = auVar10._0_8_ << 0x20;
  auVar27._8_4_ = uStack_158;
  auVar27._12_4_ = uStack_154;
  local_138 = auVar27._8_8_;
  *(undefined4 *)(pVVar21->XY).m128d_f64 = local_160;
  *(undefined4 *)((longlong)(pFVar16->Transform).Scale3D.XY.m128d_f64 + 4) = uStack_15c;
  *(int *)((pFVar16->Transform).Scale3D.XY.m128d_f64 + 1) = local_150;
  *(int *)((longlong)(pFVar16->Transform).Scale3D.XY.m128d_f64 + 0xc) = iStack_14c;
  local_248._12_4_ = local_3a8._92_4_;
  local_248.Size = 8;
  (pFVar16->Transform).Scale3D.ZW.m128d_f64[0] = local_138;
  (pFVar16->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  local_248.DataPtr = L"children";
  local_148 = local_160;
  uStack_144 = uStack_15c;
  iStack_140 = local_150;
  iStack_13c = iStack_14c;
  local_130 = local_178;
  uStack_12c = uStack_174;
  local_120 = dStack_170;
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"children");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,&local_248);
  pFVar24 = pFVar16;
  if ((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar17->Object != (FJsonValue *)0x0)) {
    local_3a8._96_8_ = L"children";
    local_3a8._104_4_ = 8;
    local_238._12_4_ = local_3a8._108_4_;
    local_238.Size = 8;
    local_238.DataPtr = L"children";
    local_3b0 = FJsonObject::GetArrayField(param_1,&local_238);
    pTVar2 = &pFVar16->Children;
    uVar15 = local_3b0->ArrayNum;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar1 = &(pFVar16->Children).ArrayMax;
    if ((pFVar16->Children).ArrayMax < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&pTVar2->AllocatorInstance,(pFVar16->Children).ArrayNum,piVar1);
    }
    pTVar12 = local_3b0;
    uVar20 = (ulonglong)local_3b0->ArrayNum;
    pFVar22 = (local_3b0->AllocatorInstance).Data;
    pFVar23 = pFVar22 + uVar20 * 0x10;
    local_3b0 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                CONCAT44(local_3b0._4_4_,local_3b0->ArrayNum);
    while( true ) {
      if (pTVar12->ArrayNum != (int)uVar20) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      pFVar24 = (FNode *)local_3a8._16_8_;
      if (pFVar22 == pFVar23) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
      pFVar6 = *(FJsonValue **)pFVar22;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar6 == (FJsonValue *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar25 = FJsonValue::AsNumber(pFVar6);
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      local_3b8 = (int)dVar25;
      if (((pFVar7 <= (FScriptContainerElement *)&local_3b8) &&
          ((FScriptContainerElement *)&local_3b8 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (pFVar16->Children).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar16->Children).ArrayNum = iVar14 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_3b8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar20 = (ulonglong)local_3b0 & 0xffffffff;
      pFVar22 = pFVar22 + 0x10;
    }
  }
  local_3a8._120_4_ = 4;
  local_3a8._112_8_ = L"mesh";
  local_228._12_4_ = local_3a8._124_4_;
  local_228.Size = 4;
  local_228.DataPtr = L"mesh";
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"mesh");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,&local_228);
  if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
     (pTVar17->Object->Type != Number)) {
LAB_14e65564b:
    iVar14 = -1;
  }
  else {
    local_3a8._128_8_ = L"mesh";
    iStack_320 = 4;
    local_218._8_8_ = CONCAT44(iStack_31c,4);
    local_218.DataPtr = L"mesh";
    dVar25 = FJsonObject::GetNumberField(param_1,&local_218);
    iVar14 = (int)dVar25;
    if (iVar14 < 0) goto LAB_14e65564b;
  }
  iStack_310 = 4;
  local_318 = L"skin";
  local_208._8_8_ = CONCAT44(fStack_30c,4);
  local_208._0_8_ = L"skin";
  pFVar24->MeshIndex = iVar14;
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"skin");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,(TStringView<wchar_t> *)local_208);
  if (((pTVar17 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar17->Object == (FJsonValue *)0x0)) ||
     (pTVar17->Object->Type != Number)) {
LAB_14e6556d4:
    iVar14 = -1;
  }
  else {
    local_308 = L"skin";
    auStack_300._0_4_ = 4;
    local_1f8._8_8_ = CONCAT44(auStack_300._4_4_,4);
    local_1f8._0_8_ = L"skin";
    dVar25 = FJsonObject::GetNumberField(param_1,(TStringView<wchar_t> *)local_1f8);
    iVar14 = (int)dVar25;
    if (iVar14 < 0) goto LAB_14e6556d4;
  }
  auStack_300._16_4_ = 6;
  auStack_300._8_8_ = L"camera";
  local_1e8._8_8_ = CONCAT44(auStack_300._20_4_,6);
  local_1e8._0_8_ = L"camera";
  pFVar24->Skindex = iVar14;
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"camera");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,(TStringView<wchar_t> *)local_1e8);
  if (((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar17->Object != (FJsonValue *)0x0)) &&
     (pTVar17->Object->Type == Number)) {
    local_2e8 = L"camera";
    iStack_2e0 = 6;
    local_1d8._8_8_ = CONCAT44(iStack_2dc,6);
    local_1d8._0_8_ = L"camera";
    dVar25 = FJsonObject::GetNumberField(param_1,(TStringView<wchar_t> *)local_1d8);
    iVar14 = (int)dVar25;
    if (-1 < iVar14) goto LAB_14e655762;
  }
  iVar14 = -1;
LAB_14e655762:
  iStack_2d0 = 7;
  local_2d8 = L"weights";
  local_1c8._8_8_ = CONCAT44(uStack_2cc,7);
  local_1c8._0_8_ = L"weights";
  pFVar24->CameraIndex = iVar14;
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"weights");
  pTVar17 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar15,(TStringView<wchar_t> *)local_1c8);
  pFVar16 = pFVar24;
  if ((pTVar17 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar17->Object != (FJsonValue *)0x0)) {
    local_2c8 = L"weights";
    iStack_2c0 = 7;
    local_1b8._8_8_ = CONCAT44(iStack_2bc,7);
    local_1b8._0_8_ = L"weights";
    local_3b0 = FJsonObject::GetArrayField(param_1,(TStringView<wchar_t> *)local_1b8);
    pTVar3 = &pFVar24->MorphTargetWeights;
    uVar15 = local_3b0->ArrayNum;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar1 = &(pFVar24->MorphTargetWeights).ArrayMax;
    if ((pFVar24->MorphTargetWeights).ArrayMax < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&pTVar3->AllocatorInstance,(pFVar24->MorphTargetWeights).ArrayNum,piVar1
                );
    }
    pTVar12 = local_3b0;
    uVar20 = (ulonglong)local_3b0->ArrayNum;
    pFVar22 = (local_3b0->AllocatorInstance).Data;
    pFVar23 = pFVar22 + uVar20 * 0x10;
    local_3b0 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                CONCAT44(local_3b0._4_4_,local_3b0->ArrayNum);
    while( true ) {
      if (pTVar12->ArrayNum != (int)uVar20) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      pFVar16 = (FNode *)local_3a8._16_8_;
      if (pFVar22 == pFVar23) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
      pFVar6 = *(FJsonValue **)pFVar22;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar6 == (FJsonValue *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar25 = FJsonValue::AsNumber(pFVar6);
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_3b4 = (float)dVar25;
      if (((pFVar7 <= (FScriptContainerElement *)&local_3b4) &&
          ((FScriptContainerElement *)&local_3b4 < pFVar7 + (longlong)*piVar1 * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (pFVar24->MorphTargetWeights).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (pFVar24->MorphTargetWeights).ArrayNum = iVar14 + 1;
      *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_3b4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar20 = (ulonglong)local_3b0 & 0xffffffff;
      pFVar22 = pFVar22 + 0x10;
    }
  }
  local_2b8.Hash.InlineData[0] = '\0';
  local_2b8.Hash.InlineData[1] = '\0';
  local_2b8.Hash.InlineData[2] = '\0';
  local_2b8.Hash.InlineData[3] = '\0';
  local_2b8.Hash._padding_ = 0;
  local_2b8.Elements._16_8_ = 0;
  local_2b8.Elements._24_8_ = 0;
  local_2b8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2b8.Elements._48_8_ = _UNK_150631d98;
  local_2b8.HashSize = 0;
  local_2b8._76_4_ = 0;
  local_2b8.Elements._0_8_ = 0;
  local_2b8.Elements._8_8_ = 0;
  local_2b8.Elements._32_8_ = 0;
  local_2b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GLTF::`anonymous_namespace'::ProcessExtras(param_1,&pFVar16->Extras,&local_2b8);
  FExtensionsHandler::SetupNodeExtensions((this->ExtensionsHandler).Ptr,param_1,pFVar16);
  return;
}

// SetupNodesType @ 14e6562c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupNodesType(FFileReader *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FAsset *pFVar5;
  FAsset *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  bool bVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  uint *puVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 *puVar29;
  FFileReader *this_00;
  
  auVar24 = ___xmm_7ff00000000000007ff0000000000000;
  dVar23 = __real_3f1a36e2e0000000;
  uVar22 = _UNK_15061cc8c;
  uVar28 = _UNK_15061cc88;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar21 = __real_3e45798ee0000000;
  dVar20 = __real_3ff0000000000000;
  pFVar5 = this->Asset;
  iVar2 = (pFVar5->Nodes).ArrayNum;
  pFVar34 = (pFVar5->Nodes).AllocatorInstance.Data;
  fVar56 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
  fVar57 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
  fVar58 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
  fVar59 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
  fVar60 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar61 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar62 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar63 = GlobalVectorConstants::FloatOne.m128_f32[3];
  pFVar36 = pFVar34 + (longlong)iVar2 * 0x260;
  puVar29 = (undefined1 *)register0x00000020;
  this_00 = this;
  uVar45 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uVar46 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uVar47 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar48 = UE::Math::TQuat<double>::Identity.W._4_4_;
  uVar49 = UE::Math::TQuat<double>::Identity.X._0_4_;
  uVar50 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uVar51 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar52 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  do {
    if ((pFVar5->Nodes).ArrayNum != iVar2) {
      this_00 = (FFileReader *)&local_res8;
      local_res8 = 0;
      bVar25 = `TCheckedPointerIterator<GLTF::FNode,int,0>::operator!='::__l2::<lambda_1>::
               operator()(this_00);
      puVar29 = (undefined1 *)CONCAT71(extraout_var,bVar25);
      fVar56 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
      fVar57 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
      fVar58 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
      fVar59 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      fVar60 = GlobalVectorConstants::FloatOne.m128_f32[0];
      fVar61 = GlobalVectorConstants::FloatOne.m128_f32[1];
      fVar62 = GlobalVectorConstants::FloatOne.m128_f32[2];
      fVar63 = GlobalVectorConstants::FloatOne.m128_f32[3];
      uVar45 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uVar46 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uVar47 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar48 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar49 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uVar50 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uVar51 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar52 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    }
    if (pFVar34 == pFVar36) {
      pFVar5 = this->Asset;
      uVar3 = (pFVar5->Skins).ArrayNum;
      uVar33 = (ulonglong)(int)uVar3;
      pFVar36 = (pFVar5->Skins).AllocatorInstance.Data;
      pFVar34 = pFVar36 + 0x20;
      pFVar35 = pFVar36 + uVar33 * 0x98;
      do {
        if ((pFVar5->Skins).ArrayNum != (int)uVar33) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<GLTF::FSkinInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar36 == pFVar35) {
          return;
        }
        if (pFVar34[0x60] != (FScriptContainerElement)0x0) {
          local_res20 = *(uint *)pFVar34;
          uVar33 = (ulonglong)(int)local_res20;
          puVar37 = *(uint **)(pFVar34 + -8);
          puVar1 = puVar37 + uVar33;
          while( true ) {
            if (*(int *)pFVar34 != (int)uVar33) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            if (puVar37 == puVar1) break;
            uVar4 = *puVar37;
            lVar38 = (longlong)(int)uVar4;
            pFVar6 = this->Asset;
            uVar28 = 0;
            if ((int)uVar4 < (pFVar6->Nodes).ArrayNum) {
              uVar28 = ~uVar4 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)((pFVar6->Nodes).AllocatorInstance.Data + lVar38 * 0x260 + 0x80) != 0) {
              pFVar6 = this->Asset;
              uVar28 = 0;
              if ((int)uVar4 < (pFVar6->Nodes).ArrayNum) {
                uVar28 = ~uVar4 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (*(int *)((pFVar6->Nodes).AllocatorInstance.Data + lVar38 * 0x260 + 0x80) != 1) {
                pFVar6 = this->Asset;
                uVar28 = 0;
                if ((int)uVar4 < (pFVar6->Nodes).ArrayNum) {
                  uVar28 = ~uVar4 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if ((*(int *)((pFVar6->Nodes).AllocatorInstance.Data + lVar38 * 0x260 + 0x80) != 2)
                   && (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<_8658679761230363349>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                                           ,0x52b,
                                           "Asset->Nodes[JointIndex].Type == FNode::EType::None || Asset->Nodes[JointIndex].Type == FNode::EType::Transform || Asset->Nodes[JointIndex].Type == FNode::EType::Joint"
                                          ), bVar25)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
            }
            pFVar6 = this->Asset;
            uVar28 = 0;
            if ((int)uVar4 < (pFVar6->Nodes).ArrayNum) {
              uVar28 = ~uVar4 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar37 = puVar37 + 1;
            *(undefined4 *)((pFVar6->Nodes).AllocatorInstance.Data + lVar38 * 0x260 + 0x80) = 2;
            uVar33 = (ulonglong)local_res20;
          }
        }
        pFVar36 = pFVar36 + 0x98;
        uVar33 = (ulonglong)uVar3;
        pFVar34 = pFVar34 + 0x98;
      } while( true );
    }
    if (*(int *)(pFVar34 + 0x84) == -1) {
      if (*(int *)(pFVar34 + 0x8c) != -1) {
        *(undefined4 *)(pFVar34 + 0x80) = 5;
        goto LAB_14e65666b;
      }
      if ((*(int *)(pFVar34 + 0x90) != -1) || (*(int *)(pFVar34 + 0x98) != -1)) {
        *(undefined4 *)(pFVar34 + 0x80) = 6;
        goto LAB_14e65666b;
      }
      uVar32 = auVar24._0_4_;
      uVar53 = auVar24._4_4_;
      uVar54 = auVar24._8_4_;
      uVar55 = auVar24._12_4_;
      dVar43 = auVar24._0_8_;
      dVar39 = auVar24._8_8_;
      lVar38 = -(ulonglong)
                ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x2c),
                                  uVar54 & *(uint *)(pFVar34 + 0x28)) == dVar39);
      auVar8._8_4_ = (int)lVar38;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 0x24),
                                        uVar32 & *(uint *)(pFVar34 + 0x20)) == dVar43);
      auVar8._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar26 = movmskpd((int)this_00,auVar8);
      lVar38 = -(ulonglong)
                ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x1c),
                                  uVar54 & *(uint *)(pFVar34 + 0x18)) == dVar39);
      auVar15._8_4_ = (int)lVar38;
      auVar15._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 0x14),uVar32 & *(uint *)(pFVar34 + 0x10))
            == dVar43);
      auVar15._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      iVar27 = movmskpd((int)puVar29,auVar15);
      if ((uVar26 & 0x3fffffff) == 0 && iVar27 == 0) {
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x4c),
                                    uVar54 & *(uint *)(pFVar34 + 0x48)) == dVar39);
        auVar9._8_4_ = (int)lVar38;
        auVar9._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 0x44),
                                          uVar32 & *(uint *)(pFVar34 + 0x40)) == dVar43);
        auVar9._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar26 = movmskpd(0,auVar9);
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x3c),
                                    uVar54 & *(uint *)(pFVar34 + 0x38)) == dVar39);
        auVar16._8_4_ = (int)lVar38;
        auVar16._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 0x34),
                                uVar32 & *(uint *)(pFVar34 + 0x30)) == dVar43);
        auVar16._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar27 = movmskpd(iVar27,auVar16);
        if ((uVar26 & 0x3fffffff) != 0 || iVar27 != 0) goto LAB_14e656508;
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x6c),
                                    uVar54 & *(uint *)(pFVar34 + 0x68)) == dVar39);
        auVar10._8_4_ = (int)lVar38;
        auVar10._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 100),uVar32 & *(uint *)(pFVar34 + 0x60)
                               ) == dVar43);
        auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar26 = movmskpd(0,auVar10);
        lVar38 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & *(uint *)(pFVar34 + 0x5c),
                                    uVar54 & *(uint *)(pFVar34 + 0x58)) == dVar39);
        auVar17._8_4_ = (int)lVar38;
        auVar17._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar53 & *(uint *)(pFVar34 + 0x54),
                                uVar32 & *(uint *)(pFVar34 + 0x50)) == dVar43);
        auVar17._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar27 = movmskpd(iVar27,auVar17);
        if ((uVar26 & 0x3fffffff) != 0 || iVar27 != 0) goto LAB_14e656508;
        dVar43 = *(double *)(pFVar34 + 0x20) * *(double *)(pFVar34 + 0x20) +
                 *(double *)(pFVar34 + 0x10) * *(double *)(pFVar34 + 0x10);
        dVar39 = *(double *)(pFVar34 + 0x28) * *(double *)(pFVar34 + 0x28) +
                 *(double *)(pFVar34 + 0x18) * *(double *)(pFVar34 + 0x18);
        dVar40 = dVar39 + dVar43;
        dVar43 = dVar43 + dVar39;
        dVar39 = (double)fVar62 - dVar40;
        dVar42 = (double)fVar63 - dVar43;
        lVar38 = -(ulonglong)
                  ((double)fVar59 <
                  (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar22,
                                   SUB84(dVar42,0) & uVar28));
        dVar40 = (double)fVar60 - dVar40;
        dVar43 = (double)fVar61 - dVar43;
        auVar18._8_4_ = (int)lVar38;
        auVar18._0_8_ =
             -(ulonglong)
              ((double)fVar58 <
              (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar4,SUB84(dVar39,0) & uVar3));
        auVar18._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar26 = movmskpd(0,auVar18);
        lVar38 = -(ulonglong)
                  ((double)fVar57 <
                  (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar22,
                                   SUB84(dVar43,0) & uVar28));
        auVar11._8_4_ = (int)lVar38;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)fVar56 <
              (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar4,SUB84(dVar40,0) & uVar3));
        auVar11._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar27 = movmskpd(iVar27,auVar11);
        uVar30 = 0;
        if ((uVar26 & 0x3fffffff) != 0 || iVar27 != 0) goto LAB_14e656508;
      }
      else {
LAB_14e656508:
        uVar30 = 0x55398582;
        bVar25 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8658679761230363369>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFReader.cpp"
                            ,0x517,"Node.Transform.IsValid()");
        iVar27 = (int)CONCAT71(extraout_var_00,bVar25);
        if (bVar25) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar60 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar61 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar62 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar63 = GlobalVectorConstants::FloatOne.m128_f32[3];
        fVar56 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar57 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar58 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar59 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
        uVar45 = UE::Math::TQuat<double>::Identity.Z._0_4_;
        uVar46 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        uVar47 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar48 = UE::Math::TQuat<double>::Identity.W._4_4_;
        uVar49 = UE::Math::TQuat<double>::Identity.X._0_4_;
        uVar50 = UE::Math::TQuat<double>::Identity.X._4_4_;
        uVar51 = UE::Math::TQuat<double>::Identity.Y._0_4_;
        uVar52 = UE::Math::TQuat<double>::Identity.Y._4_4_;
      }
      dVar40 = (double)CONCAT44(uVar46,uVar45) + *(double *)(pFVar34 + 0x20);
      dVar42 = (double)CONCAT44(uVar48,uVar47) + *(double *)(pFVar34 + 0x28);
      dVar43 = *(double *)(pFVar34 + 0x20) - (double)CONCAT44(uVar46,uVar45);
      dVar39 = *(double *)(pFVar34 + 0x28) - (double)CONCAT44(uVar48,uVar47);
      dVar41 = *(double *)(pFVar34 + 0x10) - (double)CONCAT44(uVar50,uVar49);
      dVar44 = *(double *)(pFVar34 + 0x18) - (double)CONCAT44(uVar52,uVar51);
      lVar38 = -(ulonglong)
                (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar22,
                                           SUB84(dVar39,0) & uVar28));
      auVar12._8_4_ = (int)lVar38;
      auVar12._0_8_ =
           -(ulonglong)
            (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar4,
                                       SUB84(dVar43,0) & uVar3));
      auVar12._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      iVar31 = movmskpd(uVar30,auVar12);
      lVar38 = -(ulonglong)
                (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar22,
                                           SUB84(dVar44,0) & uVar28));
      dVar43 = *(double *)(pFVar34 + 0x10) + (double)CONCAT44(uVar50,uVar49);
      dVar39 = *(double *)(pFVar34 + 0x18) + (double)CONCAT44(uVar52,uVar51);
      auVar13._8_4_ = (int)lVar38;
      auVar13._0_8_ =
           -(ulonglong)
            (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar4,
                                       SUB84(dVar41,0) & uVar3));
      auVar13._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar26 = movmskpd(iVar27,auVar13);
      puVar29 = (undefined1 *)(ulonglong)uVar26;
      uVar32 = iVar31 << 2 | uVar26;
      this_00 = (FFileReader *)(ulonglong)uVar32;
      if (uVar32 != 0) {
        lVar38 = -(ulonglong)
                  (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar22,
                                             SUB84(dVar42,0) & uVar28));
        auVar14._8_4_ = (int)lVar38;
        auVar14._0_8_ =
             -(ulonglong)
              (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar4,
                                         SUB84(dVar40,0) & uVar3));
        auVar14._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        iVar27 = movmskpd(uVar32,auVar14);
        lVar38 = -(ulonglong)
                  (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar22,
                                             SUB84(dVar39,0) & uVar28));
        auVar19._8_4_ = (int)lVar38;
        auVar19._0_8_ =
             -(ulonglong)
              (dVar21 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar4,
                                         SUB84(dVar43,0) & uVar3));
        auVar19._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
        uVar26 = movmskpd(uVar26,auVar19);
        puVar29 = (undefined1 *)(ulonglong)uVar26;
        uVar26 = iVar27 << 2 | uVar26;
        this_00 = (FFileReader *)(ulonglong)uVar26;
        if (uVar26 == 0) goto LAB_14e6565ce;
LAB_14e656655:
        *(undefined4 *)(pFVar34 + 0x80) = 1;
        goto LAB_14e65666b;
      }
LAB_14e6565ce:
      if (((*(double *)(pFVar34 + 0x30) != 0.0) || (*(double *)(pFVar34 + 0x38) != 0.0)) ||
         (*(double *)(pFVar34 + 0x40) != 0.0)) goto LAB_14e656655;
      uVar26 = SUB84(*(double *)(pFVar34 + 0x50) - dVar20,0) & uVar3;
      uVar32 = (uint)((ulonglong)(*(double *)(pFVar34 + 0x50) - dVar20) >> 0x20) & uVar4;
      if (((dVar23 <= (double)CONCAT44(uVar32,uVar26) && (double)CONCAT44(uVar32,uVar26) != dVar23)
          || (uVar26 = SUB84(*(double *)(pFVar34 + 0x58) - dVar20,0) & uVar3,
             uVar32 = (uint)((ulonglong)(*(double *)(pFVar34 + 0x58) - dVar20) >> 0x20) & uVar4,
             dVar23 <= (double)CONCAT44(uVar32,uVar26) && (double)CONCAT44(uVar32,uVar26) != dVar23)
          ) || (uVar26 = SUB84(*(double *)(pFVar34 + 0x60) - dVar20,0) & uVar3,
               uVar32 = (uint)((ulonglong)(*(double *)(pFVar34 + 0x60) - dVar20) >> 0x20) & uVar4,
               dVar23 <= (double)CONCAT44(uVar32,uVar26) &&
               (double)CONCAT44(uVar32,uVar26) != dVar23)) goto LAB_14e656655;
    }
    else {
      uVar26 = (*(int *)(pFVar34 + 0x88) != -1) + 3;
      puVar29 = (undefined1 *)(ulonglong)uVar26;
      *(uint *)(pFVar34 + 0x80) = uVar26;
LAB_14e65666b:
      fVar60 = GlobalVectorConstants::FloatOne.m128_f32[0];
      fVar61 = GlobalVectorConstants::FloatOne.m128_f32[1];
      fVar62 = GlobalVectorConstants::FloatOne.m128_f32[2];
      fVar63 = GlobalVectorConstants::FloatOne.m128_f32[3];
      fVar56 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
      fVar57 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
      fVar58 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
      fVar59 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      uVar45 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uVar46 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uVar47 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar48 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar49 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uVar50 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uVar51 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar52 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    }
    pFVar34 = pFVar34 + 0x260;
  } while( true );
}

// SetupPrimitive @ 14e656990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FFileReader::SetupPrimitive
          (FFileReader *this,FJsonObject *param_1,FMesh *param_2,bool param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  FAsset *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 *puVar7;
  FJsonObject *pFVar8;
  FExtensionsHandler *this_00;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FMesh *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TSharedPtr<FJsonValue,1> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  TSharedPtr<FJsonObject,1> *pTVar21;
  FString *pFVar22;
  size_t sVar23;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar24;
  longlong *plVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  wchar_t *pwVar28;
  int iVar29;
  FAccessor *pFVar30;
  FScriptContainerElement *pFVar31;
  FAttributeAccessors *this_01;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar32;
  int iVar33;
  FScriptContainerElement FVar34;
  FScriptContainerElement FVar35;
  FScriptContainerElement *pFVar36;
  FMesh *pFVar37;
  double dVar38;
  undefined1 auStackY_378 [32];
  FScriptContainerElement local_338;
  FScriptContainerElement local_337;
  bool local_336;
  undefined1 local_335 [5];
  TArray<TTuple<GLTF::EMeshAttributeType,GLTF::FAccessor_&>,TSizedDefaultAllocator<32>_> local_330;
  int local_320;
  FFileReader *local_318;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_310;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *local_308;
  FMesh *local_300;
  FAccessor *local_2f8;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_208;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  FText local_198;
  FText local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2c8 = L"mode";
  uStack_2c0 = 4;
  local_1b8._12_4_ = uStack_2bc;
  local_1b8.Size = 4;
  local_1b8.DataPtr = L"mode";
  local_336 = param_3;
  local_318 = this;
  local_308 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)param_1;
  local_300 = param_2;
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"mode");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar14,&local_1b8);
  if (((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) &&
     (pTVar16->Object->Type == Number)) {
    local_2b8 = L"mode";
    uStack_2b0 = 4;
    local_1a8._12_4_ = uStack_2ac;
    local_1a8.Size = 4;
    local_1a8.DataPtr = L"mode";
    dVar38 = FJsonObject::GetNumberField(param_1,&local_1a8);
    iVar33 = (int)dVar38;
    if (-1 < iVar33) goto LAB_14e656a62;
  }
  iVar33 = 4;
LAB_14e656a62:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__), uVar11 = _UNK_151e59458,
     uVar10 = ___xmm_00000003000000010000000200000000,
     `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    local_68 = 4;
    uStack_64 = 5;
    local_60 = 6;
    `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
    SafetyCheck.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
    SafetyCheck.ArrayNum = 7;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,7,0,&`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'
                        ::__l2::SafetyCheck.AllocatorInstance,7,
               &`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::
                __l2::SafetyCheck.ArrayMax);
    FVar26 = `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::
             __l2::SafetyCheck.AllocatorInstance;
    local_78 = uVar10;
    uStack_70 = uVar11;
    *(undefined8 *)
     `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
     SafetyCheck.AllocatorInstance.Data = uVar10;
    *(undefined8 *)(FVar26.Data + 8) = uVar11;
    *(ulonglong *)(FVar26.Data + 0x10) = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(FVar26.Data + 0x18) = local_60;
    atexit(`GLTF::PrimitiveModeFromNumber'::__l2::_dynamic_atexit_destructor_for__SafetyCheck__);
    _Init_thread_footer(&`enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar26.Data = `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::
                __l2::SafetyCheck.AllocatorInstance.Data;
  do {
    if (FVar26.Data ==
        `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
        SafetyCheck.AllocatorInstance.Data +
        (longlong)
        `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::__l2::
        SafetyCheck.ArrayNum * 4) {
LAB_14e656ab3:
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8036928033329774472>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\ConversionUtilities.h"
                          ,0x78,
                          "SafetyCheck.Find(static_cast<FPrimitive::EMode>(Num)) != INDEX_NONE");
      if (!bVar13) {
        return;
      }
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(int *)FVar26.Data == iVar33) {
      if ((int)((longlong)FVar26.Data -
                (longlong)
                `enum_GLTF::FPrimitive::EMode___cdecl_GLTF::PrimitiveModeFromNumber(unsigned_int)'::
                __l2::SafetyCheck.AllocatorInstance.Data >> 2) != -1) {
        if (iVar33 == 7) {
          return;
        }
        FVar26.Data = FPrimitive::SupportedModes.AllocatorInstance.Data;
        break;
      }
      goto LAB_14e656ab3;
    }
    FVar26.Data = FVar26.Data + 4;
  } while( true );
joined_r0x00014e656b30:
  if (FVar26.Data ==
      FPrimitive::SupportedModes.AllocatorInstance.Data +
      (longlong)FPrimitive::SupportedModes.ArrayNum * 4) goto LAB_14e656b43;
  if (*(int *)FVar26.Data == iVar33) goto LAB_14e656c99;
  FVar26.Data = FVar26.Data + 4;
  goto joined_r0x00014e656b30;
LAB_14e656b43:
  pFVar17 = FText::FromString(&local_a8,&param_2->Name);
  uVar14 = *param_4;
  switch(iVar33) {
  case 0:
    pwVar28 = L"POINTS";
    break;
  case 1:
    pwVar28 = L"LINES";
    break;
  case 2:
    pwVar28 = L"LINE_LOOP";
    break;
  case 3:
    pwVar28 = L"LINE_STRIP";
    break;
  case 4:
    pwVar28 = L"TRIANGLES";
    break;
  case 5:
    pwVar28 = L"TRIANGLE_STRIP";
    break;
  case 6:
    pwVar28 = L"TRIANGLE_FAN";
    break;
  default:
    pwVar28 = L"UNKNOWN";
  }
  ::FString::FString(&local_2a8,pwVar28);
  pFVar18 = FText::FromString(&local_98,&local_2a8);
  pFVar19 = FText::AsLocalizable_Advanced_LocText
                      (&local_188,L"InterchangeGLTFReader",L"UnsupportedPrimitiveMode",
                       L"Primitive Mode[{0}] in Primitive[{1}] (in Mesh[{2}]) is currently not supported. Geometry won\'t be imported."
                      );
  pFVar20 = FTextFormat::FTextFormat(&local_88,pFVar19,Default);
  pFVar17 = FText::Format<FText,unsigned_int,FText>(&local_198,pFVar20,pFVar18,uVar14,pFVar17);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar15 = (int)this->_padding_;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,(ForAnyElementType *)this,piVar1);
  }
  *(int *)&this->_padding_ = iVar15 + 1;
  lVar4 = this->_padding_;
  lVar2 = (longlong)iVar15 * 3 + 1;
  *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 1;
  FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar17);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
LAB_14e656c99:
  uStack_290 = 8;
  local_298 = L"material";
  local_178._12_4_ = uStack_28c;
  local_178.Size = 8;
  local_178.DataPtr = L"material";
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"material");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar14,&local_178);
  if (((pTVar16 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar16->Object == (FJsonValue *)0x0)) ||
     (pTVar16->Object->Type != Number)) {
LAB_14e656d1a:
    local_320 = -1;
  }
  else {
    local_288 = L"material";
    uStack_280 = 8;
    local_168._12_4_ = uStack_27c;
    local_168.Size = 8;
    local_168.DataPtr = L"material";
    dVar38 = FJsonObject::GetNumberField(param_1,&local_168);
    local_320 = (int)dVar38;
    if (local_320 < 0) goto LAB_14e656d1a;
  }
  uStack_270 = 7;
  local_278 = L"indices";
  local_158._12_4_ = uStack_26c;
  local_158.Size = 7;
  local_158.DataPtr = L"indices";
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"indices");
  pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar14,&local_158);
  if (((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) &&
     (pTVar16->Object->Type == Number)) {
    local_268 = L"indices";
    uStack_260 = 7;
    local_148._12_4_ = uStack_25c;
    local_148.Size = 7;
    local_148.DataPtr = L"indices";
    dVar38 = FJsonObject::GetNumberField(param_1,&local_148);
    iVar15 = (int)dVar38;
    if (-1 < iVar15) goto LAB_14e656da4;
  }
  iVar15 = -1;
LAB_14e656da4:
  local_2f8 = GLTF::`anonymous_namespace'::AccessorAtIndex(&this->Asset->Accessors,iVar15);
  uStack_250 = 10;
  local_258 = L"attributes";
  local_138._12_4_ = uStack_24c;
  local_138.Size = 10;
  local_138.DataPtr = L"attributes";
  pTVar21 = FJsonObject::GetObjectField(param_1,&local_138);
  if ((pTVar21->Object == (FJsonObject *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar32 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)pTVar21->Object;
  iVar15 = 0;
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  local_330.ArrayMax = 0;
  local_310 = pTVar32;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xe,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
  FVar34 = (FScriptContainerElement)0x0;
  do {
    local_338 = FVar34;
    pFVar22 = GLTF::ToString(&local_118,(EMeshAttributeType *)&local_338);
    if ((pFVar22->Data).ArrayNum == 0) {
      local_2e8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e656e8c:
      pFVar31 = local_2e8;
      sVar23 = wcslen((wchar_t *)local_2e8);
      iVar29 = (int)sVar23;
    }
    else {
      pFVar31 = (pFVar22->Data).AllocatorInstance.Data;
      iVar29 = iVar15;
      local_2e8 = pFVar31;
      if (pFVar31 != (FScriptContainerElement *)0x0) goto LAB_14e656e8c;
    }
    local_d8._12_4_ = uStack_2dc;
    local_d8.Size = iVar29;
    local_d8.DataPtr = (wchar_t *)local_2e8;
    iStack_2e0 = iVar29;
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,(wchar_t *)pFVar31);
    pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar32,uVar14,&local_d8);
    if (((pTVar16 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar16->Object == (FJsonValue *)0x0)) ||
       (pTVar16->Object->Type != Number)) {
LAB_14e656f77:
      pFVar30 = &`GLTF::AccessorAtIndex'::`7'::EmptyAccessor;
    }
    else {
      iVar29 = iVar15;
      local_248 = pFVar31;
      if (pFVar31 != (FScriptContainerElement *)0x0) {
        sVar23 = wcslen((wchar_t *)pFVar31);
        iVar29 = (int)sVar23;
      }
      local_128._12_4_ = uStack_23c;
      local_128.Size = iVar29;
      local_128.DataPtr = (wchar_t *)local_248;
      iStack_240 = iVar29;
      dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar32,&local_128);
      iVar29 = (int)dVar38;
      if ((iVar29 < 0) || (pFVar5 = this->Asset, (pFVar5->Accessors).ArrayNum <= iVar29))
      goto LAB_14e656f77;
      if ((iVar29 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar30 = (FAccessor *)((pFVar5->Accessors).AllocatorInstance.Data + (longlong)iVar29 * 0xd0);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    pFVar30->bQuantized = local_336;
    iVar29 = local_330.ArrayNum;
    if (local_330.ArrayNum == local_330.ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_330.AllocatorInstance,&local_330.ArrayMax);
    }
    local_330.ArrayNum = iVar29 + 1;
    FVar35 = (FScriptContainerElement)((char)FVar34 + 1);
    local_330.AllocatorInstance.Data[(longlong)iVar29 * 0x10] = FVar34;
    *(FAccessor **)(local_330.AllocatorInstance.Data + (longlong)iVar29 * 0x10 + 8) = pFVar30;
    pTVar32 = local_310;
    FVar34 = FVar35;
  } while ((byte)FVar35 < 0xb);
  FVar34 = (FScriptContainerElement)0xb;
  do {
    local_337 = FVar34;
    pFVar22 = GLTF::ToString(&local_e8,(EMeshAttributeType *)&local_337);
    if ((pFVar22->Data).ArrayNum == 0) {
      local_2d8 = (FScriptContainerElement *)0x15060d16c;
LAB_14e657021:
      pFVar31 = local_2d8;
      sVar23 = wcslen((wchar_t *)local_2d8);
      iVar29 = (int)sVar23;
    }
    else {
      pFVar31 = (pFVar22->Data).AllocatorInstance.Data;
      iVar29 = iVar15;
      local_2d8 = pFVar31;
      if (pFVar31 != (FScriptContainerElement *)0x0) goto LAB_14e657021;
    }
    local_108._12_4_ = uStack_2cc;
    local_108.Size = iVar29;
    local_108.DataPtr = (wchar_t *)local_2d8;
    iStack_2d0 = iVar29;
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,(wchar_t *)pFVar31);
    pTVar32 = local_310;
    pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(local_310,uVar14,&local_108);
    if (((pTVar16 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar16->Object == (FJsonValue *)0x0)) ||
       (pTVar16->Object->Type != Number)) {
LAB_14e657111:
      pFVar30 = &`GLTF::AccessorAtIndex'::`7'::EmptyAccessor;
    }
    else {
      iVar29 = iVar15;
      local_238 = pFVar31;
      if (pFVar31 != (FScriptContainerElement *)0x0) {
        sVar23 = wcslen((wchar_t *)pFVar31);
        iVar29 = (int)sVar23;
      }
      local_f8._12_4_ = uStack_22c;
      local_f8.Size = iVar29;
      local_f8.DataPtr = (wchar_t *)local_238;
      iStack_230 = iVar29;
      dVar38 = FJsonObject::GetNumberField((FJsonObject *)pTVar32,&local_f8);
      iVar29 = (int)dVar38;
      if ((iVar29 < 0) || (pFVar5 = this->Asset, (pFVar5->Accessors).ArrayNum <= iVar29))
      goto LAB_14e657111;
      if ((iVar29 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar30 = (FAccessor *)((pFVar5->Accessors).AllocatorInstance.Data + (longlong)iVar29 * 0xd0);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    iVar29 = local_330.ArrayNum;
    if (local_330.ArrayNum == local_330.ArrayMax) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_330.AllocatorInstance,&local_330.ArrayMax);
    }
    pFVar12 = local_300;
    FVar35 = (FScriptContainerElement)((char)FVar34 + 1);
    local_330.ArrayNum = iVar29 + 1;
    local_330.AllocatorInstance.Data[(longlong)iVar29 * 0x10] = FVar34;
    *(FAccessor **)(local_330.AllocatorInstance.Data + (longlong)iVar29 * 0x10 + 8) = pFVar30;
    FVar34 = FVar35;
    if (0xd < (byte)FVar35) {
      iVar15 = (local_300->Primitives).ArrayNum;
      pTVar3 = &local_300->Primitives;
      if (iVar15 == (local_300->Primitives).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&pTVar3->AllocatorInstance,&(local_300->Primitives).ArrayMax);
      }
      (pFVar12->Primitives).ArrayNum = iVar15 + 1;
      this_01 = (FAttributeAccessors *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 0xa0);
      FAttributeAccessors::FAttributeAccessors(this_01,&local_330,false);
      *(int *)((longlong)&this_01[1].AttributeAccessors.AllocatorInstance.Data + 4) = local_320;
      this_01[1].AttributeAccessors.ArrayNum = 0;
      this_01[1].AttributeAccessors.ArrayMax = 0;
      *(undefined8 *)&this_01[1].bMorphTarget = 0;
      this_01[2].AttributeAccessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_01[2].AttributeAccessors.ArrayNum = 0;
      this_01[2].AttributeAccessors.ArrayMax = 0;
      this_01[3].AttributeAccessors.ArrayNum = 0;
      this_01[3].AttributeAccessors.ArrayMax = 0;
      *(int *)&this_01[1].AttributeAccessors.AllocatorInstance.Data = iVar33;
      *(undefined4 *)&this_01[3].bMorphTarget = 0;
      *(undefined4 *)&this_01[3].field_0x14 = 0x80;
      *(undefined4 *)&this_01[4].AttributeAccessors.AllocatorInstance.Data = 0xffffffff;
      *(undefined4 *)((longlong)&this_01[4].AttributeAccessors.AllocatorInstance.Data + 4) = 0;
      *(undefined8 *)&this_01[4].bMorphTarget = 0;
      *(undefined4 *)&this_01[5].AttributeAccessors.AllocatorInstance.Data = 0;
      this_01[5].AttributeAccessors.ArrayNum = 0;
      this_01[5].AttributeAccessors.ArrayMax = 0;
      *(undefined8 *)&this_01[5].bMorphTarget = 0;
      this_01[6].AttributeAccessors.AllocatorInstance.Data = (FScriptContainerElement *)local_2f8;
      *(undefined1 *)((longlong)&this_01[6].AttributeAccessors.ArrayNum + 1) = 0;
      local_228 = L"targets";
      uStack_220 = 7;
      local_b8._12_4_ = uStack_21c;
      local_b8.Size = 7;
      local_b8.DataPtr = L"targets";
      uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"targets");
      pTVar32 = local_308;
      pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(local_308,uVar14,&local_b8);
      pFVar37 = pFVar12;
      if ((pTVar16 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar16->Object != (FJsonValue *)0x0)) {
        local_218 = L"targets";
        uStack_210 = 7;
        local_c8._12_4_ = uStack_20c;
        local_c8.Size = 7;
        local_c8.DataPtr = L"targets";
        pTVar24 = FJsonObject::GetArrayField((FJsonObject *)pTVar32,&local_c8);
        iVar33 = pTVar24->ArrayNum;
        pFVar31 = (pTVar24->AllocatorInstance).Data;
        pFVar36 = pFVar31 + (longlong)iVar33 * 0x10;
        while( true ) {
          if (pTVar24->ArrayNum != iVar33) {
            local_335[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_335);
          }
          pTVar32 = local_308;
          pFVar37 = local_300;
          if (pFVar31 == pFVar36) break;
          pTVar6 = *(TReferenceControllerBase<1> **)(pFVar31 + 8);
          puVar7 = *(undefined8 **)pFVar31;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((puVar7 == (undefined8 *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          plVar25 = (longlong *)(**(code **)*puVar7)(puVar7);
          if ((*plVar25 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = (pFVar12->Primitives).ArrayNum;
          pFVar8 = (FJsonObject *)*plVar25;
          uVar27 = iVar15 - 1;
          uVar14 = 0;
          if ((int)uVar27 < iVar15) {
            uVar14 = ~uVar27 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          SetupMorphTarget(local_318,pFVar8,
                           (FPrimitive *)
                           ((pTVar3->AllocatorInstance).Data +
                           (longlong)((pFVar12->Primitives).ArrayNum + -1) * 0xa0),local_336);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          pFVar31 = pFVar31 + 0x10;
        }
      }
      iVar33 = (pFVar12->Primitives).ArrayNum;
      local_208.Hash.InlineData[0] = '\0';
      local_208.Hash.InlineData[1] = '\0';
      local_208.Hash.InlineData[2] = '\0';
      local_208.Hash.InlineData[3] = '\0';
      local_208.Hash._padding_ = 0;
      local_208.Elements._16_8_ = 0;
      local_208.Elements._24_8_ = 0;
      local_208.HashSize = 0;
      local_208._76_4_ = 0;
      uVar27 = iVar33 - 1;
      local_208.Elements._0_8_ = 0;
      local_208.Elements._8_8_ = 0;
      local_208.Elements._32_8_ = 0;
      local_208.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_208.Elements._48_8_ = _UNK_150631d98;
      uVar14 = 0;
      if ((int)uVar27 < iVar33) {
        uVar14 = ~uVar27 >> 0x1f;
      }
      local_208.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      GLTF::`anonymous_namespace'::ProcessExtras
                ((FJsonObject *)pTVar32,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)((pTVar3->AllocatorInstance).Data +
                    (longlong)((pFVar12->Primitives).ArrayNum + -1) * 0xa0 + 0x30),&local_208);
      iVar33 = (pFVar37->Primitives).ArrayNum;
      uVar27 = iVar33 - 1;
      this_00 = (local_318->ExtensionsHandler).Ptr;
      uVar14 = 0;
      if ((int)uVar27 < iVar33) {
        uVar14 = ~uVar27 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FExtensionsHandler::SetupPrimitiveExtensions
                (this_00,(FJsonObject *)pTVar32,
                 (FPrimitive *)
                 ((pTVar3->AllocatorInstance).Data +
                 (longlong)((pFVar12->Primitives).ArrayNum + -1) * 0xa0),uVar27,&pFVar37->UniqueId);
      if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.AllocatorInstance.Data);
      }
      return;
    }
  } while( true );
}

// SetupSampler @ 14e658710

void __thiscall GLTF::FFileReader::SetupSampler(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  FAsset *pFVar2;
  FScriptContainerElement *pFVar3;
  FExtensionsHandler *this_00;
  double dVar4;
  int iVar5;
  uint uVar6;
  EFilter EVar7;
  EWrap EVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  TStringView<wchar_t> local_18;
  
  pFVar2 = this->Asset;
  iVar5 = (pFVar2->Samplers).ArrayNum;
  piVar1 = &(pFVar2->Samplers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(pFVar2->Samplers).AllocatorInstance,piVar1);
  }
  lVar11 = (longlong)iVar5;
  (pFVar2->Samplers).ArrayNum = iVar5 + 1;
  pFVar3 = (pFVar2->Samplers).AllocatorInstance.Data;
  local_18.Size = 9;
  *(undefined4 *)(pFVar3 + lVar11 * 0x10) = 0x2601;
  *(undefined4 *)(pFVar3 + lVar11 * 0x10 + 4) = 0x2601;
  *(undefined4 *)(pFVar3 + lVar11 * 0x10 + 8) = 0x2901;
  *(undefined4 *)(pFVar3 + lVar11 * 0x10 + 0xc) = 0x2901;
  local_18.DataPtr = L"minFilter";
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"minFilter");
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar6,&local_18);
  if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
     (pTVar9->Object->Type != Number)) {
LAB_14e658807:
    iVar5 = 0x2601;
  }
  else {
    local_18.DataPtr = L"minFilter";
    local_18.Size = 9;
    dVar4 = FJsonObject::GetNumberField(param_1,&local_18);
    iVar5 = (int)dVar4;
    if (iVar5 < 0) goto LAB_14e658807;
  }
  EVar7 = FilterFromNumber((ushort)iVar5);
  local_18.Size = 9;
  local_18.DataPtr = L"magFilter";
  *(EFilter *)(pFVar3 + lVar11 * 0x10) = EVar7;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(9,L"magFilter");
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar6,&local_18);
  if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
     (pTVar9->Object->Type != Number)) {
LAB_14e65888f:
    iVar5 = 0x2601;
  }
  else {
    local_18.DataPtr = L"magFilter";
    local_18.Size = 9;
    dVar4 = FJsonObject::GetNumberField(param_1,&local_18);
    iVar5 = (int)dVar4;
    if (iVar5 < 0) goto LAB_14e65888f;
  }
  EVar7 = FilterFromNumber((ushort)iVar5);
  local_18.Size = 5;
  local_18.DataPtr = L"wrapS";
  *(EFilter *)(pFVar3 + lVar11 * 0x10 + 4) = EVar7;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"wrapS");
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar6,&local_18);
  if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
     (pTVar9->Object->Type != Number)) {
LAB_14e658918:
    iVar5 = 0x2901;
  }
  else {
    local_18.DataPtr = L"wrapS";
    local_18.Size = 5;
    dVar4 = FJsonObject::GetNumberField(param_1,&local_18);
    iVar5 = (int)dVar4;
    if (iVar5 < 0) goto LAB_14e658918;
  }
  EVar8 = WrapModeFromNumber((ushort)iVar5);
  local_18.Size = 5;
  local_18.DataPtr = L"wrapT";
  *(EWrap *)(pFVar3 + lVar11 * 0x10 + 8) = EVar8;
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"wrapT");
  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar6,&local_18);
  if (((pTVar9 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar9->Object != (FJsonValue *)0x0)) &&
     (pTVar9->Object->Type == Number)) {
    local_18.DataPtr = L"wrapT";
    local_18.Size = 5;
    dVar4 = FJsonObject::GetNumberField(param_1,&local_18);
    iVar5 = (int)dVar4;
    if (-1 < iVar5) goto LAB_14e6589a6;
  }
  iVar5 = 0x2901;
LAB_14e6589a6:
  EVar8 = WrapModeFromNumber((ushort)iVar5);
  uVar10 = (ulonglong)_tls_index;
  *(EWrap *)(pFVar3 + lVar11 * 0x10 + 0xc) = EVar8;
  this_00 = (this->ExtensionsHandler).Ptr;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupSamplerExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
  return;
}

// SetupScene @ 14e658ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupScene(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FAsset *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FJsonValue *this_00;
  FExtensionsHandler *this_01;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  double dVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_138 [2];
  FString local_130;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_120;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  pFVar4 = this->Asset;
  piVar1 = &(pFVar4->Scenes).ArrayMax;
  iVar8 = (pFVar4->Scenes).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,&(pFVar4->Scenes).AllocatorInstance,piVar1);
  }
  pFVar13 = (pFVar4->Scenes).AllocatorInstance.Data + (longlong)iVar8 * 0x80;
  (pFVar4->Scenes).ArrayNum = iVar8 + 1;
  local_118 = L"name";
  uStack_110 = 4;
  *(undefined8 *)(pFVar13 + 0x30) = 0;
  *(undefined8 *)(pFVar13 + 0x38) = 0;
  pFVar2 = pFVar13 + 0x10;
  *(undefined8 *)(pFVar13 + 0x58) = 0;
  local_88._12_4_ = uStack_10c;
  local_88.Size = 4;
  pFVar3 = pFVar13 + 0x1c;
  *(undefined4 *)(pFVar13 + 0x6c) = 0;
  local_120 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)(pFVar13 + 0x20);
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)local_120 = 0;
  *(undefined8 *)(pFVar13 + 0x28) = 0;
  *(undefined8 *)(pFVar13 + 0x40) = 0;
  *(undefined8 *)(pFVar13 + 8) = 0;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar13 + 0x18) = 0;
  *(int *)pFVar3 = 0;
  *(undefined4 *)(pFVar13 + 0x48) = 0;
  *(undefined4 *)(pFVar13 + 0x4c) = 0x80;
  *(undefined4 *)(pFVar13 + 0x50) = 0xffffffff;
  *(undefined4 *)(pFVar13 + 0x54) = 0;
  *(undefined8 *)(pFVar13 + 0x60) = 0;
  *(undefined4 *)(pFVar13 + 0x68) = 0;
  *(undefined8 *)(pFVar13 + 0x70) = 0;
  *(undefined8 *)(pFVar13 + 0x78) = 0;
  local_88.DataPtr = L"name";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_88);
  if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
     (pTVar10->Object->Type != String)) {
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_108 = L"name";
    uStack_100 = 4;
    local_78._12_4_ = uStack_fc;
    local_78.Size = 4;
    local_78.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_130,&local_78);
  }
  if (pFVar13 != (FScriptContainerElement *)&local_130) {
    if (*(void **)pFVar13 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar13);
    }
    *(FScriptContainerElement **)pFVar13 = local_130.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_130.Data.ArrayNum;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar13 + 0xc) = local_130.Data.ArrayMax;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  uStack_f0 = 5;
  local_f8 = L"nodes";
  local_68._12_4_ = uStack_ec;
  local_68.Size = 5;
  local_68.DataPtr = L"nodes";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"nodes");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_68);
  if ((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) {
    local_e8 = L"nodes";
    uStack_e0 = 5;
    local_58._12_4_ = uStack_dc;
    local_58.Size = 5;
    local_58.DataPtr = L"nodes";
    pTVar11 = FJsonObject::GetArrayField(param_1,&local_58);
    uVar9 = pTVar11->ArrayNum;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (*(int *)pFVar3 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,(ForAnyElementType *)pFVar2,*(int *)(pFVar13 + 0x18),(int *)pFVar3);
    }
    local_res20 = pTVar11->ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pFVar14 = (pTVar11->AllocatorInstance).Data;
    pFVar15 = pFVar14 + uVar12 * 0x10;
    while( true ) {
      if (pTVar11->ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar14 == pFVar15) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
      this_00 = *(FJsonValue **)pFVar14;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FJsonValue *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar16 = FJsonValue::AsNumber(this_00);
      local_138[0] = (int)dVar16;
      if (((*(FScriptContainerElement **)&pFVar2->field_0x0 <= (FScriptContainerElement *)local_138)
          && ((FScriptContainerElement *)local_138 <
              *(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)*(int *)pFVar3 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)(pFVar13 + 0x18);
      if (iVar8 == *(int *)pFVar3) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar2,(int *)pFVar3);
      }
      *(int *)(pFVar13 + 0x18) = iVar8 + 1;
      *(int *)(*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar8 * 4) = local_138[0]
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar12 = (ulonglong)local_res20;
      pFVar14 = pFVar14 + 0x10;
    }
  }
  local_d8.Hash.InlineData[0] = '\0';
  local_d8.Hash.InlineData[1] = '\0';
  local_d8.Hash.InlineData[2] = '\0';
  local_d8.Hash.InlineData[3] = '\0';
  local_d8.Hash._padding_ = 0;
  local_d8.Elements._16_8_ = 0;
  local_d8.Elements._24_8_ = 0;
  local_d8.HashSize = 0;
  local_d8._76_4_ = 0;
  local_d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d8.Elements._48_8_ = _UNK_150631d98;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GLTF::`anonymous_namespace'::ProcessExtras(param_1,local_120,&local_d8);
  this_01 = (this->ExtensionsHandler).Ptr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`GLTF::FExtensionsHandler::SetupSceneExtensions'::__l2::
           _dynamic_atexit_destructor_for__Extensions__);
    _Init_thread_footer(&::_TSS0);
  }
  FExtensionsHandler::CheckExtensions(this_01,param_1,&Extensions);
  return;
}

// SetupSkin @ 14e658fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GLTF::FFileReader::SetupSkin(FFileReader *this,FJsonObject *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FAsset *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FJsonValue *this_00;
  FExtensionsHandler *this_01;
  code *pcVar6;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  FAccessor *pFVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  double dVar17;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  int local_1a8 [2];
  FString local_1a0;
  longlong local_190;
  FScriptContainerElement *local_188;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_108;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  uStack_170 = 0x13;
  local_178 = L"inverseBindMatrices";
  local_b8._12_4_ = uStack_16c;
  local_b8.Size = 0x13;
  local_b8.DataPtr = L"inverseBindMatrices";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(0x13,L"inverseBindMatrices");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_b8);
  if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
     (pTVar10->Object->Type != Number)) {
LAB_14e65903c:
    iVar13 = -1;
  }
  else {
    local_168 = L"inverseBindMatrices";
    uStack_160 = 0x13;
    local_a8._12_4_ = uStack_15c;
    local_a8.Size = 0x13;
    local_a8.DataPtr = L"inverseBindMatrices";
    dVar17 = FJsonObject::GetNumberField(param_1,&local_a8);
    iVar13 = (int)dVar17;
    if (iVar13 < 0) goto LAB_14e65903c;
  }
  pFVar11 = GLTF::`anonymous_namespace'::AccessorAtIndex(&this->Asset->Accessors,iVar13);
  pFVar3 = this->Asset;
  iVar13 = (pFVar3->Skins).ArrayNum;
  piVar2 = &(pFVar3->Skins).ArrayMax;
  if (iVar13 == *piVar2) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x898,&(pFVar3->Skins).AllocatorInstance,piVar2);
  }
  uStack_150 = 4;
  (pFVar3->Skins).ArrayNum = iVar13 + 1;
  lVar16 = (longlong)iVar13 * 0x98;
  pFVar4 = (pFVar3->Skins).AllocatorInstance.Data;
  *(FAccessor **)(pFVar4 + lVar16) = pFVar11;
  pFVar14 = pFVar4 + lVar16 + 8;
  pFVar1 = pFVar4 + lVar16 + 0x24;
  *(undefined8 *)pFVar14 = 0;
  *(undefined8 *)(pFVar14 + 8) = 0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x18) = 0;
  *(undefined4 *)(pFVar4 + lVar16 + 0x20) = 0;
  *(int *)pFVar1 = 0;
  *(undefined4 *)(pFVar4 + lVar16 + 0x28) = 0xffffffff;
  *(undefined8 *)(pFVar4 + lVar16 + 0x30) = 0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x38) = 0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x50) = 0;
  *(undefined4 *)(pFVar4 + lVar16 + 0x58) = 0;
  *(undefined4 *)(pFVar4 + lVar16 + 0x5c) = 0x80;
  *(undefined4 *)(pFVar4 + lVar16 + 0x60) = 0xffffffff;
  *(undefined4 *)(pFVar4 + lVar16 + 100) = 0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x70) = 0;
  *(undefined4 *)(pFVar4 + lVar16 + 0x78) = 0;
  local_158 = L"name";
  local_98._12_4_ = uStack_14c;
  local_98.Size = 4;
  local_98.DataPtr = L"name";
  pFVar4[lVar16 + 0x80] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x88) = 0;
  *(undefined8 *)(pFVar4 + lVar16 + 0x90) = 0;
  local_190 = lVar16;
  local_188 = pFVar4;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_98);
  if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
     (pTVar10->Object->Type != String)) {
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_148 = L"name";
    uStack_140 = 4;
    local_88._12_4_ = uStack_13c;
    local_88.Size = 4;
    local_88.DataPtr = L"name";
    FJsonObject::GetStringField(param_1,&local_1a0,&local_88);
  }
  if (pFVar14 != (FScriptContainerElement *)&local_1a0) {
    if (*(void **)pFVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar14);
    }
    *(FScriptContainerElement **)pFVar14 = local_1a0.Data.AllocatorInstance.Data;
    *(int *)(pFVar14 + 8) = local_1a0.Data.ArrayNum;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar14 + 0xc) = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  uStack_130 = 6;
  local_138 = L"joints";
  local_78._12_4_ = uStack_12c;
  local_78.Size = 6;
  local_78.DataPtr = L"joints";
  local_res18 = FJsonObject::GetArrayField(param_1,&local_78);
  uVar9 = local_res18->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*(int *)pFVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,(ForAnyElementType *)(pFVar4 + lVar16 + 0x18),
               *(int *)(pFVar4 + lVar16 + 0x20),(int *)pFVar1);
  }
  pTVar7 = local_res18;
  local_res20 = local_res18->ArrayNum;
  uVar12 = (ulonglong)(int)local_res20;
  pFVar14 = (local_res18->AllocatorInstance).Data;
  pFVar15 = pFVar14 + uVar12 * 0x10;
  while( true ) {
    if (pTVar7->ArrayNum != (int)uVar12) {
      local_res18 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                    ((ulonglong)local_res18 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res18);
    }
    if (pFVar14 == pFVar15) break;
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    this_00 = *(FJsonValue **)pFVar14;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FJsonValue *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    dVar17 = FJsonValue::AsNumber(this_00);
    local_1a8[0] = (int)dVar17;
    if ((*(int **)(pFVar4 + lVar16 + 0x18) <= local_1a8) &&
       (local_1a8 < *(int **)(pFVar4 + lVar16 + 0x18) + *(int *)pFVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar13 = *(int *)(pFVar4 + lVar16 + 0x20);
    if (iVar13 == *(int *)pFVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(pFVar4 + lVar16 + 0x18),(int *)pFVar1);
    }
    *(int *)(pFVar4 + lVar16 + 0x20) = iVar13 + 1;
    *(int *)(*(longlong *)(pFVar4 + lVar16 + 0x18) + (longlong)iVar13 * 4) = local_1a8[0];
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    uVar12 = (ulonglong)local_res20;
    pFVar14 = pFVar14 + 0x10;
  }
  uStack_120 = 8;
  local_128 = L"skeleton";
  local_68._12_4_ = uStack_11c;
  local_68.Size = 8;
  local_68.DataPtr = L"skeleton";
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(8,L"skeleton");
  pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar9,&local_68);
  if (((pTVar10 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar10->Object != (FJsonValue *)0x0)) &&
     (pTVar10->Object->Type == Number)) {
    local_118 = L"skeleton";
    uStack_110 = 8;
    local_58._12_4_ = uStack_10c;
    local_58.Size = 8;
    local_58.DataPtr = L"skeleton";
    dVar17 = FJsonObject::GetNumberField(param_1,&local_58);
    iVar13 = (int)dVar17;
    if (-1 < iVar13) goto LAB_14e659407;
  }
  iVar13 = -1;
LAB_14e659407:
  local_108.Elements._48_8_ = _UNK_150631d98;
  local_108.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_108.Elements._16_8_ = 0;
  local_108.Elements._24_8_ = 0;
  *(int *)(local_188 + local_190 + 0x28) = iVar13;
  local_108.Hash.InlineData[0] = '\0';
  local_108.Hash.InlineData[1] = '\0';
  local_108.Hash.InlineData[2] = '\0';
  local_108.Hash.InlineData[3] = '\0';
  local_108.Hash._padding_ = 0;
  local_108.HashSize = 0;
  local_108._76_4_ = 0;
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  GLTF::`anonymous_namespace'::ProcessExtras
            (param_1,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)(local_188 + local_190 + 0x30),&local_108);
  this_01 = (this->ExtensionsHandler).Ptr;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`GLTF::FExtensionsHandler::SetupSkinExtensions'::__l2::
             _dynamic_atexit_destructor_for__Extensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FExtensionsHandler::CheckExtensions(this_01,param_1,&Extensions);
  return;
}

// SetupTexture @ 14e659580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall GLTF::FFileReader::SetupTexture(FFileReader *this,FJsonObject *param_1)

{
  int *piVar1;
  FAsset *pFVar2;
  FScriptContainerElement *pFVar3;
  FExtensionsHandler *this_00;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  longlong lVar14;
  FSampler *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  double dVar18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  FString local_1a8;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FTextFormat local_138;
  FText local_128;
  FFormatArgumentValue local_118;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FTextFormat local_38;
  
  uStack_190 = 6;
  local_198 = L"source";
  local_a8._12_4_ = uStack_18c;
  local_a8.Size = 6;
  local_a8.DataPtr = L"source";
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"source");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar7,&local_a8);
  if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
     (pTVar11->Object->Type != Number)) {
LAB_14e659614:
    uVar7 = 0xffffffff;
  }
  else {
    local_188 = L"source";
    uStack_180 = 6;
    local_98._12_4_ = uStack_17c;
    local_98.Size = 6;
    local_98.DataPtr = L"source";
    dVar18 = FJsonObject::GetNumberField(param_1,&local_98);
    uVar7 = (uint)dVar18;
    if ((int)uVar7 < 0) goto LAB_14e659614;
  }
  uStack_170 = 7;
  local_178 = L"sampler";
  local_88._12_4_ = uStack_16c;
  local_88.Size = 7;
  local_88.DataPtr = L"sampler";
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"sampler");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar8,&local_88);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Number)) {
    local_168 = L"sampler";
    uStack_160 = 7;
    local_78._12_4_ = uStack_15c;
    local_78.Size = 7;
    local_78.DataPtr = L"sampler";
    dVar18 = FJsonObject::GetNumberField(param_1,&local_78);
    uVar8 = (uint)dVar18;
    if (-1 < (int)uVar8) goto LAB_14e65969d;
  }
  uVar8 = 0xffffffff;
LAB_14e65969d:
  if (((int)uVar7 < 0) || ((this->Asset->Images).ArrayNum <= (int)uVar7)) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"InterchangeGLTFReader",L"InvalidTextureSourceIndex",
                         L"Invalid texture source index: {0}");
    pFVar13 = FTextFormat::FTextFormat(&local_38,pFVar12,Default);
    local_118.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar7;
    local_118.Type = Int;
    local_118.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_118.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_1b8.AllocatorInstance.Data,&local_118,1);
    local_138.TextFormatData.Object = (pFVar13->TextFormatData).Object;
    local_138.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_138.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_128,&local_138,&local_1b8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
    iVar10 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)this,piVar1);
    }
    *(int *)&this->_padding_ = iVar10 + 1;
    lVar16 = this->_padding_;
    lVar14 = (longlong)iVar10 * 3 + 1;
    *(undefined4 *)(lVar16 + -8 + lVar14 * 8) = 1;
    FText::FText((FText *)(lVar16 + lVar14 * 8),&local_128);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    if (((int)uVar8 < 0) || ((this->Asset->Samplers).ArrayNum <= (int)uVar8)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    uStack_150 = 4;
    local_158 = L"name";
    local_68._12_4_ = uStack_14c;
    local_68.Size = 4;
    local_68.DataPtr = L"name";
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"name");
    pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>
                        ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                          *)param_1,uVar9,&local_68);
    if (((pTVar11 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar11->Object == (FJsonValue *)0x0)) ||
       (pTVar11->Object->Type != String)) {
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
    }
    else {
      local_148 = L"name";
      uStack_140 = 4;
      local_58._12_4_ = uStack_13c;
      local_58.Size = 4;
      local_58.DataPtr = L"name";
      FJsonObject::GetStringField(param_1,&local_1a8,&local_58);
    }
    pFVar2 = this->Asset;
    uVar9 = 0;
    if ((int)uVar7 < (pFVar2->Images).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar17 = (pFVar2->Images).AllocatorInstance.Data;
    if (bVar6) {
      pFVar2 = this->Asset;
      uVar9 = 0;
      if ((int)uVar8 < (pFVar2->Samplers).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar15 = (FSampler *)
                ((pFVar2->Samplers).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
    }
    else {
      pFVar15 = &FSampler::DefaultSampler;
    }
    pFVar2 = this->Asset;
    iVar10 = (pFVar2->Textures).ArrayNum;
    piVar1 = &(pFVar2->Textures).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x880,&(pFVar2->Textures).AllocatorInstance,piVar1);
    }
    _Src.Data = local_1a8.Data.AllocatorInstance.Data;
    (pFVar2->Textures).ArrayNum = iVar10 + 1;
    pFVar3 = (pFVar2->Textures).AllocatorInstance.Data;
    lVar14 = (longlong)iVar10 * 0x80;
    *(FScriptContainerElement **)(pFVar3 + lVar14) = pFVar17 + (longlong)(int)uVar7 * 0xa8;
    pFVar17 = pFVar3 + lVar14 + 0x10;
    *(FSampler **)(pFVar3 + lVar14 + 8) = pFVar15;
    *(undefined8 *)&pFVar17->field_0x0 = 0;
    lVar16 = (longlong)local_1a8.Data.ArrayNum;
    *(int *)&pFVar17[8].field_0x0 = local_1a8.Data.ArrayNum;
    if (local_1a8.Data.ArrayNum == 0) {
      *(int *)(pFVar17 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,local_1a8.Data.ArrayNum,
                 (int *)(pFVar17 + 0xc));
      memcpy(*(void **)&pFVar17->field_0x0,_Src.Data,lVar16 * 2);
    }
    *(undefined8 *)(pFVar3 + lVar14 + 0x20) = 0;
    *(undefined8 *)(pFVar3 + lVar14 + 0x28) = 0;
    *(undefined8 *)(pFVar3 + lVar14 + 0x40) = 0;
    *(undefined4 *)(pFVar3 + lVar14 + 0x48) = 0;
    *(undefined4 *)(pFVar3 + lVar14 + 0x4c) = 0x80;
    *(undefined4 *)(pFVar3 + lVar14 + 0x50) = 0xffffffff;
    *(undefined4 *)(pFVar3 + lVar14 + 0x54) = 0;
    *(undefined8 *)(pFVar3 + lVar14 + 0x60) = 0;
    *(undefined4 *)(pFVar3 + lVar14 + 0x68) = 0;
    *(undefined8 *)(pFVar3 + lVar14 + 0x70) = 0;
    *(undefined8 *)(pFVar3 + lVar14 + 0x78) = 0;
    pFVar2 = this->Asset;
    local_f8.Elements._16_8_ = 0;
    local_f8.Elements._24_8_ = 0;
    local_f8.Hash.InlineData[0] = '\0';
    local_f8.Hash.InlineData[1] = '\0';
    local_f8.Hash.InlineData[2] = '\0';
    local_f8.Hash.InlineData[3] = '\0';
    local_f8.Hash._padding_ = 0;
    local_f8.HashSize = 0;
    local_f8._76_4_ = 0;
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_f8.Elements._48_8_ = _UNK_150631d98;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    iVar10 = (pFVar2->Textures).ArrayNum;
    uVar8 = iVar10 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar10) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    GLTF::`anonymous_namespace'::ProcessExtras
              (param_1,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)((pFVar2->Textures).AllocatorInstance.Data +
                          (longlong)((pFVar2->Textures).ArrayNum + -1) * 0x80 + 0x20),&local_f8);
    this_00 = (this->ExtensionsHandler).Ptr;
    iVar10 = (this->Asset->Textures).ArrayNum;
    uVar8 = iVar10 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar10) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`GLTF::FExtensionsHandler::SetupTextureExtensions'::__l2::
               _dynamic_atexit_destructor_for__Extensions__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FExtensionsHandler::CheckExtensions(this_00,param_1,&Extensions);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupUsedSkins @ 14e659ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall GLTF::FFileReader::SetupUsedSkins(FFileReader *this)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  uint uVar14;
  uint uVar15;
  FAsset *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  ForElementType<unsigned_int> local_48;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_30 = (this->Asset->Skins).ArrayNum;
  uVar17 = 0;
  local_48.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2c = 0x80;
  uVar19 = local_30 + 0x1f;
  uVar14 = uVar19 >> 5;
  if (uVar19 >> 5 != 0) {
    if (4 < uVar14) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_48,0,uVar14,4);
      local_2c = uVar14 << 5;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_48;
    if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_48.SecondaryData;
    }
    memset((void *)FVar10,0,(ulonglong)uVar14 << 2);
    uVar19 = local_30 & 0x8000001f;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
    }
    if (uVar19 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_48;
      if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_48.SecondaryData;
      }
      puVar3 = (uint *)((longlong)FVar10 +
                       (longlong)((int)(local_30 + ((int)local_30 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)uVar19 & 0x1f);
    }
  }
  pFVar16 = this->Asset;
  uVar18 = uVar17;
  if ((pFVar16->Nodes).ArrayNum != 0) {
    do {
      iVar9 = (pFVar16->Nodes).ArrayNum;
      uVar14 = (uint)uVar18;
      uVar19 = 0;
      if ((int)uVar14 < iVar9) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_b8 = (longlong)(int)uVar14;
        local_b0 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)((pFVar16->Nodes).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 0x260 + 0x88);
      if (iVar9 != -1) {
        if (((iVar9 < 0) || ((int)local_30 <= iVar9)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar10 = (ForElementType<unsigned_int>)&local_48;
        if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_48.SecondaryData;
        }
        iVar8 = iVar9;
        if (iVar9 < 0) {
          iVar8 = iVar9 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)(iVar8 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar9 & 0x1f);
      }
      pFVar16 = this->Asset;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulonglong)(longlong)(pFVar16->Nodes).ArrayNum);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar19 = 0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (local_30 != 0) {
    do {
      pFVar16 = this->Asset;
      uVar15 = (uint)uVar17;
      iVar9 = (pFVar16->Skins).ArrayNum;
      uVar14 = uVar19;
      if ((int)uVar15 < iVar9) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_b8 = (longlong)(int)uVar15;
        local_b0 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar4 = (pFVar16->Skins).AllocatorInstance.Data;
      if ((((int)uVar15 < 0) || ((int)local_30 <= (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_48;
      if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_48.SecondaryData;
      }
      uVar14 = uVar15;
      if ((int)uVar15 < 0) {
        uVar14 = uVar15 + 0x1f;
      }
      uVar14 = 1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((longlong)FVar10 + (longlong)((int)uVar14 >> 5) * 4);
      pFVar4[(longlong)(int)uVar15 * 0x98 + 0x80] = (FScriptContainerElement)(uVar14 != 0);
      if (uVar14 == 0) {
        uVar14 = local_a8.Data.ArrayNum - 1;
        if (local_a8.Data.ArrayNum == 0) {
          uVar14 = uVar19;
        }
        if (0 < (int)uVar14) {
          ::FString::AppendChars(&local_a8,L",",1);
        }
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_98,uVar15);
        uVar14 = local_98.Data.ArrayNum - 1;
        if (local_98.Data.ArrayNum == 0) {
          uVar14 = uVar19;
        }
        ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar14);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulonglong)(longlong)(int)local_30);
  }
  uVar19 = local_a8.Data.ArrayNum - 1;
  if (local_a8.Data.ArrayNum == 0) {
    uVar19 = 0;
  }
  if (0 < (int)uVar19) {
    pFVar11 = FText::FromString(&local_68,&local_a8);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"InterchangeGLTFReader",L"UnusedSkinObjects",
                         L"Skin objects unused. At indices: {0}.");
    pFVar13 = FTextFormat::FTextFormat(&local_58,pFVar12,Default);
    pFVar11 = FText::Format<FText>(&local_88,pFVar13,pFVar11);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar9 = (int)this->_padding_;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar5 = this->_padding_;
    lVar2 = (longlong)iVar9 * 3 + 1;
    *(undefined4 *)(lVar5 + -8 + lVar2 * 8) = 1;
    FText::FText((FText *)(lVar5 + lVar2 * 8),pFVar11);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_48.SecondaryData);
  }
  return;
}

