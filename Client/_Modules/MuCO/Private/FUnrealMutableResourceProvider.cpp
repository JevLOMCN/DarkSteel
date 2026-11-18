// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 11

// <lambda_invoker_cdecl> @ 14ac4efa0

void __cdecl
`FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_2> @ 14ac501a0

<lambda_2> * __thiscall
`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FTaskEvent FVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  uVar5 = *(undefined4 *)((longlong)&(param_1->MutImageDataView).DataPtr + 4);
  iVar6 = (param_1->MutImageDataView).ArrayNum;
  uVar7 = *(undefined4 *)&(param_1->MutImageDataView).field_0xc;
  *(undefined4 *)this = *(undefined4 *)&(param_1->MutImageDataView).DataPtr;
  *(undefined4 *)((longlong)this + 4) = uVar5;
  *(int *)((longlong)this + 8) = iVar6;
  *(undefined4 *)((longlong)this + 0xc) = uVar7;
  *(EImageFormat *)((longlong)this + 0x10) = param_1->MutImageFormat;
  *(EPixelFormat *)((longlong)this + 0x11) = param_1->Format;
  *(FImage **)((longlong)this + 0x18) = (param_1->Image).Object;
  pTVar1 = (param_1->Image).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)((longlong)this + 0x28) = param_1->BulkDataSize;
  lVar2 = *(longlong *)&param_1->ResultCallback;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(longlong *)((longlong)this + 0x30) = lVar2;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(param_1->ResultCallback).field_0x28;
    puVar8 = (undefined8 *)&(param_1->ResultCallback).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)();
  }
  *(undefined8 *)((longlong)this + 0x60) = 0;
  FVar4 = param_1->IORequestCompletionEvent;
  *(FTaskEvent *)((longlong)this + 0x60) = FVar4;
  if (FVar4 != (FTaskEvent)0x0) {
    LOCK();
    *(int *)((longlong)FVar4 + 0x30) = *(int *)((longlong)FVar4 + 0x30) + 1;
    UNLOCK();
  }
  return this;
}

// FUnrealMutableResourceProvider @ 14ac506d0

FUnrealMutableResourceProvider * __thiscall
FUnrealMutableResourceProvider::FUnrealMutableResourceProvider
          (FUnrealMutableResourceProvider *this,TSharedRef<FBoneNames,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FUnrealMutableResourceProvider__6B_;
  (this->BoneNames).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->BoneNames).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator() @ 14ac51340

TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> * __thiscall
`FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()
          (void *this,
          TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  TTask<void> TVar4;
  undefined8 *local_res10;
  
  TVar4 = UE::Tasks::MakeCompletedTask<void>();
  uVar3 = *(undefined8 *)TVar4;
  *(undefined8 *)TVar4 = 0;
  *(undefined8 *)__return_storage_ptr__ = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x20 =
       &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x28 =
       ``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::
       <lambda_1>::<lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
    *(code **)&__return_storage_ptr__->field_0x10 =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ac564b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  atomic<bool> aVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FTaskBase *this_00;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar8;
  undefined8 uVar9;
  longlong *plVar10;
  atomic<unsigned_int> *paVar11;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_38;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_28;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_18;
  
  if (param_1) {
    if (2 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    pTVar8 = &local_28;
  }
  else {
    lVar7 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
    if (lVar7 == 0) {
      if (2 < (byte)LogMutable._0_1_) {
        GetPixelFormatString(*(EPixelFormat *)((longlong)this + 0x11));
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
    }
    else {
      iVar5 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
      if (*(int *)((longlong)this + 8) == iVar5) {
        iVar5 = *(int *)((longlong)this + 0x28);
        iVar6 = (**(code **)((longlong)*param_2 + 0x20))();
        if (iVar5 != iVar6) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("BulkDataSize == (int32)IORequest->GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                             ,0xef,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (lVar7 != *(longlong *)this) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Results == MutImageDataView.GetData()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                             ,0xf0,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_38.Object = *(FImage **)((longlong)this + 0x18);
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
                      *)((longlong)this + 0x30),&local_38);
        goto LAB_14ac566a6;
      }
      iVar5 = *(int *)((longlong)this + 8);
      iVar6 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
      if (iVar5 == iVar6) {
        if (2 < (byte)LogMutable._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        }
      }
      else if (2 < (byte)LogMutable._0_1_) {
        GetPixelFormatString(*(EPixelFormat *)((longlong)this + 0x11));
        (**(code **)((longlong)*param_2 + 0x20))(param_2);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
    }
    pTVar8 = &local_18;
  }
  pTVar8 = FUnrealMutableResourceProvider::CreateDummy(pTVar8);
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
  pcVar3 = *(code **)((longlong)this + 0x30);
  plVar10 = (longlong *)((longlong)this + 0x40);
  if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
    plVar10 = *(longlong **)((longlong)this + 0x58);
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  (*pcVar3)(uVar9,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar8->SharedReferenceCount).ReferenceController);
LAB_14ac566a6:
  this_00 = *(FTaskBase **)((longlong)this + 0x60);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      LOCK();
      aVar1 = this_00->TaskTriggered;
      this_00->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
      }
    }
    paVar11 = &this_00->RefCount;
    LOCK();
    aVar2 = *paVar11;
    *paVar11 = (atomic<unsigned_int>)((int)*paVar11 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// CreateDummy @ 14ac5ac70

TSharedPtr<UE::Mutable::Private::FImage,1> * __cdecl
FUnrealMutableResourceProvider::CreateDummy
          (TSharedPtr<UE::Mutable::Private::FImage,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EImageFormat EVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uchar local_res8 [8];
  
  uVar9 = (uint)DUMMY_IMAGE_DESC.m_size.field0_0x0._s_0.X;
  local_res8[0] = 0xff;
  local_res8[1] = 0xff;
  local_res8[2] = '\0';
  local_res8[3] = 0xff;
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = 0xff;
  local_res8[7] = 0xff;
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FImage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FImage::FImage
              ((FImage *)(pTVar6 + 1),uVar9,uVar9,(uint)DUMMY_IMAGE_DESC.m_lods,
               DUMMY_IMAGE_DESC.m_format,NotInitialized);
    if ((FImage *)(pTVar6 + 1) == (FImage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (FImage *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = UE::Mutable::Private::FImage::GetLODCount(__return_storage_ptr__->Object);
  if (iVar5 != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResult->GetLODCount() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                       ,0x220,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  EVar4 = UE::Mutable::Private::FImage::GetFormat(__return_storage_ptr__->Object);
  if (EVar4 != RGBA_UByte) {
    if (__return_storage_ptr__->Object == (FImage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    EVar4 = UE::Mutable::Private::FImage::GetFormat(__return_storage_ptr__->Object);
    if (EVar4 != BGRA_UByte) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("pResult->GetFormat() == UE::Mutable::Private::EImageFormat::RGBA_UByte || pResult->GetFormat() == UE::Mutable::Private::EImageFormat::BGRA_UByte"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                         ,0x221,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  puVar8 = UE::Mutable::Private::FImage::GetLODData(__return_storage_ptr__->Object,0);
  uVar12 = 0;
  if (uVar9 != 0) {
    do {
      uVar10 = 0;
      do {
        uVar11 = uVar10 + 1;
        lVar1 = (ulonglong)((uVar10 >> 2) + (uVar12 >> 2) & 1) * 4;
        *puVar8 = local_res8[lVar1];
        puVar8[1] = local_res8[lVar1 + 1];
        puVar8[2] = local_res8[lVar1 + 2];
        puVar8[3] = local_res8[lVar1 + 3];
        puVar8 = puVar8 + 4;
        uVar10 = uVar11;
      } while ((int)uVar11 < (int)uVar9);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar9);
  }
  return __return_storage_ptr__;
}

// CreateDummyDesc @ 14ac5af00

FExtendedImageDesc * __cdecl
FUnrealMutableResourceProvider::CreateDummyDesc(FExtendedImageDesc *__return_storage_ptr__)

{
  uchar uVar1;
  
  *(TIntVector2<unsigned_short>_u_0 *)__return_storage_ptr__ = DUMMY_IMAGE_DESC.m_size.field0_0x0;
  uVar1 = DUMMY_IMAGE_DESC.m_lods;
  __return_storage_ptr__->field_0x4 = DUMMY_IMAGE_DESC.m_format;
  __return_storage_ptr__->field_0x5 = uVar1;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = 0;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax = 0;
  __return_storage_ptr__->FirstLODAvailable = '\0';
  return __return_storage_ptr__;
}

// GetImageAsync @ 14ac5c420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ac5cc09) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff48 : 0x00014ac5cc0d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> * __thiscall
FUnrealMutableResourceProvider::GetImageAsync
          (FUnrealMutableResourceProvider *this,
          TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
          *__return_storage_ptr__,UTexture *param_1,uchar param_2,
          TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)> *param_3)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  EPixelFormat EVar5;
  int iVar6;
  code *pcVar7;
  TFunctionStorage<0> *pTVar8;
  _func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *p_Var9;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
  *pTVar10;
  bool bVar11;
  EImageFormat EVar12;
  int iVar13;
  uint uVar14;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar15;
  undefined8 uVar16;
  TTask<void> TVar17;
  UClass *pUVar18;
  FTexturePlatformData *pFVar19;
  TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *pTVar20;
  void *pvVar21;
  TReferenceControllerBase<1> *pTVar22;
  long64 lVar23;
  FTaskBase *this_00;
  FString *pFVar24;
  FName *pFVar25;
  TEventRef<unsigned_int> TVar26;
  IBulkDataIORequest *pIVar27;
  FWriteBuffer *pFVar28;
  longlong *plVar29;
  TFunctionStorage<0> *pTVar30;
  code **ppcVar31;
  uint uVar32;
  FBulkData *this_01;
  longlong lVar33;
  FImage *pFVar34;
  bool bVar35;
  undefined1 auStackY_278 [32];
  undefined1 local_247;
  EPixelFormat local_246;
  FImage *local_240;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
  *local_230;
  undefined4 local_228;
  undefined8 local_224;
  TArrayView<unsigned_char,int> local_218;
  undefined8 *local_208;
  FName local_200;
  undefined8 *local_1f8;
  FName local_1f0;
  undefined8 *local_1e8;
  FName local_1e0;
  FBulkData *local_1d8;
  FName local_1d0;
  undefined8 *local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_190;
  FName local_180;
  FName local_178;
  FString local_170;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_160;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_150;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_140;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_130;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_120;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_110;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  EImageFormat local_e8;
  EPixelFormat local_e7;
  FImage *local_e0;
  TReferenceControllerBase<1> *local_d8;
  int local_d0;
  _func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  code *local_a0;
  FTaskBase *local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar32 = (uint)param_2;
  local_230 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
               *)param_3;
  local_228 = 0;
  bVar35 = -1 < CpuChannel->Enabled;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,"Mutable_FUnrealMutableImageProvider::GetImageAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  if (param_1 == (UTexture *)0x0) {
    if (2 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    pTVar15 = CreateDummy(&local_160);
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar7 = *(code **)param_3;
    plVar29 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar29 = *(longlong **)&param_3->field_0x28;
    }
    uVar16 = (**(code **)(*plVar29 + 8))();
    (*pcVar7)(uVar16,pTVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar15->SharedReferenceCount).ReferenceController);
    TVar17 = UE::Tasks::MakeCompletedTask<void>();
    uVar16 = *(undefined8 *)TVar17;
    *(undefined8 *)TVar17 = 0;
    *(undefined8 *)__return_storage_ptr__ = uVar16;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x20 =
         &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    *(code **)&__return_storage_ptr__->field_0x28 =
         ``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::
         <lambda_1>::<lambda_invoker_cdecl>;
    if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
      *(code **)&__return_storage_ptr__->field_0x10 =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    }
  }
  else {
    pUVar18 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar13 = (int)pUVar18->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar18->_padding_)) {
      if (2 < (byte)LogMutable._0_1_) {
        local_1d0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_1d0,&local_1a0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      pTVar15 = CreateDummy(&local_110);
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
                    *)param_3,pTVar15);
      TVar17 = UE::Tasks::MakeCompletedTask<void>();
      uVar16 = *(undefined8 *)TVar17;
      *(undefined8 *)TVar17 = 0;
      *(undefined8 *)__return_storage_ptr__ = uVar16;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x20 =
           &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
      *(code **)&__return_storage_ptr__->field_0x28 =
           ``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::
           <lambda_1>::<lambda_invoker_cdecl>;
      if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
        *(code **)&__return_storage_ptr__->field_0x10 =
             UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
      }
      if (local_1c8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_1c8 + 6);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar13 == 1) && (local_1c8 != (undefined8 *)0x0)) {
          (**(code **)*local_1c8)(local_1c8,1);
        }
      }
      goto LAB_14ac5cfa7;
    }
    pFVar19 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
    if ((pFVar19->Mips).Array.ArrayNum <= (int)(uint)param_2) {
      pFVar19 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
      uVar32 = (pFVar19->Mips).Array.ArrayNum - 1;
    }
    if ((int)uVar32 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MipIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                          ,0x9f,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                  (*pcVar7)();
        return pTVar20;
      }
    }
    else if (0 < (int)uVar32) {
      lVar33 = (longlong)(int)uVar32 << 3;
      do {
        pFVar19 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
        if (((pFVar19->Mips).Array.ArrayNum <= (int)uVar32) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                    (*pcVar7)();
          return pTVar20;
        }
        bVar11 = FBulkData::CanLoadFromDisk
                           ((FBulkData *)
                            (*(longlong *)((pFVar19->Mips).Array.AllocatorInstance.Data + lVar33) +
                            0x20));
        if (bVar11) break;
        uVar32 = uVar32 - 1;
        lVar33 = lVar33 + -8;
      } while (0 < (int)uVar32);
    }
    pFVar19 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
    EVar5 = pFVar19->PixelFormat;
    local_246 = EVar5;
    EVar12 = GetMutablePixelFormat(EVar5);
    if (EVar12 != None) {
      iVar13 = UTexture2D::GetSizeX((UTexture2D *)param_1);
      local_240 = (FImage *)CONCAT44(local_240._4_4_,iVar13 >> ((byte)uVar32 & 0x1f));
      iVar13 = UTexture2D::GetSizeY((UTexture2D *)param_1);
      pTVar22 = ::operator_new(0x70);
      if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
        local_240 = (FImage *)&DAT_00000010;
        pTVar22 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar34 = local_240;
      }
      else {
        pTVar22->SharedReferenceCount = (atomic<int>)0x1;
        pTVar22->WeakReferenceCount = (atomic<int>)0x1;
        pTVar22->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
        ;
        UE::Mutable::Private::FImage::FImage
                  ((FImage *)(pTVar22 + 1),(uint)local_240,iVar13 >> ((byte)uVar32 & 0x1f),1,EVar12,
                   NotInitialized);
        local_240 = (FImage *)(pTVar22 + 1);
        if ((local_240 == (FImage *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                    (*pcVar7)();
          return pTVar20;
        }
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        pFVar34 = local_240;
        if ((local_240 == (FImage *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                    (*pcVar7)();
          return pTVar20;
        }
      }
      UE::Mutable::Private::FImageDataStorage::GetLOD(&pFVar34->DataStorage,&local_218,0);
      pFVar19 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
      uVar14 = 0;
      if ((int)uVar32 < (pFVar19->Mips).Array.ArrayNum) {
        uVar14 = ~uVar32 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                  (*pcVar7)();
        return pTVar20;
      }
      lVar33 = *(longlong *)
                ((pFVar19->Mips).Array.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
      this_01 = (FBulkData *)(lVar33 + 0x20);
      local_1d8 = this_01;
      lVar23 = FBulkData::GetBulkDataSize(this_01);
      iVar13 = (int)lVar23;
      if ((iVar13 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BulkDataSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
                              ,0xc2,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar20 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)
                  (*pcVar7)();
        return pTVar20;
      }
      if (iVar13 == local_218.ArrayNum) {
        bVar11 = FBulkData::IsBulkDataLoaded(this_01);
        if (bVar11) {
          if ((*(char *)(lVar33 + 0x33) == '\0') &&
             (pvVar21 = FBulkData::LockReadOnly(this_01), pvVar21 != (void *)0x0)) {
            memcpy((void *)CONCAT44(local_218.DataPtr._4_4_,local_218.DataPtr._0_4_),pvVar21,
                   (longlong)iVar13);
            FBulkData::Unlock(this_01);
            local_190.Object = local_240;
            if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar15 = &local_190;
            local_190.SharedReferenceCount.ReferenceController = pTVar22;
          }
          else {
            if (2 < (byte)LogMutable._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
            }
            pTVar15 = CreateDummy(&local_120);
          }
          UE::Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
          ::operator()(local_230,pTVar15);
          `FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()
                    (&local_247,__return_storage_ptr__);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar22);
        }
        else {
          this_00 = (FTaskBase *)
                    UE::Tasks::Private::FTaskEventBase::Create(L"Mutable_IORequestCompletionEvent");
          pTVar10 = local_230;
          local_e7 = local_246;
          local_e0 = local_240;
          local_f8 = local_218.DataPtr._0_4_;
          uStack_f4 = local_218.DataPtr._4_4_;
          iStack_f0 = local_218.ArrayNum;
          uStack_ec = local_218._12_4_;
          if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar11 = false;
          local_a0 = (code *)0x0;
          local_c8 = local_230->Callable;
          local_e8 = EVar12;
          local_d8 = pTVar22;
          local_d0 = iVar13;
          if (local_c8 !=
              (_func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *)0x0) {
            pTVar8 = *(TFunctionStorage<0> **)&(local_230->Storage).field_0x18;
            pTVar30 = &local_230->Storage;
            if (pTVar8 != (TFunctionStorage<0> *)0x0) {
              pTVar30 = pTVar8;
            }
            (*(code *)**(undefined8 **)pTVar30)(local_218.DataPtr._0_4_,&local_b8);
          }
          if (this_00 != (FTaskBase *)0x0) {
            LOCK();
            this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
            UNLOCK();
          }
          local_88[0] = (code *)0x0;
          local_98 = this_00;
          local_60 = FMemory::Malloc(0x80,0x10);
          *local_60 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`115'::<lambda_2>,0,1>
                               ::_vftable_;
          local_60[2] = (code *)CONCAT44(uStack_f4,local_f8);
          local_60[3] = (code *)CONCAT44(uStack_ec,iStack_f0);
          *(EImageFormat *)(local_60 + 4) = local_e8;
          *(EPixelFormat *)((longlong)local_60 + 0x21) = local_e7;
          local_60[5] = (code *)local_e0;
          local_60[6] = (code *)local_d8;
          local_d8 = (TReferenceControllerBase<1> *)0x0;
          local_e0 = (FImage *)0x0;
          *(int *)(local_60 + 7) = local_d0;
          local_60[8] = local_c8;
          local_60[0xd] = local_a0;
          local_a0 = (code *)0x0;
          *(undefined4 *)(local_60 + 10) = local_b8;
          *(undefined4 *)((longlong)local_60 + 0x54) = uStack_b4;
          *(undefined4 *)(local_60 + 0xb) = uStack_b0;
          *(undefined4 *)((longlong)local_60 + 0x5c) = uStack_ac;
          local_60[0xc] = local_a8;
          if (local_60[8] != (code *)0x0) {
            local_c8 = (_func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *
                       )0x0;
          }
          local_60[0xe] = (code *)0x0;
          local_60[0xe] = (code *)local_98;
          if (local_60 + 2 != (code **)0x0) {
            local_88[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,void,bool,IBulkDataIORequest_*>
                          ::Call;
          }
          local_98 = (FTaskBase *)0x0;
          if (local_c8 !=
              (_func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *)0x0) {
            (**(code **)(CONCAT44(uStack_b4,local_b8) + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8);
          if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
            local_224 = 0;
            TVar26 = (TEventRef<unsigned_int>)&local_224;
          }
          else {
            bVar11 = true;
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)param_1,&local_170,(UObject *)0x0);
            iVar6 = (pFVar24->Data).ArrayNum;
            iVar13 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar13 = 0;
            }
            pFVar25 = ::FName::FName(&local_178,iVar13,
                                     (wchar_t *)(pFVar24->Data).AllocatorInstance.Data,FNAME_Add);
            local_1e0 = *pFVar25;
            TVar26 = FStringTrace::GetNameRef(&local_180);
          }
          uVar16 = *(undefined8 *)TVar26;
          if ((bVar11) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          bVar11 = false;
          if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
            UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                      ((TLogScope<0> *)&local_58);
            bVar11 = true;
            *local_58 = (int)uVar16;
            *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
          }
          pIVar27 = FBulkData::CreateStreamingRequest
                              (local_1d8,AIOP_High,
                               (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_88,
                               (uchar *)CONCAT44(local_218.DataPtr._4_4_,local_218.DataPtr._0_4_));
          if (pIVar27 == (IBulkDataIORequest *)0x0) {
            if (2 < (byte)LogMutable._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
            }
            if ((this_00 != (FTaskBase *)0x0) &&
               ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
              LOCK();
              aVar3 = this_00->TaskTriggered;
              this_00->TaskTriggered = (atomic<bool>)0x1;
              UNLOCK();
              if (aVar3 == (atomic<bool>)0x0) {
                LOCK();
                this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                UNLOCK();
                UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
              }
            }
            pTVar15 = CreateDummy(&local_130);
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
            ::operator()(pTVar10,pTVar15);
            `FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()
                      (&local_247,__return_storage_ptr__);
          }
          else {
            if (this_00 != (FTaskBase *)0x0) {
              LOCK();
              this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
              UNLOCK();
            }
            *(FTaskBase **)__return_storage_ptr__ = this_00;
            *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
            *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
            *(undefined ***)&__return_storage_ptr__->field_0x20 =
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`124'::<lambda_3>,0,0>
                  ::_vftable_;
            *(IBulkDataIORequest **)&__return_storage_ptr__->field_0x28 = pIVar27;
            if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
              *(code **)&__return_storage_ptr__->field_0x10 =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,void>
                   ::Call;
            }
          }
          if (bVar11) {
            pFVar28 = UE::Trace::Private::Writer_GetBuffer();
            if ((int)pFVar28 - *(int *)&pFVar28->Cursor < 1) {
              pFVar28 = UE::Trace::Private::Writer_NextBuffer();
            }
            *pFVar28->Cursor = '\n';
            pFVar28->Cursor = pFVar28->Cursor + 1;
            pFVar28->Committed = pFVar28->Cursor;
          }
          if (local_88[0] != (code *)0x0) {
            ppcVar31 = local_88 + 2;
            if (local_60 != (code **)0x0) {
              ppcVar31 = local_60;
            }
            (**(code **)(*ppcVar31 + 0x10))();
          }
          if (this_00 != (FTaskBase *)0x0) {
            LOCK();
            paVar2 = &this_00->RefCount;
            aVar4 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar4 == (atomic<unsigned_int>)0x1) {
              (**(code **)this_00->_padding_)(this_00,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar22);
        }
      }
      else {
        if (2 < (byte)LogMutable._0_1_) {
          local_1f0 = (FName)param_1->_padding_;
          ::FName::ToString(&local_1f0,&local_1b0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
        pTVar15 = CreateDummy(&local_140);
        pTVar10 = local_230;
        UE::Core::Private::Function::CheckCallable(local_230->Callable);
        pTVar8 = *(TFunctionStorage<0> **)&(pTVar10->Storage).field_0x18;
        p_Var9 = pTVar10->Callable;
        pTVar30 = &pTVar10->Storage;
        if (pTVar8 != (TFunctionStorage<0> *)0x0) {
          pTVar30 = pTVar8;
        }
        pvVar21 = (void *)(**(code **)(*(longlong *)pTVar30 + 8))();
        (*p_Var9)(pvVar21,pTVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar15->SharedReferenceCount).ReferenceController);
        TVar17 = UE::Tasks::MakeCompletedTask<void>();
        uVar16 = *(undefined8 *)TVar17;
        *(undefined8 *)TVar17 = 0;
        *(undefined8 *)__return_storage_ptr__ = uVar16;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
        *(undefined ***)&__return_storage_ptr__->field_0x20 =
             &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
        *(code **)&__return_storage_ptr__->field_0x28 =
             ``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>;
        if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
          *(code **)&__return_storage_ptr__->field_0x10 =
               UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
        }
        if (local_1e8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1e8 + 6);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar13 == 1) && (local_1e8 != (undefined8 *)0x0)) {
            (**(code **)*local_1e8)(local_1e8,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
      }
      goto LAB_14ac5cfa7;
    }
    if (2 < (byte)LogMutable._0_1_) {
      GetPixelFormatString(EVar5);
      local_200 = (FName)param_1->_padding_;
      ::FName::ToString(&local_200,&local_1c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
    }
    pTVar15 = CreateDummy(&local_150);
    pTVar10 = local_230;
    UE::Core::Private::Function::CheckCallable(local_230->Callable);
    pTVar8 = *(TFunctionStorage<0> **)&(pTVar10->Storage).field_0x18;
    p_Var9 = pTVar10->Callable;
    pTVar30 = &pTVar10->Storage;
    if (pTVar8 != (TFunctionStorage<0> *)0x0) {
      pTVar30 = pTVar8;
    }
    pvVar21 = (void *)(**(code **)(*(longlong *)pTVar30 + 8))();
    (*p_Var9)(pvVar21,pTVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar15->SharedReferenceCount).ReferenceController);
    TVar17 = UE::Tasks::MakeCompletedTask<void>();
    uVar16 = *(undefined8 *)TVar17;
    *(undefined8 *)TVar17 = 0;
    *(undefined8 *)__return_storage_ptr__ = uVar16;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x20 =
         &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    *(code **)&__return_storage_ptr__->field_0x28 =
         ``FUnrealMutableResourceProvider::GetImageAsync'::__l2::<lambda_1>::operator()'::__l2::
         <lambda_1>::<lambda_invoker_cdecl>;
    local_208 = local_1f8;
    if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
      *(code **)&__return_storage_ptr__->field_0x10 =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    }
  }
  if (local_208 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_208 + 6);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar13 == 1) && (local_208 != (undefined8 *)0x0)) {
      (**(code **)*local_208)(local_208,1);
    }
  }
LAB_14ac5cfa7:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetImageDesc @ 14ac5cff0

/* WARNING: Enum "Type": Some values do not have unique names */

FExtendedImageDesc * __thiscall
FUnrealMutableResourceProvider::GetImageDesc
          (FUnrealMutableResourceProvider *this,FExtendedImageDesc *__return_storage_ptr__,
          UTexture *param_1)

{
  EPixelFormat EVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  FTexturePlatformData *pFVar8;
  FExtendedImageDesc *pFVar9;
  uint uVar10;
  bool bVar12;
  EImageFormat local_res1c;
  uchar uStackX_1d;
  ulonglong uVar11;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId401,"Mutable_FUnrealMutableImageProvider::GetImageDesc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
               ,0x191);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId401);
  }
  if (param_1 != (UTexture *)0x0) {
    pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar7->_padding_)) {
      pFVar8 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
      uVar11 = 0;
      iVar5 = (pFVar8->Mips).Array.ArrayNum;
      if (0 < iVar5) {
        do {
          pFVar8 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
          if (((pFVar8->Mips).Array.ArrayNum <= (int)uVar11) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FExtendedImageDesc *)(*pcVar2)();
            return pFVar9;
          }
          bVar4 = FBulkData::DoesExist
                            ((FBulkData *)
                             (*(longlong *)
                               ((pFVar8->Mips).Array.AllocatorInstance.Data + uVar11 * 8) + 0x20));
        } while ((!bVar4) &&
                (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, (int)uVar10 < iVar5));
      }
      pFVar8 = UTexture2D::GetPlatformData((UTexture2D *)param_1);
      EVar1 = pFVar8->PixelFormat;
      local_res1c = GetMutablePixelFormat(EVar1);
      if (local_res1c == None) {
        if (2 < (byte)LogMutable._0_1_) {
          GetPixelFormatString(EVar1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        }
        *(TIntVector2<unsigned_short>_u_0 *)__return_storage_ptr__ =
             DUMMY_IMAGE_DESC.m_size.field0_0x0;
        _local_res1c = DUMMY_IMAGE_DESC._4_2_;
        __return_storage_ptr__->FirstLODAvailable = '\0';
      }
      else {
        iVar5 = UTexture2D::GetSizeY((UTexture2D *)param_1);
        iVar6 = UTexture2D::GetSizeX((UTexture2D *)param_1);
        *(uint *)__return_storage_ptr__ = CONCAT22((short)iVar5,(short)iVar6);
        uStackX_1d = '\x01';
        __return_storage_ptr__->FirstLODAvailable = (uchar)uVar11;
      }
      __return_storage_ptr__->field_0x4 = (EImageFormat)_local_res1c;
      __return_storage_ptr__->field_0x5 = SUB21(_local_res1c,1);
      (__return_storage_ptr__->ConstantImagesNeededToGenerate).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = 0;
      (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax = 0;
      if (!bVar12) {
        return __return_storage_ptr__;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return __return_storage_ptr__;
    }
  }
  *(TIntVector2<unsigned_short>_u_0 *)__return_storage_ptr__ = DUMMY_IMAGE_DESC.m_size.field0_0x0;
  uVar3 = DUMMY_IMAGE_DESC.m_lods;
  __return_storage_ptr__->field_0x4 = DUMMY_IMAGE_DESC.m_format;
  __return_storage_ptr__->field_0x5 = uVar3;
  __return_storage_ptr__->FirstLODAvailable = '\0';
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = 0;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax = 0;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  if (!bVar12) {
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetMeshAsync @ 14ac5d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> * __thiscall
FUnrealMutableResourceProvider::GetMeshAsync
          (FUnrealMutableResourceProvider *this,
          TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
          *__return_storage_ptr__,USkeletalMesh *param_1,int param_2,int param_3,
          TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FMesh,1>)> *param_4)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  bool bVar6;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar7;
  TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *pTVar8;
  undefined8 uVar9;
  TTask<void> TVar10;
  FTaskBase *this_00;
  undefined8 *puVar11;
  longlong *plVar12;
  FTaskBase *this_01;
  FPipe *pFVar13;
  bool bVar14;
  undefined1 auStackY_f8 [32];
  undefined1 local_c0 [48];
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  FPipe *local_58;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar14 = -1 < CpuChannel->Enabled;
  local_c0._16_8_ = this;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId463,"Mutable_FUnrealMutableImageProvider::GetMeshAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
               ,0x1cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId463);
  }
  pTVar7 = ::operator_new(0x1a8);
  if (pTVar7 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar7 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    plVar12 = (longlong *)&DAT_00000008;
    pFVar13 = (FPipe *)&DAT_00000010;
  }
  else {
    pTVar7 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar7);
    pFVar13 = (FPipe *)&pTVar7->ObjectStorage;
    if ((pFVar13 == (FPipe *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)(*pcVar5)()
      ;
      return pTVar8;
    }
    plVar12 = &pTVar7->_padding_;
    if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  if (param_1 == (USkeletalMesh *)0x0) {
    if (2 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    local_c0._24_8_ = pFVar13;
    local_c0._32_8_ = pTVar7;
    UE::Core::Private::Function::CheckCallable(*(void **)param_4);
    pcVar5 = *(code **)param_4;
    plVar12 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_4->field_0x28;
    }
    uVar9 = (**(code **)(*plVar12 + 8))();
    (*pcVar5)(uVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c0._32_8_);
    TVar10 = UE::Tasks::MakeCompletedTask<void>();
    uVar9 = *(undefined8 *)TVar10;
    *(undefined8 *)TVar10 = 0;
    *(undefined8 *)__return_storage_ptr__ = uVar9;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x20 =
         &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    *(code **)&__return_storage_ptr__->field_0x28 =
         ``FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_1>::operator()'::__l2::
         <lambda_1>::<lambda_invoker_cdecl>;
    if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
      *(code **)&__return_storage_ptr__->field_0x10 =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    }
    if ((undefined8 *)local_c0._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c0._8_8_ + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_c0._8_8_)(local_c0._8_8_,1);
      }
    }
  }
  else {
    if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    local_c0._40_8_ = pFVar13;
    local_90 = pTVar7;
    UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData
              ((USkeletalMesh *)local_c0,(int)param_1,param_2,
               (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(ulonglong)(uint)param_3,
               (TSharedRef<FBoneNames,1> *)(local_c0 + 0x28));
    local_88 = *(longlong *)param_4;
    this_01 = (FTaskBase *)0x0;
    local_60 = (longlong *)0x0;
    if (local_88 != 0) {
      puVar11 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,&local_78);
    }
    if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    local_58 = pFVar13;
    local_50 = pTVar7;
    this_00 = FMemory::Malloc(0x140,0x40);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FUnrealMutableResourceProvider::GetMeshAsync'::`2'::<lambda_2>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,L"MutableMeshParameterLoadPostGame",Default,None,None);
      this_00[1]._padding_ = local_88;
      *(longlong **)&this_00[1].RefCount = local_60;
      local_60 = (longlong *)0x0;
      this_00[1]._padding_ = local_78;
      this_00[1]._padding_ = lStack_70;
      this_00[1]._padding_ = local_68;
      if (this_00[1]._padding_ != 0) {
        local_88 = 0;
      }
      this_00[1].Pipe = local_58;
      *(TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> **)&this_00[1].StateChangeEvent
           = local_50;
      local_50 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
      local_58 = (FPipe *)0x0;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FUnrealMutableResourceProvider::GetMeshAsync'::`2'::<lambda_2>_>::
            _vftable_;
      this_01 = this_00;
    }
    UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
              (this_01,(FTaskHandle *)local_c0);
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
    *(FTaskBase **)__return_storage_ptr__ = this_01;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x20 =
         &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    *(code **)&__return_storage_ptr__->field_0x28 =
         `FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
    if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
      *(code **)&__return_storage_ptr__->field_0x10 =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_50);
    if (local_88 != 0) {
      plVar12 = &local_78;
      if (local_60 != (longlong *)0x0) {
        plVar12 = local_60;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((FTaskBase *)local_c0._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned_int> *)(local_c0._0_8_ + 0x30);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_c0._0_8_)(local_c0._0_8_,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetReferencedImageAsync @ 14ac5d730

/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> * __thiscall
FUnrealMutableResourceProvider::GetReferencedImageAsync
          (FUnrealMutableResourceProvider *this,
          TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
          *__return_storage_ptr__,int param_1,uchar param_2,
          TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)> *param_3)

{
  TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)> *pTVar1;
  int iVar2;
  code *pcVar3;
  TSharedPtr<UE::Mutable::Private::FImage,1> *pTVar4;
  undefined8 uVar5;
  TTask<void> TVar6;
  longlong *plVar7;
  bool bVar8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId332,
               "Mutable_FUnrealMutableImageProvider::GetReferencedImageAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\UnrealMutableImageProvider.cpp"
               ,0x14c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId332);
  }
  if (2 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  pTVar4 = CreateDummy(&local_18);
  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
  pcVar3 = *(code **)param_3;
  plVar7 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_3->field_0x28;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar4->SharedReferenceCount).ReferenceController);
  TVar6 = UE::Tasks::MakeCompletedTask<void>();
  uVar5 = *(undefined8 *)TVar6;
  *(undefined8 *)TVar6 = 0;
  *(undefined8 *)__return_storage_ptr__ = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x20 =
       &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x28 =
       ``FUnrealMutableResourceProvider::GetReferencedImageAsync'::__l2::<lambda_1>::operator()'::
       __l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x28 != (undefined1 *)0x0) {
    *(code **)&__return_storage_ptr__->field_0x10 =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  if (param_3 != (TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)> *)0x0) {
    LOCK();
    pTVar1 = param_3 + 1;
    iVar2 = *(int *)pTVar1;
    *(int *)pTVar1 = *(int *)pTVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)param_3)(param_3,1);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

