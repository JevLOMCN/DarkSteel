// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FSimpleLightsStandardDeferredParameters @ 144b98300

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSimpleLightsStandardDeferredParameters * __thiscall
FSimpleLightsStandardDeferredParameters::FSimpleLightsStandardDeferredParameters
          (FSimpleLightsStandardDeferredParameters *this)

{
  FDeferredLightPS::FParameters::FParameters(&this->PS);
  (this->VS).View.field_0x8 = 1;
  *(undefined8 *)&(this->VS).View = 0;
  *(undefined8 *)&(this->VS).FullScreenRect.PosScaleBias.field0_0x0 = 0;
  (this->VS).FullScreenRect.PosScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->VS).FullScreenRect.UVScaleBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->VS).FullScreenRect.InvTargetSizeAndTextureSize.field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&(this->VS).Geometry.StencilingGeometryPosAndScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->VS).Geometry.StencilingConeParameters.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->VS).FullScreenRect.PosScaleBias.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->VS).FullScreenRect.UVScaleBias.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->VS).FullScreenRect.InvTargetSizeAndTextureSize.field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&(this->VS).Geometry.StencilingGeometryPosAndScale.field0_0x0 + 0xc) =
       0x3f800000;
  (this->VS).Geometry.StencilingConeParameters.field0_0x0._s_0.W = 1.0;
  return this;
}

// zzAppendMemberGetPrev @ 144c01880

void * __cdecl
FSimpleLightsStandardDeferredParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 144c01890

void * __cdecl
FSimpleLightsStandardDeferredParameters::zzAppendMemberGetPrev
          (zzNextMemberIdPS param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FDeferredLightPS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"PS";
  pwStack_30 = L"FDeferredLightPS::FParameters";
  local_28 = 0xca6;
  uStack_20 = 0x15;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 144c019b0

void * __cdecl
FSimpleLightsStandardDeferredParameters::zzAppendMemberGetPrev
          (zzNextMemberIdVS param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FDeferredLightVS::FParameters::FTypeInfo::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"VS";
  pwStack_30 = L"FDeferredLightVS::FParameters";
  local_28 = 0xca7;
  uStack_24 = 0x260;
  uStack_20 = 0x15;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

