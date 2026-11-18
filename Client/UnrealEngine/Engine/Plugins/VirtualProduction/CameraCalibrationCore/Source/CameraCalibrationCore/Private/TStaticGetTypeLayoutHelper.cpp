// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 6

// CallAppendHash @ 14d6b90b0

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallAppendHash(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2,FSHA1 *param_3)

{
  uint uVar1;
  
  uVar1 = Freeze::AppendHashForNameAndSize(param_1->Name,0x10,param_3);
  return uVar1;
}

// CallDestroy @ 14d6b90d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// CallGetTargetAlignment @ 14d6b9100

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallGetTargetAlignment(FTypeLayoutDesc *param_1,FPlatformTypeLayoutParameters *param_2)

{
  uint uVar1;
  
  uVar1 = param_2->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// CallToString @ 14d6b9120

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallToString(void *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
            FMemoryToStringContext *param_4)

{
  return;
}

// CallUnfrozenCopy @ 14d6b9130

uint __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallUnfrozenCopy(FMemoryUnfreezeContent *param_1,void *param_2,FTypeLayoutDesc *param_3,
                void *param_4)

{
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)param_4 + 8) = 0;
  return 0x10;
}

// CallWriteMemoryImage @ 14d6b9150

void __cdecl
TStaticGetTypeLayoutHelper<TArray<UE::Math::TVector2<float>,TMemoryImageAllocator<0>_>_>::
CallWriteMemoryImage
          (FMemoryImageWriter *param_1,void *param_2,FTypeLayoutDesc *param_3,
          FTypeLayoutDesc *param_4)

{
  code *pcVar1;
  bool bVar2;
  FPlatformTypeLayoutParameters *pFVar3;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  undefined8 local_10;
  
  pFVar3 = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  if ((pFVar3->Flags & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.Is64BitTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xe07,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Packed = 0;
  local_10 = 0;
  FMemoryImageWriter::WriteBytes(param_1,&local_18,0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  return;
}

