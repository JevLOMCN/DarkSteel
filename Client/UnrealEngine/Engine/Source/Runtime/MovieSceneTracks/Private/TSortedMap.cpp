// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 121

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 14659ff20

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x38;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
                *)((this->Pairs).AllocatorInstance.Data + lVar7);
      DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x38;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x38,pFVar6,(longlong)(iVar4 - iVar3) * 0x38);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>
          *)((this->Pairs).AllocatorInstance.Data + lVar7);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1465a00d0

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x68;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
                *)((this->Pairs).AllocatorInstance.Data + lVar7);
      DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x68;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x68,pFVar6,(longlong)(iVar4 - iVar3) * 0x68);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>
          *)((this->Pairs).AllocatorInstance.Data + lVar7);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1465a0280

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x70;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
                *)((this->Pairs).AllocatorInstance.Data + lVar7);
      DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x70;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x70,pFVar6,(longlong)(iVar4 - iVar3) * 0x70);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>
          *)((this->Pairs).AllocatorInstance.Data + lVar7);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&> @ 1465b6dd0

FInterrogationChannelInfo * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInterrogationChannelInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
    iVar7 = 0;
    do {
      uVar9 = uVar8 >> 1;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)(uVar9 + iVar7) * 0x24) <
          param_1->Value) {
        iVar7 = uVar9 + iVar7 + (uVar8 & 1);
      }
      uVar8 = uVar9;
    } while (uVar9 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar1 < iVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FInterrogationChannelInfo *)(*pcVar3)();
      return pFVar5;
    }
    if (-1 < iVar7) goto LAB_1465b6e68;
  }
  else {
LAB_1465b6e68:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FInterrogationChannelInfo *)(*pcVar3)();
        return pFVar5;
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      pFVar6 = pFVar2 + (longlong)iVar7 * 0x24;
      if (*(int *)(pFVar2 + (longlong)iVar7 * 0x24) <= param_1->Value) goto LAB_1465b6ee4;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pFVar6 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x24;
LAB_1465b6ee4:
  *(int *)pFVar6 = param_1->Value;
  (((FInterrogationChannelInfo *)(pFVar6 + 4))->WeakObject).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)(pFVar6 + 0xc) = 0;
  *(undefined8 *)(pFVar6 + 0x14) = 0;
  *(undefined8 *)(pFVar6 + 0x1c) = 0xffffffff00000000;
  return (FInterrogationChannelInfo *)(pFVar6 + 4);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,unsigned_char_const_&> @ 1465b6f50

uchar * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,unsigned_char,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,unsigned_char_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,unsigned_char,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,uchar *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uchar *puVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar7 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 8) < param_1->Value) {
        iVar10 = iVar7 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      puVar8 = (uchar *)(*pcVar4)();
      return puVar8;
    }
    if (-1 < iVar10) goto LAB_1465b6fe6;
  }
  else {
LAB_1465b6fe6:
    if (iVar10 < *piVar1) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        puVar8 = (uchar *)(*pcVar4)();
        return puVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 8;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 8) <= param_1->Value) goto LAB_1465b7088;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar7 - iVar10) << 3);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
LAB_1465b7088:
  *(int *)pFVar9 = param_1->Value;
  pFVar9[4] = (FScriptContainerElement)*param_2;
  return (uchar *)(pFVar9 + 4);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,double_const_&> @ 1465b70c0

double * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,double,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,double_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,double,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  double *pdVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < param_1->Value)
      {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pdVar6 = (double *)(*pcVar3)();
      return pdVar6;
    }
    if (-1 < iVar8) goto LAB_1465b7159;
  }
  else {
LAB_1465b7159:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pdVar6 = (double *)(*pcVar3)();
        return pdVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      if (*(int *)pFVar7 <= param_1->Value) goto LAB_1465b71d2;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,double>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
LAB_1465b71d2:
  *(int *)pFVar7 = param_1->Value;
  *(double *)(pFVar7 + 8) = *param_2;
  return (double *)(pFVar7 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::Math::TRotator<double>_const_&> @ 1465b7210

TRotator<double> * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::Math::TRotator<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::Math::TRotator<double>_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::Math::TRotator<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,TRotator<double> *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  TRotator<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x20) < param_1->Value)
      {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TRotator<double> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar9) goto LAB_1465b72aa;
  }
  else {
LAB_1465b72aa:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TRotator<double> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x20;
      if (*(int *)pFVar8 <= param_1->Value) goto LAB_1465b7323;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x20;
LAB_1465b7323:
  *(int *)pFVar8 = param_1->Value;
  dVar5 = param_2->Yaw;
  ((TRotator<double> *)(pFVar8 + 8))->Pitch = param_2->Pitch;
  *(double *)(pFVar8 + 0x10) = dVar5;
  *(double *)(pFVar8 + 0x18) = param_2->Roll;
  return (TRotator<double> *)(pFVar8 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FDoubleIntermediateVector_const_&> @ 1465b7360

FDoubleIntermediateVector * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FDoubleIntermediateVector,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::
Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FDoubleIntermediateVector_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FDoubleIntermediateVector,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FDoubleIntermediateVector *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  FDoubleIntermediateVector *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < param_1->Value)
      {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDoubleIntermediateVector *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1465b73f8;
  }
  else {
LAB_1465b73f8:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FDoubleIntermediateVector *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x28) <= param_1->Value) goto LAB_1465b7474;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x28;
LAB_1465b7474:
  *(int *)pFVar9 = param_1->Value;
  dVar6 = param_2->Y;
  ((FDoubleIntermediateVector *)(pFVar9 + 8))->X = param_2->X;
  *(double *)(pFVar9 + 0x10) = dVar6;
  dVar6 = param_2->W;
  *(double *)(pFVar9 + 0x18) = param_2->Z;
  *(double *)(pFVar9 + 0x20) = dVar6;
  return (FDoubleIntermediateVector *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FFloatIntermediateVector_const_&> @ 1465b74b0

FFloatIntermediateVector * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FFloatIntermediateVector,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::
Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FFloatIntermediateVector_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FFloatIntermediateVector,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FFloatIntermediateVector *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  FFloatIntermediateVector *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < param_1->Value)
      {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FFloatIntermediateVector *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1465b7548;
  }
  else {
LAB_1465b7548:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FFloatIntermediateVector *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x28) <= param_1->Value) goto LAB_1465b75c4;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x28;
LAB_1465b75c4:
  *(int *)pFVar9 = param_1->Value;
  dVar6 = param_2->Y;
  ((FFloatIntermediateVector *)(pFVar9 + 8))->X = param_2->X;
  *(double *)(pFVar9 + 0x10) = dVar6;
  dVar6 = param_2->W;
  *(double *)(pFVar9 + 0x18) = param_2->Z;
  *(double *)(pFVar9 + 0x20) = dVar6;
  return (FFloatIntermediateVector *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediate3DTransform_const_&> @ 1465b7600

FIntermediate3DTransform * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::
Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediate3DTransform_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FIntermediate3DTransform *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  FIntermediate3DTransform *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x50) < param_1->Value)
      {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FIntermediate3DTransform *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar9) goto LAB_1465b769b;
  }
  else {
LAB_1465b769b:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FIntermediate3DTransform *)(*pcVar3)();
        return pFVar7;
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
      if (*(int *)pFVar8 <= param_1->Value) goto LAB_1465b7716;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
