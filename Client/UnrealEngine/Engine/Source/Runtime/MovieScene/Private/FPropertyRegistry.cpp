// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FindPropertyDefinition @ 146131c30

FPropertyDefinition * __thiscall
UE::MovieScene::FPropertyRegistry::FindPropertyDefinition
          (FPropertyRegistry *this,FComponentTypeID param_1)

{
  int iVar1;
  FPropertyDefinition *pFVar2;
  FPropertyDefinition *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Properties).ArrayNum;
  pFVar3 = (FPropertyDefinition *)(this->Properties).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Properties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::MovieScene::FPropertyDefinition_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if ((pFVar3->PropertyType).Value == param_1.Value) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FPropertyDefinition *)0x0;
}

// ResolveFastProperty @ 146151d60

TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> * __cdecl
UE::MovieScene::FPropertyRegistry::ResolveFastProperty
          (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_>
           *__return_storage_ptr__,UObject *param_1,FMovieScenePropertyBinding *param_2,
          FCustomAccessorView *param_3)

{
  int iVar1;
  UClass *pUVar2;
  FName FVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> *pTVar8;
  int iVar9;
  uint uVar10;
  short local_res10;
  char local_res12;
  
  iVar1 = param_3->ViewNum;
  pUVar2 = *(UClass **)&param_1->field_0x10;
  if (iVar1 != 0) {
    FVar3 = param_2->PropertyPath;
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    for (pUVar4 = pUVar2; pUVar4 != pUVar7; pUVar4 = (UClass *)pUVar4->_padding_) {
      uVar10 = 0;
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          if ((*(UClass **)(param_3->Base + iVar9) == pUVar4) &&
             (*(FName *)(param_3->Base + (longlong)iVar9 + 8) == FVar3)) {
            if ((0xfffe < uVar10) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CustomPropertyIndex < ((uint16) 0xffff)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieScenePropertyRegistry.cpp"
                                   ,0xb4,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> *)
                       (*pcVar5)();
              return pTVar8;
            }
            (__return_storage_ptr__->TypedValue).TypeIndex = '\x01';
            (__return_storage_ptr__->TypedValue)._padding_ = (short)uVar10;
            __return_storage_ptr__->bIsSet = true;
            return __return_storage_ptr__;
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + param_3->Stride;
        } while ((int)uVar10 < iVar1);
      }
    }
  }
  if ((param_2->bCanUseClassLookup == false) ||
     (ComputeFastPropertyPtrOffset((UClass *)&local_res10,(FMovieScenePropertyBinding *)pUVar2),
     local_res12 == '\0')) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    (__return_storage_ptr__->TypedValue).TypeIndex = '\0';
    (__return_storage_ptr__->TypedValue)._padding_ = local_res10;
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// ResolveProperty @ 146151e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
* __cdecl UE::MovieScene::FPropertyRegistry::ResolveProperty
                    (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                     *__return_storage_ptr__,UObject *param_1,FMovieScenePropertyBinding *param_2,
                    FCustomAccessorView *param_3)

{
  undefined4 uVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  *pTVar8;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  ulonglong uVar14;
  TReferenceControllerBase<1> *pTVar15;
  UClass *pUVar16;
  FTrackInstancePropertyBindings *this;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  undefined1 local_e8 [40];
  FString local_c0;
  uchar *local_a8;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  local_78;
  TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_a8 = param_3->Base;
  uStack_a0._0_4_ = param_3->ViewNum;
  uStack_a0._4_4_ = param_3->Stride;
  uVar1 = param_3->ViewNum;
  pUVar16 = *(UClass **)&param_1->field_0x10;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  pUVar7 = pUVar16;
  local_e8._0_8_ = pUVar16;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  if (uVar1 != 0) {
    FVar2 = param_2->PropertyPath;
    pUVar6 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar16 != pUVar6) {
      do {
        pTVar10 = pTVar15;
        pTVar13 = pTVar15;
        pUVar7 = (UClass *)local_e8._0_8_;
        param_2 = (FMovieScenePropertyBinding *)local_e8._16_8_;
        if (0 < (int)uVar1) {
          do {
            iVar11 = (int)pTVar10;
            iVar12 = (int)pTVar13;
            if ((*(UClass **)(local_a8 + iVar11) == pUVar16) &&
               (*(FName *)(local_a8 + (longlong)iVar11 + 8) == FVar2)) {
              if (iVar12 == -1) goto LAB_146151f44;
              if ((0xfffe < iVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CustomPropertyIndex < ((uint16) 0xffff)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieScenePropertyRegistry.cpp"
                                     ,0xb4,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                          *)(*pcVar3)();
                return pTVar8;
              }
              local_78.TypeIndex = 1;
              goto LAB_146151f70;
            }
            pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)(uint)(iVar11 + uStack_a0._4_4_);
            pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(iVar12 + 1U);
          } while ((int)(iVar12 + 1U) < (int)uVar1);
        }
        pUVar16 = (UClass *)pUVar16->_padding_;
      } while (pUVar16 != pUVar6);
    }
  }
