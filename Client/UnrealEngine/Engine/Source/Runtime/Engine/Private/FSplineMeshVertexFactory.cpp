// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetType @ 1479d3a90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall FSplineMeshVertexFactory::GetType(FSplineMeshVertexFactory *this)

{
  return &StaticType;
}

// GetPSOPrecacheVertexFetchElements @ 14873d890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FSplineMeshVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [10];
  uchar auStack_3e [6];
  undefined1 auStack_38 [10];
  uchar auStack_2e [6];
  uchar uStack_28;
  uchar uStack_27;
  uchar uStack_26;
  uchar uStack_25;
  uchar uStack_24;
  uchar uStack_23;
  uchar uStack_22;
  uchar uStack_21;
  
  auStack_48[0] = '\0';
  auStack_48[1] = '\0';
  auStack_48[2] = '\x03';
  auStack_48[3] = '\0';
  auStack_48[4] = '\f';
  auStack_48[5] = '\0';
  auStack_48[6] = '\0';
  auStack_48[7] = '\0';
  if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)auStack_48) &&
      (auStack_48 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(auStack_48._6_2_,CONCAT42(auStack_48._2_4_,auStack_48._0_2_));
  if (param_1 == PositionAndNormalOnly) {
    auStack_48[8] = '\x01';
    auStack_48[9] = '\x04';
    builtin_memcpy(auStack_3e,"\x05\x02\b",4);
    auStack_3e[4] = '\0';
    auStack_3e[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(auStack_48 + 8)) &&
        (auStack_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
         CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,auStack_48._8_2_));
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar3) &&
     (bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar3)) {
    if (param_1 == Default) {
      uStack_28 = '\x01';
      uStack_27 = '\0';
      uStack_22 = '\x01';
      uStack_21 = '\0';
      uStack_26 = '\x14';
      uStack_25 = '\r';
      uStack_24 = '\x04';
      uStack_23 = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffd8) &&
          (&stack0xffffffffffffffd8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(_uStack_22,CONCAT42(_uStack_26,_uStack_28));
    }
    else if (param_1 == PositionOnly) {
      auStack_38[8] = '\x01';
      auStack_38[9] = '\0';
      auStack_2e[4] = '\x01';
      auStack_2e[5] = '\0';
      builtin_memcpy(auStack_2e,"\x14\x01\x04",4);
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(auStack_38 + 8)) &&
          (auStack_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,auStack_38._8_2_));
    }
    else {
      if (param_1 != PositionAndNormalOnly) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                           ,0x174,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_38[0] = '\x02';
      auStack_38[1] = '\0';
      auStack_38[6] = '\x01';
      auStack_38[7] = '\0';
      auStack_38[2] = '\x14';
      auStack_38[3] = '\x01';
      auStack_38[4] = '\x04';
      auStack_38[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)auStack_38) &&
          (auStack_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_38._6_2_,CONCAT42(auStack_38._2_4_,auStack_38._0_2_));
    }
    *(undefined8 *)(param_2->AllocatorInstance).InlineData[lVar6].Pad = uVar5;
  }
  return;
}

// ModifyCompilationEnvironment @ 14874cf40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FSplineMeshVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_SPEEDTREE_WIND",L"0");
  FLocalVertexFactory::ModifyCompilationEnvironment(param_1,param_2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_SPLINEDEFORM",L"1");
  bVar1 = UseSplineMeshSceneResources((FStaticShaderPlatform)param_1->Platform);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_SPLINE_MESH_SCENE_RESOURCES",bVar1);
  return;
}

// ShouldCompilePermutation @ 14875c7c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FSplineMeshVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if (((param_1->MaterialParameters)._padding_ & 0x200000002U) != 0) {
    bVar1 = FLocalVertexFactory::ShouldCompilePermutation(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