LAB_1465b7716:
  *(int *)pFVar8 = param_1->Value;
  dVar5 = param_2->T_Y;
  ((FIntermediate3DTransform *)(pFVar8 + 8))->T_X = param_2->T_X;
  *(double *)(pFVar8 + 0x10) = dVar5;
  dVar5 = param_2->R_X;
  *(double *)(pFVar8 + 0x18) = param_2->T_Z;
  *(double *)(pFVar8 + 0x20) = dVar5;
  dVar5 = param_2->R_Z;
  *(double *)(pFVar8 + 0x28) = param_2->R_Y;
  *(double *)(pFVar8 + 0x30) = dVar5;
  dVar5 = param_2->S_Y;
  *(double *)(pFVar8 + 0x38) = param_2->S_X;
  *(double *)(pFVar8 + 0x40) = dVar5;
  *(double *)(pFVar8 + 0x48) = param_2->S_Z;
  return (FIntermediate3DTransform *)(pFVar8 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateColor_const_&> @ 1465b7770

FIntermediateColor * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateColor_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FIntermediateColor *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  FIntermediateColor *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < param_1->Value)
      {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIntermediateColor *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1465b7808;
  }
  else {
LAB_1465b7808:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIntermediateColor *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x28) <= param_1->Value) goto LAB_1465b7884;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x28;
LAB_1465b7884:
  *(int *)pFVar9 = param_1->Value;
  dVar6 = param_2->G;
  ((FIntermediateColor *)(pFVar9 + 8))->R = param_2->R;
  *(double *)(pFVar9 + 0x10) = dVar6;
  dVar6 = param_2->A;
  *(double *)(pFVar9 + 0x18) = param_2->B;
  *(double *)(pFVar9 + 0x20) = dVar6;
  return (FIntermediateColor *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FObjectComponent_const_&> @ 1465b78c0

FObjectComponent * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FObjectComponent,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FObjectComponent_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FObjectComponent,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FObjectComponent *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  FObjectComponent *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < param_1->Value)
      {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar6 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar6 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FObjectComponent *)(*pcVar5)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1465b7958;
  }
  else {
LAB_1465b7958:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FObjectComponent *)(*pcVar5)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x18;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x18) <= param_1->Value) goto LAB_1465b79d4;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FObjectComponent>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
LAB_1465b79d4:
  *(int *)pFVar9 = param_1->Value;
  pUVar4 = (param_2->ObjectPtr).field0_0x0.DebugPtr;
  (((FObjectComponent *)(pFVar9 + 8))->ObjectPtr).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(FObjectKey *)(pFVar9 + 0x10) = param_2->ObjectKey;
  return (FObjectComponent *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,FString_const_&> @ 1465b7a30

FString * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,FString_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FString *pFVar7;
  int iVar8;
  TTuple<UE::MovieScene::FInterrogationChannel,FString> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < param_1->Value)
      {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar8) goto LAB_1465b7abd;
  }
  else {
LAB_1465b7abd:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<UE::MovieScene::FInterrogationChannel,FString> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= param_1->Value) {
        DestructItems<TTuple<UE::MovieScene::FInterrogationChannel,FString>,int>(pTVar9,1);
        goto LAB_1465b7b46;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,FString>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<UE::MovieScene::FInterrogationChannel,FString> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_1465b7b46:
  *(int *)pTVar9 = param_1->Value;
  ::FString::FString((FString *)&pTVar9->field_0x8,param_2);
  return (FString *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,FText_const_&> @ 1465b7b80

FText * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,FText,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,FText_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,FText,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FText *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FText *pFVar9;
  int iVar10;
  TTuple<UE::MovieScene::FInterrogationChannel,FText> *pTVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  
  uVar3 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar3) {
    uVar12 = uVar3;
    do {
      iVar2 = (uVar12 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar2 * 0x18) < param_1->Value)
      {
        iVar10 = iVar2 + (uVar12 & 1);
      }
      uVar7 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar7 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar3 < iVar10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FText *)(*pcVar6)();
      return pFVar9;
    }
    if (-1 < iVar10) goto LAB_1465b7c1d;
  }
  else {
LAB_1465b7c1d:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FText *)(*pcVar6)();
        return pFVar9;
      }
      pFVar4 = (this->Pairs).AllocatorInstance.Data;
      pTVar11 = (TTuple<UE::MovieScene::FInterrogationChannel,FText> *)
                (pFVar4 + (longlong)iVar10 * 0x18);
      if (*(int *)(pFVar4 + (longlong)iVar10 * 0x18) <= param_1->Value) {
        DestructItems<TTuple<UE::MovieScene::FInterrogationChannel,FText>,int>(pTVar11,1);
        goto LAB_1465b7ca6;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,FText>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pTVar11 = (TTuple<UE::MovieScene::FInterrogationChannel,FText> *)
            ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x18);
LAB_1465b7ca6:
  puVar1 = &pTVar11->field_0x8;
  *(int *)pTVar11 = param_1->Value;
  *(undefined8 *)puVar1 = 0;
  pIVar5 = (param_2->TextData).Reference;
  *(ITextData **)puVar1 = pIVar5;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
  }
  *(uint *)&pTVar11->field_0x10 = param_2->Flags;
  return (FText *)puVar1;
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,__int64_const_&> @ 1465b7d00

long64 * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,__int64,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,__int64_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,__int64,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,long64 *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  long64 *plVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < param_1->Value)
      {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      plVar6 = (long64 *)(*pcVar3)();
      return plVar6;
    }
    if (-1 < iVar8) goto LAB_1465b7d99;
  }
  else {
LAB_1465b7d99:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        plVar6 = (long64 *)(*pcVar3)();
        return plVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      if (*(int *)pFVar7 <= param_1->Value) goto LAB_1465b7e12;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,__int64>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
LAB_1465b7e12:
  *(int *)pFVar7 = param_1->Value;
  *(long64 *)(pFVar7 + 8) = *param_2;
  return (long64 *)(pFVar7 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,bool_const_&> @ 1465b7e50

bool * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,bool_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  bool *pbVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar7 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 8) < param_1->Value) {
        iVar10 = iVar7 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pbVar8 = (bool *)(*pcVar4)();
      return pbVar8;
    }
    if (-1 < iVar10) goto LAB_1465b7ee6;
  }
  else {
LAB_1465b7ee6:
    if (iVar10 < *piVar1) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pbVar8 = (bool *)(*pcVar4)();
        return pbVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 8;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 8) <= param_1->Value) goto LAB_1465b7f88;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar7 - iVar10) << 3);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
LAB_1465b7f88:
  *(int *)pFVar9 = param_1->Value;
  pFVar9[4] = (FScriptContainerElement)*param_2;
  return (bool *)(pFVar9 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_> @ 1465b7fc0

TPreAnimatedPropertyValue<unsigned_char> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,TPreAnimatedPropertyValue<unsigned_char> *param_2
          )

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TPreAnimatedPropertyValue<unsigned_char> *pTVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>
  *pTVar8;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TPreAnimatedPropertyValue<unsigned_char> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_1465b802d;
  }
  else {
LAB_1465b802d:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<unsigned_char> *)(*pcVar4)();
          return pTVar7;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar6 * 0x28;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<unsigned_char> *)(*pcVar4)();
          return pTVar7;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<unsigned_char> *)(*pcVar4)();
          return pTVar7;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,int>
                  (pTVar8,1);
        goto LAB_1465b8126;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x28);
LAB_1465b8126:
  *(int *)pTVar8 = param_1->Value;
  pTVar8->field_0x8 = param_2->Data;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x10,&param_2->Binding);
  return (TPreAnimatedPropertyValue<unsigned_char> *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<double>_> @ 1465b8160

TPreAnimatedPropertyValue<double> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<double>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,TPreAnimatedPropertyValue<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<double> *pTVar6;
  longlong lVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>
  *pTVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  lVar7 = (longlong)iVar5;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<double> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b81cc;
  }
  else {
LAB_1465b81cc:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar7 * 0x28) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar7 * 0x28) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar7 * 0x28);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,int>
                  (pTVar8,1);
        goto LAB_1465b82bf;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>
            *)((this->Pairs).AllocatorInstance.Data + lVar7 * 0x28);
