// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 31

// StaticClass @ 14c9ff850

UClass * __cdecl UGeometryCacheTrackStreamable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrackStreamable",
               &Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton,
               StaticRegisterNativesUGeometryCacheTrackStreamable,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheTrackStreamable>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrackStreamable>,local_res8,
               UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton;
}

// UGeometryCacheTrackStreamable @ 14ca07de0

UGeometryCacheTrackStreamable * __thiscall
UGeometryCacheTrackStreamable::UGeometryCacheTrackStreamable
          (UGeometryCacheTrackStreamable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheTrackStreamable__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Codec).field0_0x0.DebugPtr = (UGeometryCacheCodecBase *)0x0;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  (this->VisibilitySamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilitySamples).ArrayNum = 0;
  (this->VisibilitySamples).ArrayMax = 0;
  FRenderResource::FRenderResource((FRenderResource *)&this->RenderResource);
  (this->RenderResource).Codec = (FGeometryCacheCodecRenderStateBase *)0x0;
  (this->RenderResource)._padding_ = (longlong)&___7FGeometryCacheTrackStreamableRenderResource__6B_
  ;
  (this->RenderResource).Track = (UGeometryCacheTrackStreamable *)0x0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// UGeometryCacheTrackStreamable @ 14ca07e90

UGeometryCacheTrackStreamable * __thiscall
UGeometryCacheTrackStreamable::UGeometryCacheTrackStreamable
          (UGeometryCacheTrackStreamable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheTrackStreamable__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Codec).field0_0x0.DebugPtr = (UGeometryCacheCodecBase *)0x0;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  (this->VisibilitySamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilitySamples).ArrayNum = 0;
  (this->VisibilitySamples).ArrayMax = 0;
  FRenderResource::FRenderResource((FRenderResource *)&this->RenderResource);
  (this->RenderResource).Codec = (FGeometryCacheCodecRenderStateBase *)0x0;
  (this->RenderResource)._padding_ = (longlong)&___7FGeometryCacheTrackStreamableRenderResource__6B_
  ;
  (this->RenderResource).Track = (UGeometryCacheTrackStreamable *)0x0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  (this->Codec).field0_0x0.DebugPtr = (UGeometryCacheCodecBase *)0x0;
  this->Hash = 0;
  return this;
}

// ~UGeometryCacheTrackStreamable @ 14ca097f0

