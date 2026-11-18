// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147f90840

UClass * __cdecl UMeshVertexPainterKismetLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshVertexPainterKismetLibrary",
               &Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton,
               StaticRegisterNativesUMeshVertexPainterKismetLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshVertexPainterKismetLibrary>,
               InternalVTableHelperCtorCaller<UMeshVertexPainterKismetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton;
}

// UMeshVertexPainterKismetLibrary @ 147fa5ed0

UMeshVertexPainterKismetLibrary * __thiscall
UMeshVertexPainterKismetLibrary::UMeshVertexPainterKismetLibrary
          (UMeshVertexPainterKismetLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexPainterKismetLibrary__6B_;
  return this;
}

// UMeshVertexPainterKismetLibrary @ 147fa5f00

UMeshVertexPainterKismetLibrary * __thiscall
UMeshVertexPainterKismetLibrary::UMeshVertexPainterKismetLibrary
          (UMeshVertexPainterKismetLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMeshVertexPainterKismetLibrary__6B_;
  return this;
}

// ~UMeshVertexPainterKismetLibrary @ 147fa9670

void __thiscall
UMeshVertexPainterKismetLibrary::~UMeshVertexPainterKismetLibrary
          (UMeshVertexPainterKismetLibrary *this)

{
  *(undefined ***)this = &___7UMeshVertexPainterKismetLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 147fd6210

UClass * __cdecl UMeshVertexPainterKismetLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshVertexPainterKismetLibrary",
               &Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton,
               StaticRegisterNativesUMeshVertexPainterKismetLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshVertexPainterKismetLibrary>,
               InternalVTableHelperCtorCaller<UMeshVertexPainterKismetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPainterKismetLibrary.InnerSingleton;
}

// PaintVerticesLerpAlongAxis @ 147fe5650

void __cdecl
UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis
          (UStaticMeshComponent *param_1,FLinearColor *param_2,FLinearColor *param_3,
          EVertexPaintAxis param_4,bool param_5)

{
  FMeshVertexPainter::PaintVerticesLerpAlongAxis(param_1,param_2,param_3,param_4,param_5);
  return;
}

// PaintVerticesSingleColor @ 147fe5880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshVertexPainterKismetLibrary::PaintVerticesSingleColor
          (UStaticMeshComponent *param_1,FLinearColor *param_2,bool param_3)

{
  int iVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FStaticMeshRenderData *pFVar6;
  FColorVertexBuffer *this;
  FColorVertexBuffer *this_00;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackX_8 [8];
  FColor aFStackX_20 [2];
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    else if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    uVar5 = UStaticMesh::GetNumLODs(pUVar2);
    UStaticMeshComponent::SetLODDataCount(param_1,uVar5,uVar5);
    FLinearColor::ToFColor(param_2,SUB81(aFStackX_20,0));
    iVar1 = (param_1->LODData).ArrayNum;
    uVar5 = 0;
    pFVar8 = (param_1->LODData).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((param_1->LODData).ArrayNum != iVar1) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (pFVar8 == pFVar9) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,uVar5);
      if ((*(longlong *)(pFVar8 + 0x40) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pFVar6 = UStaticMesh::GetRenderData(pUVar2);
      uVar7 = 0;
      if ((int)uVar5 < (pFVar6->LODResources).Array.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)(*(longlong *)
                         ((pFVar6->LODResources).Array.AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 8) + 0x1cc);
      this = ::operator_new(0x50);
      this_00 = (FColorVertexBuffer *)0x0;
      if (this != (FColorVertexBuffer *)0x0) {
        this_00 = FColorVertexBuffer::FColorVertexBuffer(this);
      }
      *(FColorVertexBuffer **)(pFVar8 + 0x40) = this_00;
      FColorVertexBuffer::InitFromColorArray(this_00,aFStackX_20,uVar7,0,true);
      BeginInitResource(*(FRenderResource **)(pFVar8 + 0x40),(FRenderCommandPipe *)0x0);
      uVar5 = uVar5 + 1;
      pFVar8 = pFVar8 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1->bEnableVertexColorMeshPainting = '\0';
  }
  return;
}