LAB_1465b82bf:
  *(int *)pTVar8 = param_1->Value;
  *(double *)&pTVar8->field_0x8 = param_2->Data;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x10,&param_2->Binding);
  return (TPreAnimatedPropertyValue<double> *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_> @ 1465b82f0

TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
               (*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b835c;
  }
  else {
LAB_1465b835c:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                  (pTVar7,1);
        goto LAB_1465b8450;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_1465b8450:
  *(int *)pTVar7 = param_1->Value;
  *(double *)&pTVar7->field_0x8 = param_2->Data;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar7->field_0x10,&param_2->Binding);
  pTVar7->field_0x28 = param_2->MetaData;
  return (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
         &pTVar7->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_> @ 1465b8490

TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (-1 < iVar7) goto LAB_1465b84fd;
  }
  else {
LAB_1465b84fd:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x48;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                  (pTVar9,1);
        goto LAB_1465b85f6;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x48);
LAB_1465b85f6:
  *(int *)pTVar9 = param_1->Value;
  dVar5 = (param_2->Data).Y;
  *(double *)&pTVar9->field_0x8 = (param_2->Data).X;
  *(double *)&pTVar9->field_0x10 = dVar5;
  dVar5 = (param_2->Data).W;
  *(double *)&pTVar9->field_0x18 = (param_2->Data).Z;
  *(double *)&pTVar9->field_0x20 = dVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar9->field_0x28,&param_2->Binding);
  pTVar9->field_0x40 = param_2->MetaData;
  return (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_> @ 1465b8640

TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *pTVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>
  *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_1465b86ac;
  }
  else {
LAB_1465b86ac:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar9 = (longlong)iVar6 * 0x40;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar9) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      if (*(int *)(pFVar2 + lVar9) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,int>
                  (pTVar8,1);
        goto LAB_1465b879d;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x40);
LAB_1465b879d:
  *(int *)pTVar8 = param_1->Value;
  dVar4 = (param_2->Data).Y;
  *(double *)&pTVar8->field_0x8 = (param_2->Data).X;
  *(double *)&pTVar8->field_0x10 = dVar4;
  dVar4 = (param_2->Data).W;
  *(double *)&pTVar8->field_0x18 = (param_2->Data).Z;
  *(double *)&pTVar8->field_0x20 = dVar4;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x28,&param_2->Binding);
  return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_> @ 1465b87e0

TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (-1 < iVar7) goto LAB_1465b884d;
  }
  else {
LAB_1465b884d:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x48;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                  (pTVar9,1);
        goto LAB_1465b8946;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x48);
LAB_1465b8946:
  *(int *)pTVar9 = param_1->Value;
  dVar5 = (param_2->Data).Y;
  *(double *)&pTVar9->field_0x8 = (param_2->Data).X;
  *(double *)&pTVar9->field_0x10 = dVar5;
  dVar5 = (param_2->Data).W;
  *(double *)&pTVar9->field_0x18 = (param_2->Data).Z;
  *(double *)&pTVar9->field_0x20 = dVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar9->field_0x28,&param_2->Binding);
  pTVar9->field_0x40 = param_2->MetaData;
  return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_> @ 1465b8990

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *pTVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>
  *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_1465b89fc;
  }
  else {
LAB_1465b89fc:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)(*pcVar3)();
          return pTVar7;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar9 = (longlong)iVar6 * 0x40;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar9) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (*(int *)(pFVar2 + lVar9) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,int>
                  (pTVar8,1);
        goto LAB_1465b8aed;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x40);
LAB_1465b8aed:
  *(int *)pTVar8 = param_1->Value;
  dVar4 = (param_2->Data).G;
  *(double *)&pTVar8->field_0x8 = (param_2->Data).R;
  *(double *)&pTVar8->field_0x10 = dVar4;
  dVar4 = (param_2->Data).A;
  *(double *)&pTVar8->field_0x18 = (param_2->Data).B;
  *(double *)&pTVar8->field_0x20 = dVar4;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x28,&param_2->Binding);
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_> @ 1465b8b30

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (-1 < iVar7) goto LAB_1465b8b9d;
  }
  else {
LAB_1465b8b9d:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x48;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                  (pTVar9,1);
        goto LAB_1465b8c96;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x48);
LAB_1465b8c96:
  *(int *)pTVar9 = param_1->Value;
  dVar5 = (param_2->Data).G;
  *(double *)&pTVar9->field_0x8 = (param_2->Data).R;
  *(double *)&pTVar9->field_0x10 = dVar5;
  dVar5 = (param_2->Data).A;
  *(double *)&pTVar9->field_0x18 = (param_2->Data).B;
  *(double *)&pTVar9->field_0x20 = dVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar9->field_0x28,&param_2->Binding);
  pTVar9->field_0x40 = param_2->MetaData;
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
          *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_> @ 1465b8ce0

TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
  *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b8d4c;
  }
  else {
LAB_1465b8d4c:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x40;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,int>
                  (pTVar7,1);
        goto LAB_1465b8e3d;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x40);
LAB_1465b8e3d:
  *(int *)pTVar7 = param_1->Value;
  UE::MovieScene::
  TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
  ::
  TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
            ((TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
              *)&pTVar7->field_0x8,param_2);
  return (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          *)&pTVar7->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FString>_> @ 1465b8e70

TPreAnimatedPropertyValue<FString> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,TPreAnimatedPropertyValue<FString> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<FString> *pTVar6;
  longlong lVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>
  *pTVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<FString> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b8edc;
  }
  else {
LAB_1465b8edc:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FString> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar7 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FString> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar7) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FString> *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar7) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar7);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,int>
                  (pTVar8,1);
        goto LAB_1465b8fd1;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_1465b8fd1:
  *(int *)pTVar8 = param_1->Value;
  *(undefined8 *)&pTVar8->field_0x8 = 0;
  *(FScriptContainerElement **)&pTVar8->field_0x8 = (param_2->Data).Data.AllocatorInstance.Data;
  (param_2->Data).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x10 = (param_2->Data).Data.ArrayNum;
  *(int *)&pTVar8->field_0x14 = (param_2->Data).Data.ArrayMax;
  (param_2->Data).Data.ArrayNum = 0;
  (param_2->Data).Data.ArrayMax = 0;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x18,&param_2->Binding);
  return (TPreAnimatedPropertyValue<FString> *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FText>_> @ 1465b9020

TPreAnimatedPropertyValue<FText> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,TPreAnimatedPropertyValue<FText> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<FText> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<FText> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b908c;
  }
  else {
LAB_1465b908c:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FText> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FText> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<FText> *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,int>
                  (pTVar7,1);
        goto LAB_1465b9182;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_1465b9182:
  *(int *)pTVar7 = param_1->Value;
  FText::FText((FText *)&pTVar7->field_0x8,&param_2->Data);
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar7->field_0x18,&param_2->Binding);
  return (TPreAnimatedPropertyValue<FText> *)&pTVar7->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_> @ 1465b91c0

TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
               (*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b922c;
  }
  else {
LAB_1465b922c:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
                   (*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,int>
                  (pTVar7,1);
        goto LAB_1465b9322;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_1465b9322:
  *(int *)pTVar7 = param_1->Value;
  *(long64 *)&pTVar7->field_0x8 = param_2->Data;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar7->field_0x10,&param_2->Binding);
  pTVar7->field_0x28 = param_2->MetaData;
  return (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
         &pTVar7->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_> @ 1465b9360

TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *
               )(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_1465b93cc;
  }
  else {
LAB_1465b93cc:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,int>
                  (pTVar7,1);
        goto LAB_1465b94c2;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_1465b94c2:
  *(int *)pTVar7 = param_1->Value;
  pTVar7->field_0x8 = param_2->Data;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar7->field_0x10,&param_2->Binding);
  *(TTuple<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *)&pTVar7->field_0x28 =
       param_2->MetaData;
  return (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *)
         &pTVar7->field_0x8;
}

