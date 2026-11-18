// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 23

// ExecuteTask @ 14abd7100

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`LoadAdditionalAssetsAndData'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a580

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_&>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
::ExecuteTask(void *this)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)this + 0xd8) = **(undefined8 **)((longlong)this + 0xe8);
  lVar1 = (*(undefined8 **)((longlong)this + 0xe8))[1];
  *(longlong *)((longlong)this + 0xe0) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// ExecuteTask @ 14ac1a5b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``impl::Impl::Task_Mutable_GetMeshes'::__l51::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  ``impl::Impl::Task_Mutable_GetMeshes'::__l51::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  puVar3 = *(undefined8 **)((longlong)this + 0xf0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a610

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``impl::Task_Mutable_GetMeshes_GetImages'::__l32::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  ``impl::Task_Mutable_GetMeshes_GetImages'::__l32::<lambda_2>::operator()'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  puVar3 = *(undefined8 **)((longlong)this + 0xf0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a670

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetImages_GetImageDesc'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)((longlong)this + 0x108);
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  impl::Task_Mutable_GetImages_GetImage
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedPtr<TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>,1>
              *)((longlong)this + 0xf0),*(int *)((longlong)this + 0x100),
             (TTask<UE::Mutable::Private::FExtendedImageDesc>)local_res8);
  puVar3 = *(undefined8 **)((longlong)this + 0x108);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a700

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetMeshes_GetImage_Loop'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)((longlong)this + 0x108);
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  impl::Task_Mutable_GetMeshes_GetImage_Post
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedRef<TArray<impl::FGetImageData,TSizedDefaultAllocator<32>_>,1> *)
             ((longlong)this + 0xf0),*(int *)((longlong)this + 0x100),
             (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)local_res8);
  puVar3 = *(undefined8 **)((longlong)this + 0x108);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a790

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetMeshes_GetMesh_Loop'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)((longlong)this + 0x108);
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  impl::Task_MutableGetMeshes_GetMesh_Post
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedRef<TArray<impl::FGetMeshData,TSizedDefaultAllocator<32>_>,1> *)
             ((longlong)this + 0xf0),*(int *)((longlong)this + 0x100),
             (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)local_res8);
  puVar3 = *(undefined8 **)((longlong)this + 0x108);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a820

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_UpdateMesh_Loop'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  `impl::Task_Mutable_UpdateMesh_Loop'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  if (*(FRenderAssetUpdate **)((longlong)this + 0xf8) != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(*(FRenderAssetUpdate **)((longlong)this + 0xf8));
  }
  puVar3 = *(undefined8 **)((longlong)this + 0xf0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a890

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetImages_GetImage'::__l38::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)((longlong)this + 0x108);
  iVar2 = *(int *)((longlong)this + 0x11c);
  iVar3 = *(int *)((longlong)this + 0x118);
  iVar4 = *(int *)((longlong)this + 0x114);
  iVar5 = *(int *)((longlong)this + 0x110);
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  impl::Task_Mutable_GetImages_GetImage_Post
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedPtr<TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>,1>
              *)((longlong)this + 0xf0),*(int *)((longlong)this + 0x100),
             (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)local_res8,iVar5,iVar4,iVar3
             ,iVar2);
  puVar6 = *(undefined8 **)((longlong)this + 0x108);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a940

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Impl::Task_Mutable_GetMeshes'::__l51::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `impl::Impl::Task_Mutable_GetMeshes'::__l51::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 14ac1a970

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1a9a0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  FRenderAssetUpdate *this_00;
  
  `FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_2>::operator()
            ((undefined8 *)((longlong)this + 0xd8));
  this_00 = *(FRenderAssetUpdate **)((longlong)this + 0xd8);
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(this_00);
    return;
  }
  return;
}

// ExecuteTask @ 14ac1a9e0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Impl::Task_Mutable_GetMeshes'::__l2::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  impl::Task_Mutable_GetMeshes_GetMesh_Loop
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedRef<TArray<impl::FGetMeshData,TSizedDefaultAllocator<32>_>,1> *)
             ((longlong)this + 0xf0),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1aa30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>,void,void>::ExecuteTask
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  `Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0xd8));
  puVar3 = *(undefined8 **)((longlong)this + 0x108);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac1aa90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetMeshes_GetImages'::__l32::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  `impl::Task_Mutable_GetMeshes_GetImages'::__l32::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 14ac1aac0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  FRenderAssetUpdate *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = *(FRenderAssetUpdate **)((longlong)this + 0xd8);
  if ((this_00->bIsCancelled == false) || (!bEnableGCHangFix)) {
    if ((this_00->TaskSynchronization).Counter < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskSynchronization.GetValue() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectMeshUpdate.cpp"
                         ,0x4a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (this_00->TaskSynchronization).Counter = (this_00->TaskSynchronization).Counter + -1;
    UNLOCK();
    FRenderAssetUpdate::Tick(this_00,TT_None);
  }
  if (*(FRenderAssetUpdate **)((longlong)this + 0xd8) != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(*(FRenderAssetUpdate **)((longlong)this + 0xd8));
  }
  return;
}

// ExecuteTask @ 14ac1ab50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`impl::Task_Mutable_GetMeshes_GetImages'::__l2::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  impl::Task_Mutable_GetMeshes_GetImage_Loop
            ((TSharedRef<FUpdateContextPrivate,1> *)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe8),
             (TSharedRef<TArray<impl::FGetImageData,TSizedDefaultAllocator<32>_>,1> *)
             ((longlong)this + 0xf0),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac5bd30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>'::__l2::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh,1>,void>
::ExecuteTask(void *this)

{
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  *(undefined8 *)((longlong)this + 0xe0) = 0;
  return;
}

// ExecuteTask @ 14ac5bd50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  if (*(UObject **)((longlong)this + 0xe8) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 0xe8));
    *(undefined8 *)((longlong)this + 0xe8) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac5bdb0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FMutableStreamRequest::Stream'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac5be00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x110));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  if (*(UObject **)((longlong)this + 0xe8) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)this + 0xe8));
    *(undefined8 *)((longlong)this + 0xe8) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14ac5be60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FUnrealMutableResourceProvider::GetMeshAsync'::__l2::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = *(undefined8 *)((longlong)this + 0x110);
  local_10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x118);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xe0));
  pcVar1 = *(code **)((longlong)this + 0xe0);
  plVar3 = (longlong *)((longlong)this + 0xf0);
  if (*(longlong **)((longlong)this + 0x108) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x108);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x118));
  if (*(longlong *)((longlong)this + 0xe0) != 0) {
    plVar3 = (longlong *)((longlong)this + 0xf0);
    if (*(longlong **)((longlong)this + 0x108) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x108);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// ExecuteTask @ 14ac5bf20

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FMutableStreamRequest::Stream'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)((longlong)this + 0xd8);
  `FMutableStreamRequest::Stream'::__l2::<lambda_2>::operator()(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
            ((TSharedPtr<IAsyncReadFileHandle,1> *)*this_00,*(int *)((longlong)this + 0xe0));
  if ((void *)*this_00 != (void *)0x0) {
    FMemory::Free((void *)*this_00);
    return;
  }
  return;
}