// RemovePaintedVertices @ 147fed790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UMeshVertexPainterKismetLibrary::RemovePaintedVertices(UStaticMeshComponent *param_1)

{
  int iVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    else if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    iVar6 = 0;
    pFVar7 = (param_1->LODData).AllocatorInstance.Data;
    iVar1 = (param_1->LODData).ArrayNum;
    pFVar5 = pFVar7 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((param_1->LODData).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar5) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,iVar6);
      if ((*(longlong *)(pFVar7 + 0x40) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x82,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = iVar6 + 1;
      pFVar7 = pFVar7 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1->bEnableVertexColorMeshPainting = '\x01';
  }
  return;
}

// StaticRegisterNativesUMeshVertexPainterKismetLibrary @ 147ff8800

void __cdecl
UMeshVertexPainterKismetLibrary::StaticRegisterNativesUMeshVertexPainterKismetLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPaintVerticesLerpAlongAxis @ 1480028d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  FProperty *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FStaticMeshRenderData *pFVar16;
  FColorVertexBuffer *this;
  FColorVertexBuffer *this_00;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  UStaticMesh *this_01;
  UStaticMeshComponent *this_02;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_1d4;
  int local_1d0;
  uint local_1cc;
  ForAnyElementType local_1c8;
  uint local_1c0 [4];
  UStaticMeshComponent *local_1b0;
  FScriptContainerElement *local_1a8;
  FLinearColor_u_0 local_1a0;
  FName local_190;
  float *local_188;
  float *local_180;
  UStaticMesh *local_178;
  UStaticMeshComponent *local_170;
  FScriptContainerElement *local_168;
  FString local_160;
  double local_150 [4];
  double local_130;
  double local_128;
  undefined1 local_120;
  float local_118 [4];
  float local_108 [4];
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  
  local_1b0 = (UStaticMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_180 = local_118;
  if (pfVar4 != (float *)0x0) {
    local_180 = pfVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_res10[0] = 0;
  local_188 = local_108;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    local_188 = (float *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_1d0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  this_02 = local_1b0;
  bVar11 = local_res10[0];
  bVar22 = local_1d0 == 0;
  uVar18 = (ulonglong)local_res10[0];
  local_170 = local_1b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1b0 == (UStaticMeshComponent *)0x0) {
    return;
  }
  this_01 = (local_1b0->StaticMesh).field0_0x0.DebugPtr;
  local_178 = this_01;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_01 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_01 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
      goto LAB_148002ac9;
    }
  }
  if (this_01 == (UStaticMesh *)0x0) {
    return;
  }