// Find @ 146671370

FInterrogationChannelInfo * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Find(TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
       *this,FInterrogationChannel *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInterrogationChannelInfo *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FInterrogationChannel,TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>::FKeyForward,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FInterrogationChannel_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FInterrogationChannelInfo *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInterrogationChannelInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FInterrogationChannelInfo *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x24 + 4);
}

// Find @ 146671410

TPreAnimatedPropertyValue<unsigned_char> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<unsigned_char> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<unsigned_char> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<unsigned_char> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<unsigned_char> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 8);
}

// Find @ 1466714b0

TPreAnimatedPropertyValue<double> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<double> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<double> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<double> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 8);
}

// Find @ 146671550

TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Find @ 1466715f0

TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x38 + 8);
}

// Find @ 146671690

TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48 + 8);
}

// Find @ 146671730

TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40 + 8);
}

// Find @ 1466717d0

TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48 + 8);
}

// Find @ 146671870

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x68 + 8);
}

// Find @ 146671910

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x70 + 8);
}

// Find @ 1466719b0

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40 + 8);
}

// Find @ 146671a50

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48 + 8);
}

// Find @ 146671af0

TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40 + 8);
}

// Find @ 146671b90

TPreAnimatedPropertyValue<FString> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<FString> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<FString> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<FString> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<FString> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Find @ 146671c30

TPreAnimatedPropertyValue<FText> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<FText> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<FText> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<FText> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Find @ 146671cd0

TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Find @ 146671d70

TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *)0x0
    ;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *
               )(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Remove @ 1466d3ac0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    uVar8 = (ulonglong)(byte)pFVar2[(longlong)(int)uVar5 * 0x28 + 0x20];
    pFVar2 = pFVar2 + (longlong)(int)uVar5 * 0x28;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(pFVar2 + 0x10);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 0x28,(longlong)iVar7 * 0x28);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d3bf0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    uVar8 = (ulonglong)(byte)pFVar2[(longlong)(int)uVar5 * 0x28 + 0x20];
    pFVar2 = pFVar2 + (longlong)(int)uVar5 * 0x28;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(pFVar2 + 0x10);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 0x28,(longlong)iVar7 * 0x28);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d3d20

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
    FVar2 = _Dst[0x20];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x10);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d3e50

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38;
    FVar2 = _Dst[0x30];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x20);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x38,(longlong)iVar7 * 0x38);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d3f80

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    uVar8 = (ulonglong)(byte)pFVar2[(longlong)(int)uVar5 * 0x48 + 0x38];
    pFVar2 = pFVar2 + (longlong)(int)uVar5 * 0x48;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(pFVar2 + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 0x48,(longlong)iVar7 * 0x48);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d40b0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40;
    FVar2 = _Dst[0x38];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d41e0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    uVar8 = (ulonglong)(byte)pFVar2[(longlong)(int)uVar5 * 0x48 + 0x38];
    pFVar2 = pFVar2 + (longlong)(int)uVar5 * 0x48;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(pFVar2 + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 0x48,(longlong)iVar7 * 0x48);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d4310

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68;
    FVar2 = _Dst[0x60];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x50);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x68,(longlong)iVar7 * 0x68);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d4440

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70;
    FVar2 = _Dst[0x60];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x50);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x70,(longlong)iVar7 * 0x70);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d4570

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40;
    FVar2 = _Dst[0x38];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d46a0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    uVar8 = (ulonglong)(byte)pFVar2[(longlong)(int)uVar5 * 0x48 + 0x38];
    pFVar2 = pFVar2 + (longlong)(int)uVar5 * 0x48;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(pFVar2 + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 0x48,(longlong)iVar7 * 0x48);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d47d0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40;
    FVar2 = _Dst[0x28];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x18);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d4900

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
    UE::MovieScene::TPreAnimatedPropertyValue<FString>::~TPreAnimatedPropertyValue<FString>
              ((TPreAnimatedPropertyValue<FString> *)(_Dst + 8));
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar6 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1466d49f0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
    UE::MovieScene::TPreAnimatedPropertyValue<FText>::~TPreAnimatedPropertyValue<FText>
              ((TPreAnimatedPropertyValue<FText> *)(_Dst + 8));
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar6 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1466d4ae0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
    FVar2 = _Dst[0x20];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x10);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1466d4c10

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
    FVar2 = _Dst[0x20];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x10);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 146736ed0

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *pTVar6;
  FScriptContainerElement *pFVar7;
  FKeyForward local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)(*pcVar2)();
    return pTVar6;
  }
  if ((-1 < iVar4) && (iVar4 < (this->Pairs).ArrayNum)) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)(*pcVar2)();
      return pTVar6;
    }
    lVar1 = (longlong)iVar4 * 8;
    pFVar7 = (this->Pairs).AllocatorInstance.Data;
    if ((param_1->Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = param_1->Value;
    if ((*(int *)(pFVar7 + lVar1) == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)(*pcVar2)();
      return pTVar6;
    }
    if (*(int *)(pFVar7 + lVar1) <= iVar5) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)
             ((this->Pairs).AllocatorInstance.Data + lVar1);
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax
                    );
  lVar1 = (longlong)iVar4 * 8;
  pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar1;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar5 - iVar4) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float> *)
         ((this->Pairs).AllocatorInstance.Data + lVar1);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 146737080

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters> *
__thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x38;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
                *)((this->Pairs).AllocatorInstance.Data + lVar7);
      DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x38;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x38,pFVar6,(longlong)(iVar4 - iVar3) * 0x38);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>
          *)((this->Pairs).AllocatorInstance.Data + lVar7);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 146737230

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType> *
__thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (void *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
  *pTVar7;
  void *_Src;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (*(TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
                       **)this,*(int *)((longlong)this + 8),param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (((iVar5 < 0) || (*(int *)((longlong)this + 8) < iVar5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
              *)(*pcVar3)();
    return pTVar7;
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 8))) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
                *)(*pcVar3)();
      return pTVar7;
    }
    lVar1 = (longlong)iVar5 * 8;
    lVar2 = *(longlong *)this;
    if ((param_1->Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
                *)(*pcVar3)();
      return pTVar7;
    }
    iVar6 = param_1->Value;
    if ((*(int *)(lVar2 + lVar1) == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (*(int *)(lVar2 + lVar1) <= iVar6) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
              *)(*(longlong *)this + lVar1);
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  lVar1 = (longlong)iVar5 * 8;
  _Src = (void *)(*(longlong *)this + lVar1);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar6 - iVar5) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::EPreAnimatedAudioStateType>
          *)(*(longlong *)this + lVar1);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1467373e0

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (void *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *pTVar7;
  void *_Src;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (*(TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> **)
                      this,*(int *)((longlong)this + 8),param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (((iVar5 < 0) || (*(int *)((longlong)this + 8) < iVar5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
             (*pcVar3)();
    return pTVar7;
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 8))) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
               (*pcVar3)();
      return pTVar7;
    }
    lVar1 = (longlong)iVar5 * 8;
    lVar2 = *(longlong *)this;
    if ((param_1->Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
               (*pcVar3)();
      return pTVar7;
    }
    iVar6 = param_1->Value;
    if ((*(int *)(lVar2 + lVar1) == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
               (*pcVar3)();
      return pTVar7;
    }
    if (*(int *)(lVar2 + lVar1) <= iVar6) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
             (*(longlong *)this + lVar1);
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  lVar1 = (longlong)iVar5 * 8;
  _Src = (void *)(*(longlong *)this + lVar1);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar6 - iVar5) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *)
         (*(longlong *)this + lVar1);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 146737590

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *pTVar6;
  FScriptContainerElement *pFVar7;
  FKeyForward local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)(*pcVar2)();
    return pTVar6;
  }
  if ((-1 < iVar4) && (iVar4 < (this->Pairs).ArrayNum)) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)(*pcVar2)();
      return pTVar6;
    }
    lVar1 = (longlong)iVar4 * 8;
    pFVar7 = (this->Pairs).AllocatorInstance.Data;
    if ((param_1->Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = param_1->Value;
    if ((*(int *)(pFVar7 + lVar1) == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)(*pcVar2)();
      return pTVar6;
    }
    if (*(int *)(pFVar7 + lVar1) <= iVar5) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)
             ((this->Pairs).AllocatorInstance.Data + lVar1);
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax
                    );
  lVar1 = (longlong)iVar4 * 8;
  pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar1;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar5 - iVar4) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *)
         ((this->Pairs).AllocatorInstance.Data + lVar1);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimAttachment> @ 14673f420