LAB_146151f44:
  uVar4 = local_e8._8_8_;
  if (param_2->bCanUseClassLookup != false) {
    ComputeFastPropertyPtrOffset((UClass *)local_e8,(FMovieScenePropertyBinding *)pUVar7);
    if (local_e8[2] != '\0') {
      pTVar13 = (TReferenceControllerBase<1> *)(local_e8._0_8_ & 0xffff);
      local_78.TypeIndex = 0;
LAB_146151f70:
      if (local_78.TypeIndex == 1) {
        local_78._padding_._0_2_ = (short)pTVar13;
        TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
        ::
        TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                  (__return_storage_ptr__,&local_78);
        uVar14 = (ulonglong)local_78.TypeIndex;
        if ((2 < uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                    *)(*pcVar3)();
          return pTVar8;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyIndex>::Destruct) {
          return __return_storage_ptr__;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(&local_78);
        return __return_storage_ptr__;
      }
      if ((local_78.TypeIndex != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      local_60.TypeIndex = 0;
      local_60._padding_._0_2_ = (short)pTVar13;
      TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
      ::
      TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                (__return_storage_ptr__,&local_60);
      uVar14 = (ulonglong)local_60.TypeIndex;
      if ((2 < uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          Core::Private::TDestructorCaller<unsigned_short>::Destruct) {
        return __return_storage_ptr__;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(&local_60);
      return __return_storage_ptr__;
    }
  }
  pFVar9 = ::FName::ToString(&param_2->PropertyPath,&local_98);
  pTVar10 = ::operator_new(0x80);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    this = (FTrackInstancePropertyBindings *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTrackInstancePropertyBindings___00_SharedPointerInternals__6B_
    ;
    FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
              ((FTrackInstancePropertyBindings *)(pTVar10 + 1),*(FName *)local_e8._16_8_,pFVar9);
    this = (FTrackInstancePropertyBindings *)(pTVar10 + 1);
    if ((this == (FTrackInstancePropertyBindings *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar15 = pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((this == (FTrackInstancePropertyBindings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
              *)(*pcVar3)();
    return pTVar8;
  }
  bVar5 = FTrackInstancePropertyBindings::HasValidBinding(this,(UObject *)uVar4);
  if (bVar5) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->TypedValue).TypeIndex = '\x02';
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)this;
    (__return_storage_ptr__->TypedValue)._padding_ = (longlong)pTVar15;
    __return_storage_ptr__->bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if (2 < (byte)LogMovieSceneECS._0_1_) {
      local_e8._16_8_ = *(undefined8 *)(uVar4 + 0x18);
      ::FName::ToString((FName *)(local_e8 + 0x10),&local_c0);
      local_f8 = (FScriptContainerElement *)L"";
      if (local_c0.Data.ArrayNum != 0) {
        local_f8 = local_c0.Data.AllocatorInstance.Data;
      }
      local_e8._8_8_ = *(undefined8 *)(*(longlong *)(uVar4 + 0x10) + 0x18);
      ::FName::ToString((FName *)(local_e8 + 8),(FString *)(local_e8 + 0x18));
      ::FName::ToString(&param_2->PropertyPath,&local_88);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((void *)local_e8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._24_8_);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->bIsSet = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

