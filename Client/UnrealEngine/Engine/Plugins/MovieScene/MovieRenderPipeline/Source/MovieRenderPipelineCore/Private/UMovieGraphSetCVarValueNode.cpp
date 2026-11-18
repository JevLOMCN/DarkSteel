// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dcf44d0

UClass * __cdecl UMovieGraphSetCVarValueNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetCVarValueNode",
               &Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetCVarValueNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSetCVarValueNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetCVarValueNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton;
}

// UMovieGraphSetCVarValueNode @ 14dd0b440

UMovieGraphSetCVarValueNode * __thiscall
UMovieGraphSetCVarValueNode::UMovieGraphSetCVarValueNode
          (UMovieGraphSetCVarValueNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphSetCVarValueNode__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphSetCVarValueNode @ 14dd0ddf0

void __thiscall
UMovieGraphSetCVarValueNode::~UMovieGraphSetCVarValueNode(UMovieGraphSetCVarValueNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphSetCVarValueNode__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23ec0

EMovieGraphBranchRestriction __thiscall
UMovieGraphSetCVarValueNode::GetBranchRestriction(UMovieGraphSetCVarValueNode *this)

{
  return Globals;
}

// GetNodeInstanceName @ 14dd29300

FString * __thiscall
UMovieGraphSetCVarValueNode::GetNodeInstanceName
          (UMovieGraphSetCVarValueNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Name);
  return __return_storage_ptr__;
}

// GetOverrideablePropertyInfo @ 14dd2b820

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSetCVarValueNode::GetOverrideablePropertyInfo
          (UMovieGraphSetCVarValueNode *this,
          TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  FName *pFVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  int iVar21;
  byte bVar22;
  uint local_res18 [2];
  FName local_res20;
  FString local_108;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FFormatArgumentValue local_b8;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  bVar5 = false;
  bVar4 = false;
  local_res18[0] = 0;
  UMovieGraphNode::GetOverrideablePropertyInfo((UMovieGraphNode *)this,__return_storage_ptr__);
  iVar17 = __return_storage_ptr__->ArrayNum;
  pFVar13 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  pFVar14 = pFVar13 + (longlong)iVar17 * 7;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar17) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<FMovieGraphPropertyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar14) break;
    pFVar7 = ::FName::FName(&local_res20,5,L"Value",FNAME_Add);
    if (*pFVar13 == *pFVar7) {
      iVar21 = (this->Name).Data.ArrayNum;
      if (iVar21 < 2) {
        bVar5 = true;
        pFVar8 = ::FString::FString(&local_80,L"NoCVarName");
      }
      else {
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar1 = (this->Name).Data.AllocatorInstance.Data;
        bVar4 = true;
        local_e8.Data.ArrayNum = iVar21;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar21,0,(ForAnyElementType *)&local_e8,iVar21,&local_e8.Data.ArrayMax);
        memcpy(local_e8.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar21 * 2);
        pFVar8 = &local_e8;
      }
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      lVar15 = (longlong)local_108.Data.ArrayNum;
      pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
      if (local_108.Data.ArrayNum == 0) {
        local_108.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                   local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
        memcpy(local_108.Data.AllocatorInstance.Data,pFVar1,lVar15 * 2);
      }
      if ((bVar4) &&
         (bVar4 = false, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      pFVar9 = FText::FromString(&local_60,&local_108);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_70,L"MovieGraphNodes",
                           L"SetCvarValueNode_ValuePromotionContextMenuName",L"Value ({0})");
      pFVar11 = FTextFormat::FTextFormat(&local_50,pFVar10,Default);
      local_b8.Type = Text;
      FText::FText((FText *)&local_b8.TextValue,pFVar9);
      if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      local_f8.ArrayNum = 1;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_b8,1);
      local_d8.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_d8,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar9->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      FText::operator=((FText *)(pFVar13 + 1),&local_c8);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      iVar21 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar21 = 0;
      }
      pFVar7 = ::FName::FName(&local_98,iVar21,(wchar_t *)local_108.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar13[3] = *pFVar7;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar13 = pFVar13 + 7;
  }
  lVar15 = (longlong)__return_storage_ptr__->ArrayNum;
  if (__return_storage_ptr__->ArrayNum != 0) {
    local_res20 = (FName)(__return_storage_ptr__->AllocatorInstance).Data;
    iVar21 = 0;
    pFVar13 = ::FName::FName(&local_90,4,L"Name",FNAME_Add);
    lVar16 = 0;
    bVar22 = *(FName *)local_res20 != *pFVar13;
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar22);
    iVar17 = 0;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar17 + 1;
      bVar20 = bVar22;
      if (lVar16 < lVar15) {
        pFVar13 = (FName *)(lVar16 * 0x38 + (longlong)local_res20);
        do {
          pFVar14 = ::FName::FName(&local_88,4,L"Name",FNAME_Add);
          if ((bool)bVar22 != (*pFVar13 != *pFVar14)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar13 = pFVar13 + 7;
        } while (lVar16 < lVar15);
        bVar20 = (byte)local_res18[0];
      }
      iVar19 = iVar18 - iVar17;
      if (bVar20 == 0) {
        DestructItems<FMovieGraphPropertyInfo,int>
                  ((FMovieGraphPropertyInfo *)((longlong)iVar17 * 0x38 + (longlong)local_res20),
                   iVar19);
      }
      else {
        if (iVar21 != iVar17) {
          memmove((FName *)((longlong)iVar21 * 0x38 + (longlong)local_res20),
                  (FName *)((longlong)iVar17 * 0x38 + (longlong)local_res20),(longlong)iVar19 * 0x38
                 );
        }
        iVar21 = iVar21 + iVar19;
      }
      bVar22 = bVar20 ^ 1;
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar20) ^ 1;
      iVar17 = iVar18;
    } while (lVar16 < lVar15);
    __return_storage_ptr__->ArrayNum = iVar21;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d260

UClass * __cdecl UMovieGraphSetCVarValueNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetCVarValueNode",
               &Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetCVarValueNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSetCVarValueNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetCVarValueNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetCVarValueNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphSetCVarValueNode @ 14dd453c0

void __cdecl UMovieGraphSetCVarValueNode::StaticRegisterNativesUMovieGraphSetCVarValueNode(void)

{
  return;
}