FPreAnimAttachment * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimAttachment>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimAttachment *param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FPreAnimAttachment *pFVar7;
  FScriptContainerElement *pFVar8;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPreAnimAttachment *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar6) goto LAB_14673f48d;
  }
  else {
LAB_14673f48d:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FPreAnimAttachment *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar6 * 0x18;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FPreAnimAttachment *)(*pcVar3)();
          return pFVar7;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar8 + lVar1) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FPreAnimAttachment *)(*pcVar3)();
          return pFVar7;
        }
      }
      if (*(int *)(pFVar8 + lVar1) <= iVar2) {
        pFVar8 = (this->Pairs).AllocatorInstance.Data + lVar1;
        goto LAB_14673f579;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
LAB_14673f579:
  *(int *)pFVar8 = param_1->Value;
  FVar4 = param_2->OldAttachSocket;
  (((FPreAnimAttachment *)(pFVar8 + 4))->OldAttachParent).WeakPtr =
       (param_2->OldAttachParent).WeakPtr;
  *(FName *)(pFVar8 + 0xc) = FVar4;
  *(undefined4 *)(pFVar8 + 0x14) = *(undefined4 *)&param_2->DetachParams;
  return (FPreAnimAttachment *)(pFVar8 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedConstraint> @ 14673f5b0

FPreAnimatedConstraint * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedConstraint>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedConstraint *param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FPreAnimatedConstraint *pFVar8;
  FScriptContainerElement *pFVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FPreAnimatedConstraint *)(*pcVar3)();
      return pFVar8;
    }
    if (-1 < iVar7) goto LAB_14673f61d;
  }
  else {
LAB_14673f61d:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPreAnimatedConstraint *)(*pcVar3)();
          return pFVar8;
        }
      }
      pFVar9 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x28;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPreAnimatedConstraint *)(*pcVar3)();
          return pFVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar9 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FPreAnimatedConstraint *)(*pcVar3)();
          return pFVar8;
        }
      }
      if (*(int *)(pFVar9 + lVar1) <= iVar2) {
        pFVar9 = (this->Pairs).AllocatorInstance.Data + lVar1;
        goto LAB_14673f709;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28;
LAB_14673f709:
  *(int *)pFVar9 = param_1->Value;
  pFVar8 = (FPreAnimatedConstraint *)(pFVar9 + 4);
  uVar5 = (param_2->ConstraintID).B;
  uVar4 = *(undefined8 *)&(param_2->ConstraintID).C;
  (pFVar8->ConstraintID).A = (param_2->ConstraintID).A;
  (pFVar8->ConstraintID).B = uVar5;
  *(undefined8 *)(pFVar9 + 0xc) = uVar4;
  uVar4 = *(undefined8 *)&(param_2->SceneComponent).WeakPtr.ObjectSerialNumber;
  *(undefined8 *)(pFVar9 + 0x14) = *(undefined8 *)&param_2->bDeleteIt;
  *(undefined8 *)(pFVar9 + 0x1c) = uVar4;
  *(int *)(pFVar9 + 0x24) = (param_2->Section).WeakPtr.ObjectSerialNumber;
  return pFVar8;
}

// Find @ 1467900d0

float * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (float *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4);
}

// Find @ 146790170

FMovieScenePreAnimatedMaterialParameters * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieScenePreAnimatedMaterialParameters *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMovieScenePreAnimatedMaterialParameters *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieScenePreAnimatedMaterialParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMovieScenePreAnimatedMaterialParameters *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x38 + 8);
}

// Find @ 146790210

FPreAnimAttachment * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimAttachment *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimAttachment *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimAttachment *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimAttachment *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 4);
}

// Find @ 1467902b0

FPreAnimatedConstraint * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedConstraint *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedConstraint *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedConstraint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedConstraint *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 4);
}

// Find @ 146790350

EPreAnimatedAudioStateType * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(void *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EPreAnimatedAudioStateType *pEVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (EPreAnimatedAudioStateType *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EPreAnimatedAudioStateType *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EPreAnimatedAudioStateType *)(*(longlong *)this + (longlong)(int)uVar3 * 8 + 4);
}

// Find @ 1467903f0

Type * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(void *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Type *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (Type *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (Type *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (Type *)(*(longlong *)this + (longlong)(int)uVar3 * 8 + 4);
}

// Find @ 146790490

bool * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (bool *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4);
}

// Remove @ 1467b8150

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,float>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,float,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1467b8230

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FMovieScenePreAnimatedMaterialParameters,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38;
    if (*(void **)(_Dst + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 0x28));
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x38,(longlong)iVar6 * 0x38);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1467b8320

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1467b8400

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x28,(longlong)iVar6 * 0x28);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1467b84e0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(void *this,FPreAnimatedStorageIndex *param_1)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_UE::MovieScene::EPreAnimatedAudioStateType,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar4 = 0;
  if (uVar3 != 0xffffffff) {
    if ((int)uVar3 < *(int *)((longlong)this + 8)) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    iVar5 = *(int *)((longlong)this + 8) + ~uVar3;
    _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar3 * 8);
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
    }
    *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,this,*(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    uVar4 = 1;
  }
  return uVar4;
}

// Remove @ 1467b85c0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(void *this,FPreAnimatedStorageIndex *param_1)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar4 = 0;
  if (uVar3 != 0xffffffff) {
    if ((int)uVar3 < *(int *)((longlong)this + 8)) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    iVar5 = *(int *)((longlong)this + 8) + ~uVar3;
    _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar3 * 8);
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
    }
    *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,this,*(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    uVar4 = 1;
  }
  return uVar4;
}

// Remove @ 1467b86a0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1467d3e00

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x1c;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>
              *)((this->Pairs).AllocatorInstance.Data + lVar7);
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x1c;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x1c,pFVar6,(longlong)(iVar4 - iVar3) * 0x1c);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState> *)
         ((this->Pairs).AllocatorInstance.Data + lVar7);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1467d3fa0

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (void *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *pTVar7;
  void *_Src;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (*(TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> **)
                      this,*(int *)((longlong)this + 8),param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (((iVar5 < 0) || (*(int *)((longlong)this + 8) < iVar5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)(*pcVar3)();
    return pTVar7;
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 8))) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)
               (*pcVar3)();
      return pTVar7;
    }
    lVar1 = (longlong)iVar5 * 8;
    lVar2 = *(longlong *)this;
    if ((param_1->Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)
               (*pcVar3)();
      return pTVar7;
    }
    iVar6 = param_1->Value;
    if ((*(int *)(lVar2 + lVar1) == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)
               (*pcVar3)();
      return pTVar7;
    }
    if (*(int *)(lVar2 + lVar1) <= iVar6) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)
             (*(longlong *)this + lVar1);
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  lVar1 = (longlong)iVar5 * 8;
  _Src = (void *)(*(longlong *)this + lVar1);
  memmove((void *)((longlong)_Src + 8),_Src,(longlong)(iVar6 - iVar5) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *)
         (*(longlong *)this + lVar1);
}

