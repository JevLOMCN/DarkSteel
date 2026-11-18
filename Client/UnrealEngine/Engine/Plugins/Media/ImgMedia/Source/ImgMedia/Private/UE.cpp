// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 12

// Construct<FMediaSourceColorSettings> @ 14ea2fe90

void __cdecl UE::CoreUObject::Private::Construct<FMediaSourceColorSettings>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(undefined2 *)param_1 = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x38))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// ConstructForTests<FMediaSourceColorSettings> @ 14ea2fed0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaSourceColorSettings>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(undefined2 *)param_1 = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x38))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// Destruct<FMediaSourceColorSettings> @ 14ea2ff10

void __cdecl UE::CoreUObject::Private::Destruct<FMediaSourceColorSettings>(void *param_1)

{
  return;
}

// Copy<FMediaSourceColorSettings> @ 14ea2ff20

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaSourceColorSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImgMediaSourceCustomizationSequenceProxy> @ 14ea2ff70

void __cdecl
UE::CoreUObject::Private::Construct<FImgMediaSourceCustomizationSequenceProxy>(void *param_1)

{
  return;
}

// ConstructForTests<FImgMediaSourceCustomizationSequenceProxy> @ 14ea2ff80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FImgMediaSourceCustomizationSequenceProxy>
          (void *param_1)

{
  return;
}

// DereferenceIfNecessary<FImgMediaMipMapInfo,FImgMediaMipMapInfo_*_&> @ 14ea34210

FImgMediaMipMapInfo * __cdecl
UE::Core::Private::DereferenceIfNecessary<FImgMediaMipMapInfo,FImgMediaMipMapInfo_*_&>
          (FImgMediaMipMapInfo **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FImgMediaModule,FImgMediaModule_*_&> @ 14ea34230

FImgMediaModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FImgMediaModule,FImgMediaModule_*_&>
          (FImgMediaModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FImgMediaSceneViewExtension,FImgMediaSceneViewExtension_*_&> @ 14ea34250

FImgMediaSceneViewExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FImgMediaSceneViewExtension,FImgMediaSceneViewExtension_*_&>
          (FImgMediaSceneViewExtension **param_1)

{
  return *param_1;
}

// FindFullBasePath @ 14ea4a0e0

FString * __cdecl
UE::ImgMediaSource::Private::FindFullBasePath(FString *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  ForAnyElementType _Src;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  FString local_28;
  
  pTVar3 = GetPossibleBasePaths();
  iVar5 = pTVar3->ArrayNum;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  pFVar6 = pFVar4 + (longlong)iVar5 * 0x10;
  while( true ) {
    if (pTVar3->ArrayNum != iVar5) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar4 == pFVar6) break;
    FPaths::ConvertRelativePathToFull(&local_28,(FString *)pFVar4);
    bVar2 = FPaths::IsUnderDirectory(param_1,&local_28);
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    if (bVar2) {
      piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayNum = iVar5;
      if (iVar5 == 0) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)__return_storage_ptr__,iVar5,piVar1);
        memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar5 * 2);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 0x10;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFrameStartTime @ 14ea4c2a0

FTimespan __cdecl UE::ImgMediaLoaderUtils::GetFrameStartTime(uint param_1,FFrameRate *param_2)

{
  longlong lVar1;
  undefined4 in_register_0000000c;
  longlong *plVar2;
  longlong lVar3;
  int *in_R8;
  longlong lVar4;
  
  plVar2 = (longlong *)CONCAT44(in_register_0000000c,param_1);
  lVar4 = (longlong)*in_R8;
  lVar3 = ((ulonglong)param_2 & 0xffffffff) * (longlong)in_R8[1] * 10000000;
  lVar1 = lVar3 / lVar4;
  if ((int)((lVar1 * lVar4) / ((longlong)in_R8[1] * 10000000)) == (int)param_2) {
    *plVar2 = lVar1;
    return (FTimespan)(long64)plVar2;
  }
  *plVar2 = (lVar4 + -1 + lVar3) / lVar4;
  return (FTimespan)(long64)plVar2;
}

// GetPossibleBasePaths @ 14ea4df90

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::ImgMediaSource::Private::GetPossibleBasePaths(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FPaths::ProjectContentDir(&local_28);
      FPaths::ProjectDir(&local_18);
      lVar2 = 2;
      PossibleBasePaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      PossibleBasePaths.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,2,0,&PossibleBasePaths.AllocatorInstance,2,&PossibleBasePaths.ArrayMax);
      ConstructItems<FString,FString,int>(PossibleBasePaths.AllocatorInstance.Data,&local_28,2);
      puVar3 = &stack0xfffffffffffffff8;
      do {
        puVar1 = (undefined8 *)(puVar3 + -0x10);
        puVar3 = puVar3 + -0x10;
        lVar2 = lVar2 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar2 != 0);
      atexit(`UE::ImgMediaSource::Private::GetPossibleBasePaths'::__l2::
             _dynamic_atexit_destructor_for__PossibleBasePaths__);
      _Init_thread_footer(&::_TSS0);
      return &PossibleBasePaths;
    }
  }
  return &PossibleBasePaths;
}