void __thiscall
UGeometryCacheTrackStreamable::~UGeometryCacheTrackStreamable(UGeometryCacheTrackStreamable *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGeometryCacheTrackStreamable__6B_;
  DestructItems<FStreamedGeometryCacheChunk,int>
            ((FStreamedGeometryCacheChunk *)(this->Chunks).AllocatorInstance.Data,
             (this->Chunks).ArrayNum);
  piVar1 = &(this->Chunks).ArrayMax;
  (this->Chunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Chunks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FRenderResource::~FRenderResource((FRenderResource *)&this->RenderResource);
  pFVar2 = (this->VisibilitySamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Samples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FStreamedGeometryCacheChunk,int>
            ((FStreamedGeometryCacheChunk *)(this->Chunks).AllocatorInstance.Data,
             (this->Chunks).ArrayNum);
  pFVar2 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  return;
}

// BeginDestroy @ 14ca0e470

void __thiscall UGeometryCacheTrackStreamable::BeginDestroy(UGeometryCacheTrackStreamable *this)

{
  int *piVar1;
  
  UObject::BeginDestroy((UObject *)this);
  BeginReleaseResource((FRenderResource *)&this->RenderResource,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  (this->Codec).field0_0x0.DebugPtr = (UGeometryCacheCodecBase *)0x0;
  DestructItems<FStreamedGeometryCacheChunk,int>
            ((FStreamedGeometryCacheChunk *)(this->Chunks).AllocatorInstance.Data,
             (this->Chunks).ArrayNum);
  piVar1 = &(this->Chunks).ArrayMax;
  (this->Chunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Chunks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindSampleIndexFromTime @ 14ca15da0

uint __thiscall
UGeometryCacheTrackStreamable::FindSampleIndexFromTime
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar10;
  
  iVar1 = (this->Samples).ArrayNum;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (param_2) {
      auVar9 = roundps(in_XMM2,ZEXT416((uint)(param_1 / *(float *)&this->_padding_)),1);
      param_1 = param_1 - auVar9._0_4_ * *(float *)&this->_padding_;
    }
    fVar10 = param_1 + this->StartSampleTime;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    if (*(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x48) <= fVar10)
    {
      return uVar7;
    }
    if (((this->Samples).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    uVar5 = 0;
    if (*(float *)pFVar2 <= fVar10 && fVar10 != *(float *)pFVar2) {
      while ((uVar8 = uVar7, 0 < (int)uVar8 && ((int)uVar5 < (int)uVar8))) {
        uVar6 = (int)(uVar5 + 1 + uVar8) / 2;
        uVar7 = 0;
        if ((int)uVar6 < (this->Samples).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        uVar7 = uVar6 - 1;
        if (*(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x48) <=
            fVar10) {
          uVar7 = uVar8;
          uVar5 = uVar6;
        }
      }
      uVar7 = 0;
      if ((int)uVar5 < (this->Samples).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      if ((fVar10 < *(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x48)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Samples[MinIndex].SampleTime <= SampleTime",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                                   ,0x20b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      iVar1 = (this->Samples).ArrayNum;
      uVar7 = iVar1 - 1;
      if ((int)(uVar5 + 1) < (int)uVar7) {
        uVar7 = uVar5 + 1;
      }
      uVar8 = 0;
      if ((int)uVar7 < iVar1) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      pFVar2 = (this->Samples).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x48;
      if (fVar10 < *(float *)pFVar2 || fVar10 == *(float *)pFVar2) {
        return uVar5;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Samples[FMath::Min(MinIndex+1, Samples.Num()-1)].SampleTime >= SampleTime"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                         ,0x20c,L"");
      if (!bVar4) {
        return uVar5;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return 0;
}

// FindSampleIndexesFromTime @ 14ca16140

void __thiscall
UGeometryCacheTrackStreamable::FindSampleIndexesFromTime
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2,bool param_3,int *param_4,
          int *param_5,float *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  iVar7 = (this->Samples).ArrayNum;
  if ((iVar7 != 0) && (iVar7 != 1)) {
    uVar4 = FindSampleIndexFromTime(this,param_1,param_2);
    *param_4 = uVar4;
    iVar5 = uVar4 + 1;
    iVar7 = (this->Samples).ArrayNum;
    if (param_2) {
      iVar7 = iVar5 % iVar7;
    }
    else {
      iVar7 = iVar7 + -1;
      if (iVar5 < iVar7) {
        iVar7 = iVar5;
      }
    }
    *param_5 = iVar7;
    uVar4 = *param_4;
    uVar8 = 0;
    if ((int)uVar4 < (this->Samples).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar8 = *param_5;
    pFVar1 = (this->Samples).AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar8 < (this->Samples).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar11 = *(float *)((this->Samples).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x48) -
             *(float *)(pFVar1 + (longlong)(int)uVar4 * 0x48);
    if (__real_322bcc77 < (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (param_2) {
        auVar9 = roundps(in_XMM2,ZEXT416((uint)(param_1 / *(float *)&this->_padding_)),1);
        fVar10 = param_1 - auVar9._0_4_ * *(float *)&this->_padding_;
      }
      else {
        iVar7 = (this->Samples).ArrayNum;
        uVar8 = iVar7 - 1;
        uVar4 = 0;
        if ((int)uVar8 < iVar7) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        fVar10 = *(float *)((this->Samples).AllocatorInstance.Data +
                           (longlong)(this->Samples).ArrayNum * 0x48 + -0x48);
        if (param_1 <= fVar10) {
          fVar10 = param_1;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      uVar4 = *param_4;
      uVar8 = 0;
      if ((int)uVar4 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      fVar11 = (fVar10 - *(float *)((this->Samples).AllocatorInstance.Data +
                                   (longlong)(int)uVar4 * 0x48)) / fVar11;
    }
    else {
      fVar11 = 0.0;
    }
    *param_6 = fVar11;
    fVar11 = __real_3f800000;
    if (param_3) {
      iVar7 = *param_4;
      *param_4 = *param_5;
      *param_5 = iVar7;
      *param_6 = fVar11 - *param_6;
    }
    return;
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0.0;
  return;
}

// FinishDestroy @ 14ca16440

void __thiscall UGeometryCacheTrackStreamable::FinishDestroy(UGeometryCacheTrackStreamable *this)

{
  code *pcVar1;
  bool bVar2;
  IGeometryCacheStreamingManager *pIVar3;
  
  pIVar3 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar3->_padding_ + 0xa0))(pIVar3,this);
  if ((int)(this->RenderResource)._padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RenderResource.IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x151,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetChunk @ 14ca1a980

FStreamedGeometryCacheChunk * __thiscall
UGeometryCacheTrackStreamable::GetChunk(UGeometryCacheTrackStreamable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStreamedGeometryCacheChunk *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Chunks).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStreamedGeometryCacheChunk *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FStreamedGeometryCacheChunk *)
         ((this->Chunks).AllocatorInstance.Data + (longlong)param_1 * 0x38);
}

// GetChunksForTimeRange @ 14ca1aa00

void __thiscall
UGeometryCacheTrackStreamable::GetChunksForTimeRange
          (UGeometryCacheTrackStreamable *this,float param_1,float param_2,bool param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_res10 [2];
  float local_res18 [2];
  uint local_58;
  int local_54;
  float *local_50;
  float *local_48;
  UGeometryCacheTrackStreamable *local_40;
  
  if ((this->Chunks).ArrayNum == 0) {
    return;
  }
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if (param_2 < param_1) {
    local_50 = local_res10;
    local_48 = local_res18;
    local_40 = this;
    `UGeometryCacheTrackStreamable::GetChunksForTimeRange'::__l2::<lambda_1>::operator()(&local_50);
  }
  if ((!param_3) && (local_res18[0] < local_res10[0])) {
    local_res18[0] = local_res10[0];
  }
  iVar5 = (this->Samples).ArrayNum;
  if (iVar5 != 0) {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_res18[0] < *(float *)(this->Samples).AllocatorInstance.Data) {
      if (((this->Samples).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res18[0] = *(float *)(this->Samples).AllocatorInstance.Data;
    }
  }
  if (param_3) {
    fVar11 = local_res18[0] - local_res10[0];
    if (fVar11 < 0.0) {
      fVar11 = (*(float *)&this->_padding_ - local_res10[0]) + local_res18[0];
    }
    fVar1 = *(float *)&this->_padding_;
    if (fVar1 <= fVar11) {
      local_54 = 0;
      if ((this->Chunks).ArrayNum < 1) {
        return;
      }
      do {
        pFVar2 = (param_4->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_54) &&
            ((FScriptContainerElement *)&local_54 < pFVar2 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = param_4->ArrayNum;
        if (iVar5 == param_4->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar5 + 1;
        *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_54;
        local_54 = local_54 + 1;
      } while (local_54 < (this->Chunks).ArrayNum);
      return;
    }
    auVar12 = ZEXT416((uint)((__real_3f800000 / fVar1) * local_res10[0]));
    auVar12 = roundps(auVar12,auVar12,1);
    auVar12._0_4_ = auVar12._0_4_ * fVar1;
    local_res10[0] = local_res10[0] - auVar12._0_4_;
    auVar12 = roundps(auVar12,ZEXT416((uint)((__real_3f800000 / fVar1) * local_res18[0])),1);
    local_res18[0] = local_res18[0] - auVar12._0_4_ * fVar1;
    if (local_res18[0] < local_res10[0]) {
      GetChunksForTimeRange(this,local_res10[0],fVar1,false,param_4);
      GetChunksForTimeRange(this,0.0,local_res18[0],false,param_4);
      return;
    }
  }
  uVar6 = FindSampleIndexFromTime(this,local_res10[0],false);
  uVar7 = FindSampleIndexFromTime(this,local_res18[0],false);
  local_58 = 0;
  if (0 < (this->Chunks).ArrayNum) {
    do {
      uVar9 = local_58;
      uVar8 = 0;
      if ((int)local_58 < (this->Chunks).ArrayNum) {
        uVar8 = ~local_58 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(float *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x38 + 4) <=
          (float)uVar7) {
        lVar10 = (longlong)(int)local_58;
        uVar9 = 0;
        if ((int)local_58 < (this->Chunks).ArrayNum) {
          uVar9 = ~local_58 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Chunks).AllocatorInstance.Data + lVar10 * 0x38 + 8;
        if ((float)uVar6 < *(float *)pFVar2 || (float)uVar6 == *(float *)pFVar2) {
          pFVar2 = (param_4->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)param_4->ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = param_4->ArrayNum;
          if (iVar5 == param_4->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar5 + 1;
          *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_58;
        }
      }
      local_58 = local_58 + 1;
    } while ((int)local_58 < (this->Chunks).ArrayNum);
  }
  return;
}

// GetHash @ 14ca1dd00

ulong64 __thiscall UGeometryCacheTrackStreamable::GetHash(UGeometryCacheTrackStreamable *this)

{
  return this->Hash;
}

// GetMaxSampleTime @ 14ca1e130

float __thiscall
UGeometryCacheTrackStreamable::GetMaxSampleTime(UGeometryCacheTrackStreamable *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = UGeometryCacheTrack::GetMaxSampleTime((UGeometryCacheTrack *)this);
  iVar1 = (this->Samples).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar7 = *(float *)((this->Samples).AllocatorInstance.Data +
                    (longlong)(this->Samples).ArrayNum * 0x48 + -0x48);
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  return fVar7;
}

// GetMeshDataAtSampleIndex @ 14ca1e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UGeometryCacheTrackStreamable::GetMeshDataAtSampleIndex
          (UGeometryCacheTrackStreamable *this,int param_1,FGeometryCacheMeshData *param_2)

{
  UGeometryCacheCodecBase *pUVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined1 auStack_198 [32];
  uint local_178 [4];
  FStreamingGeometryCacheData local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((((this->Codec).field0_0x0.DebugPtr == (UGeometryCacheCodecBase *)0x0) || (param_1 < 0)) ||
     ((this->Samples).ArrayNum <= param_1)) {
    uVar2 = 0;
  }
  else {
    FStreamingGeometryCacheData::FStreamingGeometryCacheData(&local_168,this);
    local_178[0] = param_1;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
              (&local_168.ChunksNeeded,(int *)local_178);
    FStreamingGeometryCacheData::UpdateStreamingStatus(&local_168);
    FStreamingGeometryCacheData::BlockTillAllRequestsFinished(&local_168,0.0);
    local_178[0] = 0;
    puVar3 = FStreamingGeometryCacheData::MapChunk(&local_168,param_1,local_178);
    pUVar1 = (this->Codec).field0_0x0.DebugPtr;
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,puVar3,local_178[0],param_2);
    FStreamingGeometryCacheData::UnmapChunk(&local_168,param_1);
    FStreamingGeometryCacheData::~FStreamingGeometryCacheData(&local_168);
  }
  return (bool)uVar2;
}

// GetMeshDataAtTime @ 14ca1e610

bool __thiscall
UGeometryCacheTrackStreamable::GetMeshDataAtTime
          (UGeometryCacheTrackStreamable *this,float param_1,FGeometryCacheMeshData *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  uint uVar2;
  
  if ((this->Codec).field0_0x0.DebugPtr == (UGeometryCacheCodecBase *)0x0) {
    return false;
  }
  uVar2 = FindSampleIndexFromTime(this,param_1,false);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x300);
                    /* WARNING: Could not recover jumptable at 0x00014ca1e658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(this,uVar2,param_2,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// GetPrivateStaticClass @ 14ca1ee90

UClass * __cdecl UGeometryCacheTrackStreamable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrackStreamable",
               &Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton,
               StaticRegisterNativesUGeometryCacheTrackStreamable,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheTrackStreamable>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrackStreamable>,local_res8,
               UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton;
}

// GetResourceSizeEx @ 14ca1f540

void __thiscall
UGeometryCacheTrackStreamable::GetResourceSizeEx
          (UGeometryCacheTrackStreamable *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 2);
  iVar4 = (this->Chunks).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,4);
      iVar4 = (this->Chunks).ArrayNum;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->Samples).ArrayNum * 0x48);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x10);
  return;
}

// GetSampleInfo @ 14ca1f640

FGeometryCacheTrackStreamableSampleInfo * __thiscall
UGeometryCacheTrackStreamable::GetSampleInfo(UGeometryCacheTrackStreamable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGeometryCacheTrackStreamableSampleInfo *pFVar4;
  
  if ((param_1 < 0) || ((this->Samples).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Samples.IsValidIndex(SampleID)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x213,L"Invalid sample (frame) index.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCacheTrackStreamableSampleInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Samples).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCacheTrackStreamableSampleInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGeometryCacheTrackStreamableSampleInfo *)
         ((this->Samples).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// GetSampleInfo @ 14ca1f6f0

FGeometryCacheTrackSampleInfo * __thiscall
UGeometryCacheTrackStreamable::GetSampleInfo
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2)

{
  uint uVar1;
  FGeometryCacheTrackSampleInfo *pFVar2;
  
  uVar1 = FindSampleIndexFromTime(this,param_1,param_2);
  pFVar2 = (FGeometryCacheTrackSampleInfo *)GetSampleInfo(this,uVar1);
  return pFVar2;
}

// GetVisibilitySample @ 14ca1fe30

FVisibilitySample * __thiscall
UGeometryCacheTrackStreamable::GetVisibilitySample
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2)

{
  float fVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVisibilitySample *pFVar7;
  TRangeBound<float> *pTVar8;
  FVisibilitySample *pFVar9;
  uint uVar10;
  TRangeBound<float> *pTVar11;
  FVisibilitySample *pFVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  undefined1 local_res18 [16];
  FVisibilitySample local_38;
  
  if (param_2) {
    auVar13 = roundps(in_XMM3,ZEXT416((uint)(param_1 / *(float *)&this->_padding_)),1);
    param_1 = param_1 - auVar13._0_4_ * *(float *)&this->_padding_;
  }
  pFVar12 = (FVisibilitySample *)(this->VisibilitySamples).AllocatorInstance.Data;
  iVar3 = (this->VisibilitySamples).ArrayNum;
  pTVar11 = &(pFVar12->Range).UpperBound;
  pFVar9 = pFVar12 + iVar3;
  do {
    if ((this->VisibilitySamples).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FVisibilitySample_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar9) {
      if (((this->VisibilitySamples).ArrayNum == 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6912499225800474069>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                             ,0x22b,"VisibilitySamples.Num()"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FVisibilitySample *)(*pcVar4)();
        return pFVar9;
      }
      iVar3 = (this->VisibilitySamples).ArrayNum;
      uVar10 = iVar3 - 1;
      uVar6 = 0;
      if ((int)uVar10 < iVar3) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FVisibilitySample *)(*pcVar4)();
        return pFVar9;
      }
      return (FVisibilitySample *)
             ((this->VisibilitySamples).AllocatorInstance.Data +
             (longlong)((this->VisibilitySamples).ArrayNum + -1) * 0x14);
    }
    uVar2 = (pFVar12->Range).LowerBound.Type.Value;
    local_38.Range.LowerBound.Value = param_1;
    local_38.Range.LowerBound.Type.Value = '\x01';
    if (uVar2 == '\x02') {
LAB_14ca1fef3:
      uVar2 = (pTVar11->Type).Value;
      local_38.Range.UpperBound.Value = param_1;
      local_38.Range.UpperBound.Type.Value = '\x01';
      if (uVar2 == '\x02') {
        return pFVar12;
      }
      fVar1 = pTVar11->Value;
      pTVar8 = pTVar11;
      if (fVar1 <= param_1) {
        if (fVar1 < param_1) {
          pTVar8 = &local_38.Range.UpperBound;
        }
        if (uVar2 != '\x01') goto LAB_14ca1ff2f;
      }
      if (fVar1 == pTVar8->Value) {
        return pFVar12;
      }
    }
    else {
      fVar1 = (((TRange<float> *)(pTVar11 + -1))->LowerBound).Value;
      pFVar7 = pFVar12;
      if (fVar1 < param_1) {
LAB_14ca1feed:
        if (fVar1 == (pFVar7->Range).LowerBound.Value) goto LAB_14ca1fef3;
      }
      else {
        if (param_1 < fVar1) {
          pFVar7 = &local_38;
        }
        if (uVar2 == '\x01') goto LAB_14ca1feed;
      }
    }
LAB_14ca1ff2f:
    pFVar12 = pFVar12 + 1;
    pTVar11 = (TRangeBound<float> *)((longlong)(pTVar11 + 2) + 4);
  } while( true );
}

// InitializeRenderResources @ 14ca22eb0

void __thiscall
UGeometryCacheTrackStreamable::InitializeRenderResources(UGeometryCacheTrackStreamable *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCacheCodecRenderStateBase *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x25b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)(this->RenderResource)._padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RenderResource.IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x25c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Codec).field0_0x0.DebugPtr == (UGeometryCacheCodecBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Codec != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x26a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)(this->RenderResource)._padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x26b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = (FGeometryCacheCodecRenderStateBase *)
           (**(code **)(((this->Codec).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  (this->RenderResource).Track = this;
  (this->RenderResource).Codec = pFVar3;
  BeginInitResource((FRenderResource *)&this->RenderResource,(FRenderCommandPipe *)0x0);
  return;
}

// IsReadyForFinishDestroy @ 14ca23820

bool __thiscall
UGeometryCacheTrackStreamable::IsReadyForFinishDestroy(UGeometryCacheTrackStreamable *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// PostInitProperties @ 14ca249c0

void __thiscall
UGeometryCacheTrackStreamable::PostInitProperties(UGeometryCacheTrackStreamable *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  UObject::PostInitProperties((UObject *)this);
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00014ca249e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// PostLoad @ 14ca24eb0

void __thiscall UGeometryCacheTrackStreamable::PostLoad(UGeometryCacheTrackStreamable *this)

{
  IGeometryCacheStreamingManager *pIVar1;
  
  UObject::PostLoad((UObject *)this);
  pIVar1 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar1->_padding_ + 0x98))(pIVar1,this);
  InitializeRenderResources(this);
  return;
}

// ReleaseRenderResources @ 14ca29320

void __thiscall
UGeometryCacheTrackStreamable::ReleaseRenderResources(UGeometryCacheTrackStreamable *this)

{
  BeginReleaseResource((FRenderResource *)&this->RenderResource,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  return;
}

// Serialize @ 14ca2a8c0

void __thiscall
UGeometryCacheTrackStreamable::Serialize(UGeometryCacheTrackStreamable *this,FArchive *param_1)

{
  int *piVar1;
  TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  UGeometryCacheTrack::Serialize((UGeometryCacheTrack *)this,param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  piVar1 = &(this->Chunks).ArrayNum;
  local_res8[0] = *piVar1;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar8 = local_res8[0];
  pTVar2 = &this->Chunks;
  if ((param_1->field_0x28 & 1) != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,local_res8[0],&pTVar2->AllocatorInstance,piVar1,
                       &(this->Chunks).ArrayMax);
    DefaultConstructItems<FStreamedGeometryCacheChunk,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x38,uVar8);
  }
  uVar8 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Chunks).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
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
      FStreamedGeometryCacheChunk::Serialize
                ((FStreamedGeometryCacheChunk *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x38),param_1,
                 (UObject *)this,uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_res8[0]);
  }
  TArrayPrivateFriend::
  Serialize<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->Samples);
  TArrayPrivateFriend::Serialize<FVisibilitySample,TSizedDefaultAllocator<32>_>
            (param_1,&this->VisibilitySamples);
  return;
}

// Serialize @ 14ca2aa20

void __thiscall
UGeometryCacheTrackStreamable::Serialize
          (UGeometryCacheTrackStreamable *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetDuration @ 14ca2aae0

void __thiscall
UGeometryCacheTrackStreamable::SetDuration(UGeometryCacheTrackStreamable *this,float param_1)

{
  BeginReleaseResource((FRenderResource *)&this->RenderResource,(FRenderCommandPipe *)0x0);
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  FRenderCommandFence::Wait(&this->ReleaseResourcesFence,false);
  *(float *)&this->_padding_ = param_1;
  InitializeRenderResources(this);
  return;
}

// StaticRegisterNativesUGeometryCacheTrackStreamable @ 14ca2ba70

void __cdecl UGeometryCacheTrackStreamable::StaticRegisterNativesUGeometryCacheTrackStreamable(void)

{
  return;
}

// UpdateBoundsData @ 14ca2d700

bool __thiscall
UGeometryCacheTrackStreamable::UpdateBoundsData
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2,bool param_3,int *param_4,
          TBox<double> *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  FGeometryCacheTrackStreamableSampleInfo *pFVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_168;
  int local_164;
  float local_160 [18];
  undefined8 local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_a8;
  undefined4 uStack_a4;
  
  FindSampleIndexesFromTime(this,param_1,param_2,param_3,&local_168,&local_164,local_160);
  pFVar6 = GetSampleInfo(this,local_168);
  local_118 = *(undefined8 *)pFVar6;
  dStack_110 = *(double *)&pFVar6->field_0x8;
  local_108 = *(double *)&pFVar6->field_0x10;
  uStack_100 = *(double *)&pFVar6->field_0x18;
  local_e8 = *(undefined4 *)&pFVar6->field_0x30;
  uStack_e4 = *(undefined4 *)&pFVar6->field_0x34;
  uVar20 = *(undefined4 *)&pFVar6->field_0x38;
  uVar21 = *(undefined4 *)&pFVar6->field_0x3c;
  local_f8 = *(double *)&pFVar6->field_0x20;
  uStack_f0 = *(double *)&pFVar6->field_0x28;
  uStack_e0 = uVar20;
  uStack_dc = uVar21;
  pFVar6 = GetSampleInfo(this,local_164);
  uVar12 = SUB84(dStack_110,0);
  uVar13 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  uVar14 = SUB84(local_108,0);
  uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  auVar1 = *(undefined1 (*) [16])&pFVar6->field_0x30;
  auVar2 = *(undefined1 (*) [16])pFVar6;
  auVar3 = *(undefined1 (*) [16])&pFVar6->field_0x10;
  auVar4 = *(undefined1 (*) [16])&pFVar6->field_0x20;
  if ((char)uVar20 == '\0') {
    if (auVar1[8] != '\0') {
      local_a8 = auVar4._0_4_;
      uStack_a4 = auVar4._4_4_;
      uVar12 = auVar2._8_4_;
      uVar13 = auVar2._12_4_;
      uVar14 = auVar3._0_4_;
      uVar15 = auVar3._4_4_;
      uStack_100._0_4_ = auVar3._8_4_;
      uStack_100._4_4_ = auVar3._12_4_;
      local_f8._0_4_ = local_a8;
      local_f8._4_4_ = uStack_a4;
      uStack_f0._0_4_ = auVar4._8_4_;
      uStack_f0._4_4_ = auVar4._12_4_;
      local_e8 = auVar1._0_4_;
      uStack_e4 = auVar1._4_4_;
      uVar20 = auVar1._8_4_;
      uVar21 = auVar1._12_4_;
    }
  }
  else if (auVar1[8] != '\0') {
    uVar10 = auVar1._0_4_;
    uVar11 = auVar1._4_4_;
    if (auVar1._0_8_ <= (double)CONCAT44(uStack_e4,local_e8)) {
      uVar10 = local_e8;
      uVar11 = uStack_e4;
    }
    uVar8 = auVar3._0_4_;
    uVar9 = auVar3._4_4_;
    if (local_108 <= auVar3._0_8_) {
      uVar8 = uVar14;
      uVar9 = uVar15;
    }
    uVar16 = auVar3._8_4_;
    uVar17 = auVar3._12_4_;
    if (uStack_100 <= auVar3._8_8_) {
      uVar16 = (undefined4)uStack_100;
      uVar17 = uStack_100._4_4_;
    }
    dVar7 = auVar4._0_8_;
    if (auVar4._0_8_ <= local_f8) {
      dVar7 = local_f8;
    }
    if (auVar2._8_8_ <= dStack_110) {
      uVar12 = auVar2._8_4_;
      uVar13 = auVar2._12_4_;
    }
    uVar18 = auVar4._8_4_;
    uVar19 = auVar4._12_4_;
    if (auVar4._8_8_ <= uStack_f0) {
      uVar18 = (undefined4)uStack_f0;
      uVar19 = uStack_f0._4_4_;
    }
    local_f8._0_4_ = SUB84(dVar7,0);
    local_f8._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
    uVar14 = uVar8;
    uVar15 = uVar9;
    uStack_100._0_4_ = uVar16;
    uStack_100._4_4_ = uVar17;
    uStack_f0._0_4_ = uVar18;
    uStack_f0._4_4_ = uVar19;
    local_e8 = uVar10;
    uStack_e4 = uVar11;
  }
  *(undefined4 *)&(param_5->Min).field0_0x0 = uVar12;
  *(undefined4 *)((longlong)&(param_5->Min).field0_0x0 + 4) = uVar13;
  *(undefined4 *)((longlong)&(param_5->Min).field0_0x0 + 8) = uVar14;
  *(undefined4 *)((longlong)&(param_5->Min).field0_0x0 + 0xc) = uVar15;
  *(undefined4 *)((longlong)&(param_5->Min).field0_0x0 + 0x10) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)&(param_5->Min).field0_0x0 + 0x14) = uStack_100._4_4_;
  *(undefined4 *)&(param_5->Max).field0_0x0 = (undefined4)local_f8;
  *(undefined4 *)((longlong)&(param_5->Max).field0_0x0 + 4) = local_f8._4_4_;
  *(undefined4 *)((longlong)&(param_5->Max).field0_0x0 + 8) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)&(param_5->Max).field0_0x0 + 0xc) = uStack_f0._4_4_;
  *(undefined4 *)((longlong)&(param_5->Max).field0_0x0 + 0x10) = local_e8;
  *(undefined4 *)((longlong)&(param_5->Max).field0_0x0 + 0x14) = uStack_e4;
  param_5->IsValid = (char)uVar20;
  param_5->Pad[0] = (char)((uint)uVar20 >> 8);
  param_5->Pad[1] = (char)((uint)uVar20 >> 0x10);
  param_5->Pad[2] = (char)((uint)uVar20 >> 0x18);
  param_5->Pad[3] = (char)uVar21;
  param_5->Pad[4] = (char)((uint)uVar21 >> 8);
  param_5->Pad[5] = (char)((uint)uVar21 >> 0x10);
  param_5->Pad[6] = (char)((uint)uVar21 >> 0x18);
  iVar5 = *param_4;
  if (iVar5 != local_168) {
    *param_4 = local_168;
  }
  return iVar5 != local_168;
}

// UpdateMeshData @ 14ca2e160

bool __thiscall
UGeometryCacheTrackStreamable::UpdateMeshData
          (UGeometryCacheTrackStreamable *this,float param_1,bool param_2,int *param_3,
          FGeometryCacheMeshData **param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                     ,0x7d,
                     L"This function is removed. Calls should go through the FGeometryCacheTrackStreamableRenderResource class"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150575900

bool __thiscall
`UGeometryCacheTrackStreamable::GetChunksForTimeRange'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6912499225800474258>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6912499225800474258>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