// Emplace<int_const_&,UE::MovieScene::FAdditveAndOverrideData_const_&> @ 1467de4e0

FAdditveAndOverrideData * __thiscall
TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&,UE::MovieScene::FAdditveAndOverrideData_const_&>
          (TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1,FAdditveAndOverrideData *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  undefined7 uVar6;
  bool bVar7;
  FAdditveAndOverrideData *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x20) < *param_1) {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FAdditveAndOverrideData *)(*pcVar3)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1467de57a;
  }
  else {
LAB_1467de57a:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FAdditveAndOverrideData *)(*pcVar3)();
        return pFVar8;
      }
      pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
      if (*(int *)pFVar9 <= *param_1) goto LAB_1467de5f3;
    }
  }
  TArray<TTuple<int,UE::MovieScene::FAdditveAndOverrideData>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
LAB_1467de5f3:
  *(int *)pFVar9 = *param_1;
  pFVar8 = (FAdditveAndOverrideData *)(pFVar9 + 8);
  uVar6 = *(undefined7 *)&param_2->field_0x1;
  dVar5 = param_2->Value;
  pFVar8->bIsAdditive = param_2->bIsAdditive;
  *(undefined7 *)&pFVar8->field_0x1 = uVar6;
  *(double *)(pFVar9 + 0x10) = dVar5;
  *(undefined8 *)(pFVar9 + 0x18) = *(undefined8 *)&param_2->Weight;
  return pFVar8;
}

// Emplace<UE::MovieScene::FComponentTypeID_const_&> @ 1467dea60

FAdditiveAndOverrideBuffer * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Emplace<UE::MovieScene::FComponentTypeID_const_&>
          (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           *this,FComponentTypeID *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FAdditiveAndOverrideBuffer *pFVar7;
  int iVar8;
  TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(ushort *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) <
          param_1->Value) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAdditiveAndOverrideBuffer *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar8) goto LAB_1467deaee;
  }
  else {
LAB_1467deaee:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FAdditiveAndOverrideBuffer *)(*pcVar4)();
        return pFVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(ushort *)(pFVar3 + (longlong)iVar8 * 0x18) <= param_1->Value) {
        DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,int>
                  (pTVar9,1);
        goto LAB_1467deb79;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_1467deb79:
  *(ushort *)pTVar9 = param_1->Value;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  DestructItems<UE::MovieScene::FAdditiveAndOverrides,int>((FAdditiveAndOverrides *)0x0,0);
  return (FAdditiveAndOverrideBuffer *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FComponentTypeID_const_&> @ 1467debc0

FAdditiveFromBaseBuffer * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Emplace<UE::MovieScene::FComponentTypeID_const_&>
          (TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           *this,FComponentTypeID *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FAdditiveFromBaseBuffer *pFVar6;
  int iVar7;
  TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(ushort *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x20) <
          param_1->Value) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar2 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAdditiveFromBaseBuffer *)(*pcVar3)();
      return pFVar6;
    }
    if (-1 < iVar7) goto LAB_1467dec51;
  }
  else {
LAB_1467dec51:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAdditiveFromBaseBuffer *)(*pcVar3)();
        return pFVar6;
      }
      pTVar8 = (TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x20);
      if (*(ushort *)pTVar8 <= param_1->Value) {
        DestructItems<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,int>
                  (pTVar8,1);
        goto LAB_1467decd9;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar8 = (TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x20);
LAB_1467decd9:
  *(ushort *)pTVar8 = param_1->Value;
  *(undefined8 *)&pTVar8->field_0x8 = 0;
  *(undefined8 *)&pTVar8->field_0x10 = 0;
  *(undefined2 *)&pTVar8->field_0x18 = 0xffff;
  return (FAdditiveFromBaseBuffer *)&pTVar8->field_0x8;
}

// Emplace<UE::MovieScene::FComponentTypeID_const_&> @ 1467ded20

TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Emplace<UE::MovieScene::FComponentTypeID_const_&>
          (TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
           *this,FComponentTypeID *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(ushort *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) <
          param_1->Value) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_1467dedae;
  }
  else {
LAB_1467dedae:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(ushort *)(pFVar3 + (longlong)iVar8 * 0x18) <= param_1->Value) {
        DestructItems<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_1467dee39;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_1467dee39:
  *(ushort *)pTVar9 = param_1->Value;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,FLinearColor> @ 1467dee80

FLinearColor * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,FLinearColor>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FLinearColor *param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FLinearColor *pFVar7;
  FScriptContainerElement *pFVar8;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar6) goto LAB_1467deeed;
  }
  else {
LAB_1467deeed:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FLinearColor *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar6 * 0x14;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FLinearColor *)(*pcVar3)();
          return pFVar7;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar8 + lVar1) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FLinearColor *)(*pcVar3)();
          return pFVar7;
        }
      }
      if (*(int *)(pFVar8 + lVar1) <= iVar2) {
        pFVar8 = (this->Pairs).AllocatorInstance.Data + lVar1;
        goto LAB_1467defd9;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x14;
LAB_1467defd9:
  *(int *)pFVar8 = param_1->Value;
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&pFVar8[4].field_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)(pFVar8 + 0xc) = uVar4;
  return (FLinearColor *)(pFVar8 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState> @ 1467df000

FPreAnimatedSkeletalAnimationMontageState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          FPreAnimatedSkeletalAnimationMontageState *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPreAnimatedSkeletalAnimationMontageState *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPreAnimatedSkeletalAnimationMontageState *)(*pcVar2)();
      return pFVar5;
    }
    if (-1 < iVar4) goto LAB_1467df06c;
  }
  else {
LAB_1467df06c:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if (iVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FPreAnimatedSkeletalAnimationMontageState *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar6 = (this->Pairs).AllocatorInstance.Data;
      lVar7 = (longlong)iVar4 * 0x10;
      if (param_1->Value == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FPreAnimatedSkeletalAnimationMontageState *)(*pcVar2)();
          return pFVar5;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar6 + lVar7) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FPreAnimatedSkeletalAnimationMontageState *)(*pcVar2)();
          return pFVar5;
        }
      }
      if (*(int *)(pFVar6 + lVar7) <= iVar1) {
        pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
        goto LAB_1467df153;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar4,1);
  pFVar6 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
LAB_1467df153:
  *(int *)pFVar6 = param_1->Value;
  (((FPreAnimatedSkeletalAnimationMontageState *)(pFVar6 + 4))->WeakInstance).WeakPtr =
       (param_2->WeakInstance).WeakPtr;
  *(int *)(pFVar6 + 0xc) = param_2->MontageInstanceId;
  return (FPreAnimatedSkeletalAnimationMontageState *)(pFVar6 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSkeletalAnimationState> @ 1467df180

FPreAnimatedSkeletalAnimationState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSkeletalAnimationState>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedSkeletalAnimationState *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPreAnimatedSkeletalAnimationState *pFVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FPreAnimatedSkeletalAnimationState *)(*pcVar5)();
      return pFVar8;
    }
    if (-1 < iVar7) goto LAB_1467df1ec;
  }
  else {
LAB_1467df1ec:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FPreAnimatedSkeletalAnimationState *)(*pcVar5)();
          return pFVar8;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x28;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FPreAnimatedSkeletalAnimationState *)(*pcVar5)();
          return pFVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FPreAnimatedSkeletalAnimationState *)(*pcVar5)();
          return pFVar8;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,int>
                  (pTVar9,1);
        goto LAB_1467df2e9;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
