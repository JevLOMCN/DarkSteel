// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 16

// Construct<FMediaPlateResource> @ 14ea86cc0

void __cdecl UE::CoreUObject::Private::Construct<FMediaPlateResource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FMediaPlateResource::FMediaPlateResource(param_1);
  return;
}

// ConstructForTests<FMediaPlateResource> @ 14ea86d30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaPlateResource>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x58))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x58),0);
  return;
}

// Destruct<FMediaPlateResource> @ 14ea86d40

void __cdecl UE::CoreUObject::Private::Destruct<FMediaPlateResource>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMediaPlateResource> @ 14ea86d90

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaPlateResource>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x18),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x18));
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x40),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x40));
      param_2 = (void *)((longlong)param_2 + 0x68);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x68);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaTextureResourceSettings> @ 14ea873f0

void __cdecl UE::CoreUObject::Private::Construct<FMediaTextureResourceSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FMediaTextureResourceSettings> @ 14ea87400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMediaTextureResourceSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FMediaTextureResourceSettings> @ 14ea87410

void __cdecl UE::CoreUObject::Private::Destruct<FMediaTextureResourceSettings>(void *param_1)

{
  return;
}

// Copy<FMediaTextureResourceSettings> @ 14ea87420

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaTextureResourceSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FMediaPlateModule,FMediaPlateModule_*_&> @ 14ea88250

FMediaPlateModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMediaPlateModule,FMediaPlateModule_*_&>
          (FMediaPlateModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMediaPlateOpenLatentAction,FMediaPlateOpenLatentAction_*_&> @ 14ea88270

FMediaPlateOpenLatentAction * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMediaPlateOpenLatentAction,FMediaPlateOpenLatentAction_*_&>
          (FMediaPlateOpenLatentAction **param_1)

{
  return *param_1;
}

// ApplyMediaTextureMipGenProperties @ 14ea8a360

void __cdecl
UE::MediaPlateComponent::ApplyMediaTextureMipGenProperties
          (FMediaTextureResourceSettings param_1,
          TArray<TObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar4;
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14ea8a3c5;
    }
    else if (pUVar3 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar3);
LAB_14ea8a3c5:
      if ((bool)pUVar3[8].field_0x24 != param_1.bEnableGenMips) {
        pUVar3[8].field_0x24 = param_1.bEnableGenMips;
        (**(code **)(*(longlong *)pUVar3 + 0x328))(pUVar3);
      }
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// EnsureMediaTexturePropertiesInSync @ 14ea8ad30

void __cdecl
UE::MediaPlateComponent::EnsureMediaTexturePropertiesInSync
          (FMediaTextureResourceSettings param_1,
          TArray<TObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar4;
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14ea8ad95;
    }
    else if (pUVar3 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar3);
LAB_14ea8ad95:
      if ((bool)pUVar3[8].field_0x24 != param_1.bEnableGenMips) {
        `UE::MediaPlateComponent::EnsureMediaTexturePropertiesInSync'::__l9::<lambda_1>::operator()
                  (local_res10);
      }
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// GetMediaSource @ 14ea8b1b0

UMediaSource * __cdecl UE::MediaPlateComponent::GetMediaSource(UMediaPlaylist *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMediaSource *pUVar4;
  
  if (param_1 == (UMediaPlaylist *)0x0) {
    return (UMediaSource *)0x0;
  }
  if ((-1 < param_2) && (param_2 < (param_1->Items).ArrayNum)) {
    uVar3 = 0;
    if (param_2 < (param_1->Items).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaSource *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMediaSource **)((param_1->Items).AllocatorInstance.Data + (longlong)param_2 * 8);
  }
  return (UMediaSource *)0x0;
}

// HasDeprecatedOverlayCompositeMaterial @ 14ea8b880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __cdecl UE::MediaPlate::Private::HasDeprecatedOverlayCompositeMaterial(AMediaPlate *param_1)

{
  UStaticMeshComponent *pUVar1;
  int iVar2;
  UMaterialInterface *pUVar3;
  UObjectBaseUtility *this;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pUVar1 = (param_1->StaticMeshComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UStaticMeshComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar3 = UMeshComponent::GetOverlayMaterial
                       ((UMeshComponent *)(param_1->StaticMeshComponent).field0_0x0.DebugPtr);
    if (pUVar3 != (UMaterialInterface *)0x0) {
      this = (UObjectBaseUtility *)(**(code **)(pUVar3->_padding_ + 0x2d8))(pUVar3);
      if (this != (UObjectBaseUtility *)0x0) {
        pFVar4 = UObjectBaseUtility::GetPathName(this,&local_18,(UObject *)0x0);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp
                          (pwVar5,L"/MediaPlate/M_MediaPlate_OverlayComp.M_MediaPlate_OverlayComp");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return iVar2 == 0;
      }
    }
  }
  return false;
}

// ResetMediaTextureForPlayer @ 14ea8ef90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
UE::MediaPlateComponent::ResetMediaTextureForPlayer
          (UMediaPlayer *param_1,
          TArray<TObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMediaTexture *this;
  UMediaPlayer *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) {
      return;
    }
    this = *(UMediaTexture **)pFVar4;
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (this != (UMediaTexture *)0x0) goto LAB_14ea8eff4;
    }
    else if (this != (UMediaTexture *)0x0) {
      GC::MarkAsReachable((UObject *)this);
LAB_14ea8eff4:
      pUVar3 = UMediaTexture::GetMediaPlayer(this);
      if (pUVar3 == param_1) {
        (**(code **)(this->_padding_ + 0x328))(this);
      }
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// operator() @ 15059c750

bool __thiscall
`UE::MediaPlateComponent::EnsureMediaTexturePropertiesInSync'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4841117192785231938>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4841117192785231938>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