LAB_148002ac9:
  if (this_01->bAllowCPUAccess == '\0') {
    if (1 < (byte)LogStaticMesh._0_1_) {
      local_190 = (FName)this_01->_padding_;
      ::FName::ToString(&local_190,&local_160);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    UStaticMesh::GetBounds(this_01,(TBoxSphereBounds<double,double> *)&local_f8._s_0);
    local_120 = 1;
    local_150[0] = local_f8._s_0.X - local_e0;
    local_150[1] = local_f8._s_0.Y - local_d8;
    local_150[3] = local_f8._s_0.X + local_e0;
    local_130 = local_f8._s_0.Y + local_d8;
    local_150[2] = local_f8._s_0.Z - local_d0;
    local_128 = local_f8._s_0.Z + local_d0;
    if (bVar11 < 3) {
      dVar2 = local_150[uVar18];
    }
    else {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar2 = local_150[uVar18];
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    dVar3 = local_150[uVar18 + 3];
    uVar14 = UStaticMesh::GetNumLODs(this_01);
    UStaticMeshComponent::SetLODDataCount(this_02,uVar14,uVar14);
    fVar10 = __real_437f0000;
    fVar9 = __real_3f000000;
    fVar8 = __real_3f800000;
    local_1c0[2] = (this_02->LODData).ArrayNum;
    uVar18 = (ulonglong)(int)local_1c0[2];
    uVar14 = 0;
    pFVar21 = (this_02->LODData).AllocatorInstance.Data;
    local_168 = pFVar21 + uVar18 * 0x50;
    local_1cc = 0;
    while( true ) {
      pFVar12 = local_168;
      local_1a8 = pFVar21;
      if ((this_02->LODData).ArrayNum != (int)uVar18) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar21 == pFVar12) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(this_02,uVar14);
      if ((*(longlong *)(pFVar21 + 0x40) != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODInfo.OverrideVertexColors == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                              ,0x56,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = UStaticMesh::GetRenderData(this_01);
      uVar17 = 0;
      if ((int)uVar14 < (pFVar16->LODResources).Array.ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar20 = 0;
      lVar6 = *(longlong *)
               ((pFVar16->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
      uVar17 = *(uint *)(lVar6 + 0x1cc);
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0[0] = 0;
      local_1c0[1] = 0;
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar17,&local_1c8,(int *)local_1c0,(int *)(local_1c0 + 1));
      memset(local_1c8.Data + (longlong)iVar15 * 4,0,(longlong)(int)uVar17 << 2);
      pfVar4 = local_188;
      if (uVar17 != 0) {
        do {
          iVar15 = *(int *)(lVar6 + 0x1c8);
          lVar19 = *(longlong *)(lVar6 + 0x1c0);
          if ((2 < bVar11) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7ab,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar24 = (*(float *)((ulonglong)(uVar20 * iVar15) + lVar19 + (ulonglong)bVar11 * 4) -
                   (float)dVar2) * (fVar8 / ((float)dVar3 - (float)dVar2));
          local_1a0._s_0.R = (*pfVar4 - *local_180) * fVar24 + *local_180;
          local_1a0._s_0.G = (pfVar4[1] - local_180[1]) * fVar24 + local_180[1];
          local_1a0._s_0.B = (pfVar4[2] - local_180[2]) * fVar24 + local_180[2];
          local_1a0._s_0.A = (pfVar4[3] - local_180[3]) * fVar24 + local_180[3];
          if (bVar22) {
            fVar24 = local_1a0._s_0.B;
            if (local_1a0._s_0.B <= 0.0) {
              fVar24 = 0.0;
            }
            fVar25 = local_1a0._s_0.G;
            if (local_1a0._s_0.G <= 0.0) {
              fVar25 = 0.0;
            }
            fVar26 = local_1a0._s_0.R;
            if (local_1a0._s_0.R <= 0.0) {
              fVar26 = 0.0;
            }
            fVar23 = local_1a0._s_0.A;
            if (local_1a0._s_0.A <= 0.0) {
              fVar23 = 0.0;
            }
            if (fVar8 <= fVar24) {
              fVar24 = fVar8;
            }
            if (fVar8 <= fVar25) {
              fVar25 = fVar8;
            }
            if (fVar8 <= fVar26) {
              fVar26 = fVar8;
            }
            if (fVar8 <= fVar23) {
              fVar23 = fVar8;
            }
            local_1d4 = CONCAT13((char)(int)(fVar23 * fVar10 + fVar9),
                                 CONCAT12((char)(int)(fVar26 * fVar10 + fVar9),
                                          CONCAT11((char)(int)(fVar25 * fVar10 + fVar9),
                                                   (char)(int)(fVar24 * fVar10 + fVar9))));
          }
          else {
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_1a0._s_0);
          }
          uVar14 = 0;
          if ((int)uVar20 < (int)local_1c0[0]) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar19 = (longlong)(int)uVar20;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(local_1c8.Data + lVar19 * 4) = local_1d4;
          this_01 = local_178;
          this_02 = local_170;
          pFVar21 = local_1a8;
          uVar14 = local_1cc;
        } while (uVar20 < uVar17);
      }
      this = ::operator_new(0x50);
      this_00 = (FColorVertexBuffer *)0x0;
      if (this != (FColorVertexBuffer *)0x0) {
        this_00 = FColorVertexBuffer::FColorVertexBuffer(this);
      }
      *(FColorVertexBuffer **)(pFVar21 + 0x40) = this_00;
      FColorVertexBuffer::InitFromColorArray(this_00,(FColor *)local_1c8.Data,local_1c0[0],4,true);
      BeginInitResource(*(FRenderResource **)(pFVar21 + 0x40),(FRenderCommandPipe *)0x0);
      uVar14 = uVar14 + 1;
      local_1cc = uVar14;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      uVar18 = (ulonglong)local_1c0[2];
      pFVar21 = pFVar21 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this_02);
    this_02->bEnableVertexColorMeshPainting = '\0';
  }
  return;
}

// execPaintVerticesSingleColor @ 1480030b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UStaticMesh *pUVar4;
  code *pcVar5;
  UStaticMeshComponent *this;
  bool bVar6;
  uint uVar7;
  FStaticMeshRenderData *pFVar8;
  FColorVertexBuffer *this_00;
  FColorVertexBuffer *pFVar9;
  uint uVar10;
  FLinearColor *this_01;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  FColor local_48 [2];
  UStaticMeshComponent *local_40;
  FLinearColor local_38;
  
  local_40 = (UStaticMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  this_01 = &local_38;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    this_01 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_40 != (UStaticMeshComponent *)0x0) {
    pUVar4 = (local_40->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (pUVar4 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar4 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    uVar7 = UStaticMesh::GetNumLODs(pUVar4);
    UStaticMeshComponent::SetLODDataCount(this,uVar7,uVar7);
    FLinearColor::ToFColor(this_01,SUB81(local_48,0));
    iVar2 = (this->LODData).ArrayNum;
    pFVar11 = (this->LODData).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)iVar2 * 0x50;
    pFVar9 = (FColorVertexBuffer *)0x0;
    while( true ) {
      if ((this->LODData).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar11 == pFVar12) break;
      uVar7 = (uint)pFVar9;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(this,uVar7);
      if ((*(longlong *)(pFVar11 + 0x40) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x1b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      pFVar8 = UStaticMesh::GetRenderData(pUVar4);
      uVar10 = 0;
      if ((int)uVar7 < (pFVar8->LODResources).Array.ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)(*(longlong *)
                          ((pFVar8->LODResources).Array.AllocatorInstance.Data +
                          (longlong)(int)uVar7 * 8) + 0x1cc);
      this_00 = ::operator_new(0x50);
      pFVar9 = (FColorVertexBuffer *)0x0;
      if (this_00 != (FColorVertexBuffer *)0x0) {
        pFVar9 = FColorVertexBuffer::FColorVertexBuffer(this_00);
      }
      *(FColorVertexBuffer **)(pFVar11 + 0x40) = pFVar9;
      FColorVertexBuffer::InitFromColorArray(pFVar9,local_48,uVar10,0,true);
      BeginInitResource(*(FRenderResource **)(pFVar11 + 0x40),(FRenderCommandPipe *)0x0);
      pFVar9 = (FColorVertexBuffer *)(ulonglong)(uVar7 + 1);
      pFVar11 = pFVar11 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    this->bEnableVertexColorMeshPainting = '\0';
  }
  return;
}

// execRemovePaintedVertices @ 1480033b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMeshVertexPainterKismetLibrary::execRemovePaintedVertices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UStaticMesh *pUVar3;
  code *pcVar4;
  UStaticMeshComponent *this;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  UStaticMeshComponent *local_res20;
  
  iVar7 = 0;
  local_res20 = (UStaticMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UStaticMeshComponent *)0x0) {
    pUVar3 = (local_res20->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (pUVar3 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pFVar8 = (this->LODData).AllocatorInstance.Data;
    iVar1 = (this->LODData).ArrayNum;
    pFVar6 = pFVar8 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((this->LODData).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar8 == pFVar6) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(this,iVar7);
      if ((*(longlong *)(pFVar8 + 0x40) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x82,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = iVar7 + 1;
      pFVar8 = pFVar8 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    this->bEnableVertexColorMeshPainting = '\x01';
  }
  return;
}