LAB_1467df2e9:
  *(int *)pTVar9 = param_1->Value;
  *(Type *)&pTVar9->field_0x8 = param_2->AnimationMode;
  FVar4 = (param_2->CachedAnimInstance).WeakPtr;
  *(int *)&pTVar9->field_0xc = FVar4.ObjectIndex;
  *(int *)&pTVar9->field_0x10 = FVar4.ObjectSerialNumber;
  *(undefined8 *)&pTVar9->field_0x18 = 0;
  *(FScriptContainerElement **)&pTVar9->field_0x18 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)&pTVar9->field_0x20 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum;
  *(int *)&pTVar9->field_0x24 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum = 0;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax = 0;
  return (FPreAnimatedSkeletalAnimationState *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSlomoState> @ 1467df340

FPreAnimatedSlomoState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedSlomoState>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedSlomoState *param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPreAnimatedSlomoState *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  lVar8 = (longlong)iVar5;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPreAnimatedSlomoState *)(*pcVar3)();
      return pFVar6;
    }
    if (-1 < iVar5) goto LAB_1467df3ba;
  }
  else {
LAB_1467df3ba:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FPreAnimatedSlomoState *)(*pcVar3)();
          return pFVar6;
        }
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FPreAnimatedSlomoState *)(*pcVar3)();
          return pFVar6;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar7 + lVar8 * 0x18) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FPreAnimatedSlomoState *)(*pcVar3)();
          return pFVar6;
        }
      }
      if (*(int *)(pFVar7 + lVar8 * 0x18) <= iVar2) {
        pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar8 * 0x18;
        goto LAB_1467df4a0;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar8 * 0x18;
LAB_1467df4a0:
  *(int *)pFVar7 = param_1->Value;
  pFVar7[0x10] = (FScriptContainerElement)0x0;
  FVar1 = (FScriptContainerElement)(param_2->TimeDilation).bIsSet;
  pFVar7[0x10] = FVar1;
  if (FVar1 != (FScriptContainerElement)0x0) {
    ((TOptional<double> *)&pFVar7[8].field_0x0)->TypedValue = (param_2->TimeDilation).TypedValue;
  }
  return (FPreAnimatedSlomoState *)(pFVar7 + 8);
}

// Find @ 14682d6c0

FAdditiveAndOverrideBuffer * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
       *this,FComponentTypeID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAdditiveAndOverrideBuffer *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FComponentTypeID,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FComponentTypeID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FAdditiveAndOverrideBuffer *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAdditiveAndOverrideBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FAdditiveAndOverrideBuffer *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 14682d760

FAdditiveFromBaseBuffer * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
       *this,FComponentTypeID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAdditiveFromBaseBuffer *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FComponentTypeID,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FComponentTypeID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FAdditiveFromBaseBuffer *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAdditiveFromBaseBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FAdditiveFromBaseBuffer *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8);
}

// Find @ 14682d800

TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
       *this,FComponentTypeID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FComponentTypeID,TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FComponentTypeID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 14682d8a0

FLinearColor * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinearColor *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FLinearColor *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLinearColor *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 4);
}

// Find @ 14682d940

FPreAnimatedFadeState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedFadeState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedFadeState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedFadeState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedFadeState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x1c + 4);
}

// Find @ 14682d9e0

FPreAnimatedSkeletalAnimationMontageState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedSkeletalAnimationMontageState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedSkeletalAnimationMontageState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedSkeletalAnimationMontageState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedSkeletalAnimationMontageState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10 + 4);
}

// Find @ 14682da80

FPreAnimatedSkeletalAnimationState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedSkeletalAnimationState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedSkeletalAnimationState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedSkeletalAnimationState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedSkeletalAnimationState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 8);
}

// Find @ 14682db20

FPreAnimatedSlomoState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedSlomoState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedSlomoState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedSlomoState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedSlomoState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 14682dbc0

EDataLayerRuntimeState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(void *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EDataLayerRuntimeState *pEVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (EDataLayerRuntimeState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar4 = (EDataLayerRuntimeState *)(*pcVar1)();
      return pEVar4;
    }
  }
  return (EDataLayerRuntimeState *)(*(longlong *)this + (longlong)(int)uVar3 * 8 + 4);
}

// Remove @ 14685e160

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x14;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x14,(longlong)iVar6 * 0x14);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 14685e240

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedFadeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x1c;
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x1c,(longlong)iVar6 * 0x1c);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 14685e320

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 14685e400

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FKeyForward local_res8;
  
  uVar6 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar7 = 0;
  if (uVar6 != 0xffffffff) {
    if ((int)uVar6 < (this->Pairs).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar6 * 0x28;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x28 + 0x18);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar8 = (this->Pairs).ArrayNum + ~uVar6;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0x28,(longlong)iVar8 * 0x28);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar7 = 1;
  }
  return uVar7;
}

// Remove @ 14685e4f0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 14685e5d0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(void *this,FPreAnimatedStorageIndex *param_1)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (this,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar4 = 0;
  if (uVar3 != 0xffffffff) {
    if ((int)uVar3 < *(int *)((longlong)this + 8)) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    iVar5 = *(int *)((longlong)this + 8) + ~uVar3;
    _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar3 * 8);
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
    }
    *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,this,*(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    uVar4 = 1;
  }
  return uVar4;
}

// AllocateMemoryForEmplace<UE::MovieScene::FRootInstanceHandle_&> @ 146885630

TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> * __thiscall
TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FRootInstanceHandle_&>
          (TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
           *this,FRootInstanceHandle *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *pTVar7;
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
           )this;
  if (FVar3 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(ushort *)((longlong)iVar1 * 0x1b0 + (longlong)FVar8) < *(ushort *)param_1) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
               (*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_146885761;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
               (*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
             )this;
    if (FVar3 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                  )0x0) {
      FVar8 = FVar3;
    }
    if (*(ushort *)((longlong)iVar9 * 0x1b0 + (longlong)FVar8) <= *(ushort *)param_1) {
      if (FVar3 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                    )0x0) {
        this = (TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                *)FVar3;
      }
      pTVar7 = (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
               ((longlong)iVar9 * 0x1b0 + (longlong)this);
      DestructItems<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_146885761:
  TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    this = (TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
            *)FVar3;
  }
  return (TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData> *)
         ((longlong)iVar9 * 0x1b0 + (longlong)this);
}

// AllocateMemoryForEmplace<short_const_&> @ 1468857b0

TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
* __thiscall
TSortedMap<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TGreater<void>_>
::AllocateMemoryForEmplace<short_const_&>(void *this,short *param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
  *pTVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  
  puVar1 = (uint *)((longlong)this + 0x48);
  uVar2 = *puVar1;
  pvVar9 = this;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    pvVar9 = *(void **)((longlong)this + 0x40);
  }
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar6 = (uVar11 >> 1) + iVar10;
      if (*param_1 < *(short *)((longlong)pvVar9 + (longlong)iVar6 * 4)) {
        iVar10 = iVar6 + (uVar11 & 1);
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar10 < 0) goto LAB_1468858c0;
  }
  if (iVar10 < (int)*puVar1) {
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
                *)(*pcVar3)();
      return pTVar7;
    }
    pvVar9 = *(void **)((longlong)this + 0x40);
    pvVar8 = this;
    if (pvVar9 != (void *)0x0) {
      pvVar8 = pvVar9;
    }
    if (*param_1 <= *(short *)((longlong)iVar10 * 4 + (longlong)pvVar8)) {
      if (pvVar9 != (void *)0x0) {
        this = pvVar9;
      }
      return (TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
              *)((longlong)iVar10 * 4 + (longlong)this);
    }
  }
