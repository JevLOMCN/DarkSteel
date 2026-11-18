// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbce010

UClass * __cdecl UAddTorusPrimitiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddTorusPrimitiveTool",
               &Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddTorusPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddTorusPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddTorusPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton;
}

// UAddTorusPrimitiveTool @ 14cbdca60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddTorusPrimitiveTool * __thiscall
UAddTorusPrimitiveTool::UAddTorusPrimitiveTool(UAddTorusPrimitiveTool *this,FVTableHelper *param_1)

{
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  return this;
}

// UAddTorusPrimitiveTool @ 14cbdcac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAddTorusPrimitiveTool * __thiscall
UAddTorusPrimitiveTool::UAddTorusPrimitiveTool
          (UAddTorusPrimitiveTool *this,FObjectInitializer *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FText *pFVar6;
  FName local_res8;
  FText local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"ShapeSettings");
  FVar1 = *pFVar4;
  pUVar5 = UProceduralTorusToolProperties::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  UAddPrimitiveTool::UAddPrimitiveTool((UAddPrimitiveTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  ::FString::operator=((FString *)&this->field_0x110,L"Torus");
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UAddPrimitiveTool",L"TorusToolName",L"Create Torus");
  pIVar2 = *(ITextData **)&this->field_0x98;
  pIVar3 = (pFVar6->TextData).Reference;
  if (pIVar2 != pIVar3) {
    *(ITextData **)&this->field_0x98 = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&this->field_0xa0 = pFVar6->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UAddTorusPrimitiveTool @ 14cbe0040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAddTorusPrimitiveTool::~UAddTorusPrimitiveTool(UAddTorusPrimitiveTool *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleClickTool__;
  *(undefined ***)&this->field_0xc8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IInteractiveToolCameraFocusAPI__;
  UAddPrimitiveTool::~UAddPrimitiveTool((UAddPrimitiveTool *)this);
  return;
}

// GenerateMesh @ 14cbed940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAddTorusPrimitiveTool::GenerateMesh(UAddTorusPrimitiveTool *this,FDynamicMesh3 *param_1)

{
  undefined1 *this_00;
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  TPolygon2<double> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  FScriptContainerElement *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  TPolygon2<double> local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  TPolygon2<double> local_230 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [160];
  undefined2 local_148;
  TPolygon2<double> local_118;
  ForAnyElementType local_108;
  undefined8 local_100;
  TVector<double>_u_0 local_f8;
  TQuaternion<double>_u_0 TStack_e0;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  ECapType local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  undefined2 local_80;
  float local_7c;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong uVar10;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  uVar8 = 0;
  local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = &this->field_0xe8;
  local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  TStack_e0._s_0.Y = 0.0;
  TStack_e0._s_0.Z = 0.0;
  local_98 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_90 = _UNK_150689688;
  TStack_e0._s_0.X = 0.0;
  TStack_e0._s_0.W = __real_3ff0000000000000;
  local_88 = __real_3ff0000000000000;
  local_1e8._8_8_ = (FScriptContainerElement *)0x0;
  local_1e8._16_8_ = 0;
  local_1e8._24_8_ = (FScriptContainerElement *)0x0;
  local_1e8._32_8_ = 0;
  local_1e8._40_8_ = (FScriptContainerElement *)0x0;
  local_1e8._48_8_ = 0;
  local_1e8._56_8_ = (FScriptContainerElement *)0x0;
  local_1e8._64_8_ = 0;
  local_1e8._72_8_ = (FScriptContainerElement *)0x0;
  local_1e8._80_8_ = 0;
  local_1e8._88_8_ = (FScriptContainerElement *)0x0;
  local_1e8._96_8_ = 0;
  local_1e8._104_8_ = (FScriptContainerElement *)0x0;
  local_1e8._112_8_ = 0;
  local_1e8._120_8_ = (FScriptContainerElement *)0x0;
  local_1e8._128_8_ = 0;
  local_1e8._136_8_ = (FScriptContainerElement *)0x0;
  local_1e8._144_8_ = 0;
  local_1e8[0x98] = false;
  local_148 = 0x100;
  local_1e8._0_8_ = &___7FGeneralizedCylinderGenerator_Geometry_UE__6B_;
  local_118.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Vertices.ArrayNum = 0;
  local_118.Vertices.ArrayMax = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100._0_4_ = 0;
  local_100._4_4_ = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a0._0_1_ = false;
  local_a0._1_1_ = false;
  local_9c = FlatTriangulation;
  local_80._0_1_ = false;
  local_80._1_1_ = false;
  local_7c = 100.0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  uVar10 = uVar8;
  if (*(longlong *)this_00 != 0) {
    pUVar6 = UProceduralTorusToolProperties::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
    if (bVar3) {
      uVar10 = *(ulonglong *)this_00;
    }
  }
  pTVar7 = UE::Geometry::TPolygon2<double>::MakeCircle
                     (local_230,(double)*(float *)(uVar10 + 0xc4),*(int *)(uVar10 + 0xcc),0.0);
  if (&local_118 != pTVar7) {
    if (local_118.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Vertices.AllocatorInstance.Data);
    }
    local_118.Vertices.AllocatorInstance.Data = (pTVar7->Vertices).AllocatorInstance.Data;
    (pTVar7->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Vertices.ArrayNum = (pTVar7->Vertices).ArrayNum;
    local_118.Vertices.ArrayMax = (pTVar7->Vertices).ArrayMax;
    (pTVar7->Vertices).ArrayNum = 0;
    (pTVar7->Vertices).ArrayMax = 0;
  }
  if (local_230[0].Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230[0].Vertices.AllocatorInstance.Data);
  }
  UE::Geometry::TPolygon2<double>::MakeCircle
            (&local_258,(double)*(float *)(uVar10 + 0xc0),*(int *)(uVar10 + 200),0.0);
  uVar10 = uVar8;
  if (0 < local_258.Vertices.ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      iVar5 = local_258.Vertices.ArrayNum;
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_280 = (FScriptContainerElement *)(longlong)iVar5;
        local_288 = (undefined8 *)(longlong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = local_258.Vertices.ArrayNum;
      }
      uVar1 = *(undefined8 *)(local_258.Vertices.AllocatorInstance.Data + 8 + uVar8);
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_280 = (FScriptContainerElement *)(longlong)iVar5;
        local_288 = (undefined8 *)(longlong)(int)uVar9;
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
      local_248 = *(undefined8 *)(local_258.Vertices.AllocatorInstance.Data + uVar8);
      local_238 = 0;
      uStack_240 = uVar1;
      if (local_108.Data <= (FScriptContainerElement *)&local_248) {
        if ((FScriptContainerElement *)&local_248 <
            local_108.Data + (longlong)local_100._4_4_ * 0x18) {
          local_270 = (longlong)(int)local_100;
          local_268 = 0x18;
          local_288 = &local_248;
          local_280 = local_108.Data;
          local_278 = (longlong)local_100._4_4_;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      iVar5 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100._0_4_ = iVar5 + 1;
      uVar8 = uVar8 + 0x10;
      *(undefined8 *)(local_108.Data + (longlong)iVar5 * 0x18) = local_248;
      *(undefined8 *)(local_108.Data + (longlong)iVar5 * 0x18 + 8) = uStack_240;
      *(undefined8 *)(local_108.Data + (longlong)iVar5 * 0x18 + 0x10) = local_238;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < local_258.Vertices.ArrayNum);
  }
  local_a0._0_1_ = false;
  local_a0._1_1_ = true;
  local_148 = CONCAT11(local_148._1_1_,*(char *)(*(longlong *)this_00 + 0xb0) == '\x02');
  if ((int)local_100 < 1) {
    local_288 = (undefined8 *)0x0;
    local_280 = (FScriptContainerElement *)(longlong)(int)local_100;
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
  local_208 = 0;
  uStack_200 = 0;
  local_f8._s_0.Z = (double)*(undefined8 *)(local_108.Data + 0x10);
  local_f8._s_0.X = (double)*(undefined8 *)local_108.Data;
  local_f8._s_0.Y = (double)*(undefined8 *)(local_108.Data + 8);
  local_1f8 = ___xmm_3ff00000000000000000000000000000;
  dStack_1f0 = _UNK_15061cbc8;
  TStack_e0._s_0.X = 0.0;
  TStack_e0._s_0.Y = 0.0;
  TStack_e0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  TStack_e0._s_0.W = _UNK_15061cbc8;
  UE::Geometry::FGeneralizedCylinderGenerator::Generate((FGeneralizedCylinderGenerator *)local_1e8);
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)local_1e8);
  if (local_258.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Vertices.AllocatorInstance.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_118.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Vertices.AllocatorInstance.Data);
  }
  local_1e8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_1e8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._136_8_);
  }
  if ((FScriptContainerElement *)local_1e8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._120_8_);
  }
  if ((FScriptContainerElement *)local_1e8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._104_8_);
  }
  if ((FScriptContainerElement *)local_1e8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._88_8_);
  }
  if ((FScriptContainerElement *)local_1e8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._72_8_);
  }
  if ((FScriptContainerElement *)local_1e8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._56_8_);
  }
  if ((FScriptContainerElement *)local_1e8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._40_8_);
  }
  if ((FScriptContainerElement *)local_1e8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._24_8_);
  }
  if ((FScriptContainerElement *)local_1e8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 14cbeef00

UClass * __cdecl UAddTorusPrimitiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"AddTorusPrimitiveTool",
               &Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton,
               StaticRegisterNativesUAddTorusPrimitiveTool,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAddTorusPrimitiveTool>,
               InternalVTableHelperCtorCaller<UAddTorusPrimitiveTool>,local_res8,
               UAddPrimitiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAddTorusPrimitiveTool.InnerSingleton;
}

// StaticRegisterNativesUAddTorusPrimitiveTool @ 14cbf6a50

void __cdecl UAddTorusPrimitiveTool::StaticRegisterNativesUAddTorusPrimitiveTool(void)

{
  return;
}

