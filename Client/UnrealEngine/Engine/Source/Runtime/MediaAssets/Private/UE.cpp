// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 26

// Construct<FMediaSourceCacheSettings> @ 146c11ff0

void __cdecl UE::CoreUObject::Private::Construct<FMediaSourceCacheSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  return;
}

// ConstructForTests<FMediaSourceCacheSettings> @ 146c12010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaSourceCacheSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3e4ccccd;
  return;
}

// Destruct<FMediaSourceCacheSettings> @ 146c12030

void __cdecl UE::CoreUObject::Private::Destruct<FMediaSourceCacheSettings>(void *param_1)

{
  return;
}

// Copy<FMediaSourceCacheSettings> @ 146c12050

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaSourceCacheSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaSoundComponentSpectralData> @ 146c133c0

void __cdecl UE::CoreUObject::Private::Construct<FMediaSoundComponentSpectralData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMediaSoundComponentSpectralData> @ 146c133d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMediaSoundComponentSpectralData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMediaSoundComponentSpectralData> @ 146c133e0

void __cdecl UE::CoreUObject::Private::Destruct<FMediaSoundComponentSpectralData>(void *param_1)

{
  return;
}

// Copy<FMediaSoundComponentSpectralData> @ 146c133f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaSoundComponentSpectralData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaMetadataItemsBPT> @ 146c13cb0

void __cdecl UE::CoreUObject::Private::Construct<FMediaMetadataItemsBPT>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMediaMetadataItemsBPT> @ 146c13cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaMetadataItemsBPT>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMediaMetadataItemsBPT> @ 146c13cd0

void __cdecl UE::CoreUObject::Private::Destruct<FMediaMetadataItemsBPT>(void *param_1)

{
  DestructItems<FMediaMetadataItemBPT,int>
            (*(FMediaMetadataItemBPT **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMediaMetadataItemsBPT> @ 146c13d50

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaMetadataItemsBPT>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FMediaMetadataItemBPT *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FMediaMetadataItemBPT,int>
                  ((FMediaMetadataItemBPT *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FMediaMetadataItemBPT *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FMediaMetadataItemBPT,FMediaMetadataItemBPT,int>(pFVar6->Data,pFVar5,iVar3)
          ;
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaMetadataItemBPT> @ 146c13e90

void __cdecl UE::CoreUObject::Private::Construct<FMediaMetadataItemBPT>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMediaMetadataItemBPT> @ 146c13ec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaMetadataItemBPT>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMediaMetadataItemBPT> @ 146c13ef0

void __cdecl UE::CoreUObject::Private::Destruct<FMediaMetadataItemBPT>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMediaMetadataItemBPT> @ 146c13f90

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaMetadataItemBPT>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    pFVar1 = (FString *)((longlong)param_1 + 0x30);
    if (pFVar1 != (FString *)((longlong)param_2 + 0x30)) {
      iVar3 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
      piVar2 = &(((FString *)((longlong)param_1 + 0x30))->Data).ArrayMax;
      _Src = (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
      iVar4 = *piVar2;
      (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
        }
      }
    }
    param_1 = (FString *)((longlong)param_1 + 0x40);
    param_2 = (FString *)((longlong)param_2 + 0x40);
  }
  return true;
}

// Construct<FMediaCaptureDevice> @ 146c162f0

void __cdecl UE::CoreUObject::Private::Construct<FMediaCaptureDevice>(void *param_1)

{
  FText::FText(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMediaCaptureDevice> @ 146c16320

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaCaptureDevice>(void *param_1)

{
  FText::FText(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMediaCaptureDevice> @ 146c16350

void __cdecl UE::CoreUObject::Private::Destruct<FMediaCaptureDevice>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c16377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FMediaCaptureDevice> @ 146c16390

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaCaptureDevice>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar1 = *(longlong **)(lVar3 + (longlong)param_1);
      plVar2 = *(longlong **)param_1;
      if (plVar2 != plVar1) {
        *(longlong **)param_1 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar3 + 8);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_1 + lVar3 + 0x10)
                );
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FLatentOpenMediaSourceAction,FLatentOpenMediaSourceAction_*_&> @ 146c183a0

FLatentOpenMediaSourceAction * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FLatentOpenMediaSourceAction,FLatentOpenMediaSourceAction_*_&>
          (FLatentOpenMediaSourceAction **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMediaPlayer,UMediaPlayer_*_&> @ 146c183c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMediaPlayer,UMediaPlayer_*_&>(UMediaPlayer **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLatentResponse::FExecutionInfo>_> @ 146c1b530

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLatentResponse::FExecutionInfo>_>
          (ushort param_1,ForElementType<FLatentResponse::FExecutionInfo> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLatentResponse::FExecutionInfo>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// CalcGeneratedNumMips @ 146c20ec0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uchar __cdecl
UE::MediaTexture::Private::CalcGeneratedNumMips(IMediaTextureSample *param_1,bool param_2)

{
  uchar uVar1;
  int iVar2;
  TIntPoint<int> *pTVar3;
  undefined1 local_res18 [16];
  
  if (param_2) {
    iVar2 = (**(code **)((longlong)*param_1 + 0x28))();
    if ((((iVar2 != 0x14) && (iVar2 != 0x15)) && (iVar2 != 0x16)) &&
       ((iVar2 != 0x17 && (iVar2 != 0x18)))) {
      pTVar3 = (TIntPoint<int> *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res18);
      uVar1 = ClampNumMips((uchar)GRHIGlobals.MaxTextureMipCount,pTVar3);
      return uVar1;
    }
  }
  return '\x01';
}

// CalcTextureNumMips @ 146c20f30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uchar __cdecl
UE::MediaTexture::Private::CalcTextureNumMips(IMediaTextureSample *param_1,bool param_2)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  TIntPoint<int> *pTVar4;
  undefined1 local_res8 [8];
  
  bVar1 = (**(code **)((longlong)*param_1 + 0x10))();
  if (bVar1 < 2) {
    if (param_2) {
      iVar3 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
      if ((((iVar3 != 0x14) && (iVar3 != 0x15)) && (iVar3 != 0x16)) &&
         ((iVar3 != 0x17 && (iVar3 != 0x18)))) {
        pTVar4 = (TIntPoint<int> *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res8);
        uVar2 = ClampNumMips((uchar)GRHIGlobals.MaxTextureMipCount,pTVar4);
        return uVar2;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

// ClampNumMips @ 146c212e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uchar __cdecl UE::MediaTexture::Private::ClampNumMips(uchar param_1,TIntPoint<int> *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  if (1 < param_1) {
    iVar2 = (param_2->field0_0x0)._s_0.Y;
    if ((param_2->field0_0x0)._s_0.X < iVar2) {
      iVar2 = (param_2->field0_0x0)._s_0.X;
    }
    fVar3 = logf((float)iVar2);
    iVar2 = (int)(fVar3 * __real_3fb8aa3b);
    iVar2 = iVar2 - (uint)(fVar3 * __real_3fb8aa3b < (float)iVar2);
    if (GRHIGlobals.MaxTextureMipCount < iVar2) {
      iVar2 = GRHIGlobals.MaxTextureMipCount;
    }
    bVar1 = (byte)iVar2;
    if (param_1 < (byte)iVar2) {
      bVar1 = param_1;
    }
    return bVar1;
  }
  return param_1;
}