LAB_1468858c0:
  iVar6 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<short,_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets_::__l5::FHBiasChannelData>_>_>
                    (4,2,1,this,(int *)puVar1,(int *)((longlong)this + 0x4c));
  pvVar9 = this;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    pvVar9 = *(void **)((longlong)this + 0x40);
  }
  pvVar9 = (void *)((longlong)pvVar9 + (longlong)iVar10 * 4);
  memmove((void *)((longlong)pvVar9 + 4),pvVar9,(longlong)(iVar6 - iVar10) << 2);
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    this = *(void **)((longlong)this + 0x40);
  }
  return (TTuple<short,_public:_void___cdecl_UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets(void)_::_5_::FHBiasChannelData>
          *)((longlong)this + (longlong)iVar10 * 4);
}

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 146885940

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState> *
__thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  FKeyForward local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
              *)(*pcVar2)();
    return pTVar6;
  }
  if ((-1 < iVar4) && (iVar4 < (this->Pairs).ArrayNum)) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
                *)(*pcVar2)();
      return pTVar6;
    }
    lVar1 = (longlong)iVar4 * 8;
    pFVar7 = (this->Pairs).AllocatorInstance.Data;
    if ((param_1->Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = param_1->Value;
    if ((*(int *)(pFVar7 + lVar1) == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
                *)(*pcVar2)();
      return pTVar6;
    }
    if (*(int *)(pFVar7 + lVar1) <= iVar5) {
      return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
              *)((this->Pairs).AllocatorInstance.Data + lVar1);
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax
                    );
  lVar1 = (longlong)iVar4 * 8;
  pFVar7 = (this->Pairs).AllocatorInstance.Data + lVar1;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar5 - iVar4) << 3);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
          *)((this->Pairs).AllocatorInstance.Data + lVar1);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedCameraCutState> @ 146888a00

FPreAnimatedCameraCutState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedCameraCutState>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedCameraCutState *param_2)

{
  longlong lVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPreAnimatedCameraCutState *pFVar7;
  FScriptContainerElement *pFVar8;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPreAnimatedCameraCutState *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar6) goto LAB_146888a7a;
  }
  else {
LAB_146888a7a:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedCameraCutState *)(*pcVar4)();
          return pFVar7;
        }
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar6 * 0x24;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedCameraCutState *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar3 = param_1->Value;
      if (*(int *)(pFVar8 + lVar1) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedCameraCutState *)(*pcVar4)();
          return pFVar7;
        }
      }
      if (*(int *)(pFVar8 + lVar1) <= iVar3) {
        pFVar8 = (this->Pairs).AllocatorInstance.Data + lVar1;
        goto LAB_146888b6a;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x24;
LAB_146888b6a:
  *(int *)pFVar8 = param_1->Value;
  *(FObjectKey *)(pFVar8 + 4) = param_2->LastWorld;
  *(FObjectKey *)(pFVar8 + 0xc) = param_2->LastLocalPlayer;
  *(FObjectKey *)(pFVar8 + 0x14) = param_2->LastViewTarget;
  pFVar8[0x20] = (FScriptContainerElement)0x0;
  FVar2 = (FScriptContainerElement)(param_2->LastAspectRatioAxisConstraint).bIsSet;
  pFVar8[0x20] = FVar2;
  if (FVar2 != (FScriptContainerElement)0x0) {
    *(EAspectRatioAxisConstraint *)(pFVar8 + 0x1c) =
         (param_2->LastAspectRatioAxisConstraint).TypedValue;
  }
  return (FPreAnimatedCameraCutState *)(pFVar8 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,FString> @ 146888bc0

FString * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,FString>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FString *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    if (-1 < iVar7) goto LAB_146888c2c;
  }
  else {
LAB_146888c2c:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
      }
      pFVar4 = (this->Pairs).AllocatorInstance.Data;
      lVar2 = (longlong)iVar7 * 0x18;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
      }
      iVar3 = param_1->Value;
      if (*(int *)(pFVar4 + lVar2) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
      }
      if (*(int *)(pFVar4 + lVar2) <= iVar3) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *)
                 ((this->Pairs).AllocatorInstance.Data + lVar2);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,int>(pTVar9,1);
        goto LAB_146888d27;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18);
LAB_146888d27:
  *(int *)pTVar9 = param_1->Value;
  puVar1 = &pTVar9->field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(FScriptContainerElement **)puVar1 = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar9->field_0x10 = (param_2->Data).ArrayNum;
  *(int *)&pTVar9->field_0x14 = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  return (FString *)puVar1;
}

// Find @ 1468b37e0

FHBiasChannelData * __thiscall
TSortedMap<short,`UMovieSceneHierarchicalEasingInstantiatorSystem::FinalizeBlendTargets'::__l5::FHBiasChannelData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TGreater<void>_>
::Find(void *this,short param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  void *pvVar6;
  FHBiasChannelData *pFVar7;
  int iVar8;
  uint uVar9;
  
  pvVar2 = *(void **)((longlong)this + 0x40);
  uVar9 = *(uint *)((longlong)this + 0x48);
  pvVar6 = this;
  if (pvVar2 != (void *)0x0) {
    pvVar6 = pvVar2;
  }
  iVar8 = 0;
  if (0 < (int)uVar9) {
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (param_1 < *(short *)((longlong)pvVar6 + (longlong)iVar1 * 4)) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (iVar8 < *(int *)((longlong)this + 0x48)) {
    pvVar6 = this;
    if (pvVar2 != (void *)0x0) {
      pvVar6 = pvVar2;
    }
    if ((param_1 <= *(short *)((longlong)pvVar6 + (longlong)iVar8 * 4)) && (iVar8 != -1)) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FHBiasChannelData *)(*pcVar3)();
        return pFVar7;
      }
      if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
        this = *(void **)((longlong)this + 0x40);
      }
      return (FHBiasChannelData *)((longlong)this + (longlong)iVar8 * 4 + 2);
    }
  }
  return (FHBiasChannelData *)0x0;
}

// Find @ 1468b38d0

FPreAnimatedCameraCutState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedCameraCutState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedCameraCutState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedCameraCutState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedCameraCutState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x24 + 4);
}

// Find @ 1468b3970

FPreAnimatedVisibilityState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedVisibilityState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedVisibilityState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreAnimatedVisibilityState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedVisibilityState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4);
}

// Find @ 1468b3a10

FString * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FString *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FString *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 1468b3ab0

/* WARNING: Enum "Type": Some values do not have unique names */

FRootSequenceData * __thiscall
TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
::Find(TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
       *this,FRootInstanceHandle *param_1)

{
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRootSequenceData *pFVar5;
  uint uVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,UE::MovieScene::FRootInstanceHandle,TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>::FKeyForward,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FRootInstanceHandle_const_&>)local_res8);
  if (uVar4 == 0xffffffff) {
    return (FRootSequenceData *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRootSequenceData *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    this = (TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
            *)FVar1;
  }
  return (FRootSequenceData *)((uchar *)((longlong)this + 8) + (longlong)(int)uVar4 * 0x1b0);
}

// Remove @ 1468c8a10

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x24;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x24,(longlong)iVar6 * 0x24);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1468c8af0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 1468c8bd0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FKeyForward local_res8;
  
  uVar6 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar7 = 0;
  if (uVar6 != 0xffffffff) {
    if ((int)uVar6 < (this->Pairs).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar6 * 0x18;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x18 + 8);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar8 = (this->Pairs).ArrayNum + ~uVar6;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar7 = 1;
  }
  return uVar7;
}

