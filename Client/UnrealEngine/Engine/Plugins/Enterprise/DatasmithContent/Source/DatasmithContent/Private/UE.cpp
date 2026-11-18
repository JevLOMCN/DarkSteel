// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 66

// Construct<FDatasmithReimportOptions> @ 14e2ea190

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithReimportOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// ConstructForTests<FDatasmithReimportOptions> @ 14e2ea1a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDatasmithReimportOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// Destruct<FDatasmithReimportOptions> @ 14e2ea1b0

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithReimportOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithReimportOptions> @ 14e2ea1c0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithReimportOptions>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithMeshSectionInfoTemplate> @ 14e2ea1f0

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithMeshSectionInfoTemplate>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FDatasmithMeshSectionInfoTemplate> @ 14e2ea200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshSectionInfoTemplate>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FDatasmithMeshSectionInfoTemplate> @ 14e2ea210

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithMeshSectionInfoTemplate>(void *param_1)

{
  return;
}

// Copy<FDatasmithMeshSectionInfoTemplate> @ 14e2ea220

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithMeshSectionInfoTemplate>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithStaticMaterialTemplate> @ 14e2ea490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithStaticMaterialTemplate>(void *param_1)

{
  UMaterialInterface *pUVar1;
  FStaticMaterial *pFVar2;
  undefined1 auStack_68 [32];
  FStaticMaterial FStack_48;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pFVar2 = FStaticMaterial::FStaticMaterial(&FStack_48);
  *(FName *)param_1 = pFVar2->MaterialSlotName;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar2->MaterialInterface).field0_0x0.DebugPtr, pUVar1 != (UMaterialInterface *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)((longlong)param_1 + 8) =
       (pFVar2->MaterialInterface).field0_0x0;
  return;
}

// ConstructForTests<FDatasmithStaticMaterialTemplate> @ 14e2ea4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticMaterialTemplate>(void *param_1)

{
  UMaterialInterface *pUVar1;
  FStaticMaterial *pFVar2;
  undefined1 auStack_68 [32];
  FStaticMaterial FStack_48;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pFVar2 = FStaticMaterial::FStaticMaterial(&FStack_48);
  *(FName *)param_1 = pFVar2->MaterialSlotName;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar2->MaterialInterface).field0_0x0.DebugPtr, pUVar1 != (UMaterialInterface *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(TObjectPtr<UMaterialInterface>_u_0 *)((longlong)param_1 + 8) =
       (pFVar2->MaterialInterface).field0_0x0;
  return;
}

// Construct<FDatasmithStaticMeshImportOptions> @ 14e2ea4b0

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithStaticMeshImportOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010302;
  return;
}

// Destruct<FDatasmithStaticMaterialTemplate> @ 14e2ea4c0

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithStaticMaterialTemplate>(void *param_1)

{
  return;
}

// ConstructForTests<FDatasmithStaticMeshImportOptions> @ 14e2ea4d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticMeshImportOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010302;
  return;
}

// Destruct<FDatasmithStaticMeshImportOptions> @ 14e2ea4e0

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithStaticMeshImportOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithStaticMaterialTemplate> @ 14e2ea770

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithStaticMaterialTemplate>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDatasmithStaticMeshImportOptions> @ 14e2ea800

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithStaticMeshImportOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithMeshBuildSettingsTemplate> @ 14e2eab40

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithMeshBuildSettingsTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(byte *)param_1 = *(byte *)param_1 & 0xcf | 0x4f;
  return;
}

// ConstructForTests<FDatasmithMeshBuildSettingsTemplate> @ 14e2eab60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshBuildSettingsTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(byte *)param_1 = *(byte *)param_1 & 0xcf | 0x4f;
  return;
}

// Construct<FDatasmithAssetImportOptions> @ 14e2eab80

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithAssetImportOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDatasmithMeshBuildSettingsTemplate> @ 14e2eab90

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithMeshBuildSettingsTemplate>(void *param_1)

{
  return;
}

// ConstructForTests<FDatasmithAssetImportOptions> @ 14e2eaba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithAssetImportOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDatasmithAssetImportOptions> @ 14e2eabb0

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithAssetImportOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithMeshBuildSettingsTemplate> @ 14e2eacc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithMeshBuildSettingsTemplate>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FDatasmithAssetImportOptions> @ 14e2eacf0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithAssetImportOptions>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FDatasmithStaticParameterSetTemplate> @ 14e2eb1f0

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithStaticParameterSetTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FDatasmithStaticParameterSetTemplate> @ 14e2eb230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticParameterSetTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FDatasmithStaticParameterSetTemplate> @ 14e2eb260

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithStaticParameterSetTemplate>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FDatasmithStaticParameterSetTemplate> @ 14e2eb2a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithStaticParameterSetTemplate>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      operator=(this,(TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                      *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithImportInfo> @ 14e2ebcf0

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithImportInfo>(void *param_1)

{
  return;
}

// ConstructForTests<FDatasmithImportInfo> @ 14e2ebd00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDatasmithImportInfo>(void *param_1)

{
  return;
}

// Construct<FDatasmithPostProcessSettingsTemplate> @ 14e2ec2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithPostProcessSettingsTemplate>(void *param_1)

{
  double dVar1;
  FPostProcessSettings *pFVar2;
  uint uVar3;
  undefined1 auStack_7a8 [32];
  FPostProcessSettings FStack_788;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  pFVar2 = FPostProcessSettings::FPostProcessSettings(&FStack_788);
  uVar3 = (pFVar2->bOverride_WhiteTemp ^ *(uint *)param_1) & 1 ^ *(uint *)param_1;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 8) = pFVar2->WhiteTemp;
  uVar3 = ((byte)pFVar2->field_0xd ^ uVar3) & 4 ^ uVar3;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 0xc) = pFVar2->VignetteIntensity;
  uVar3 = (*(byte *)pFVar2 >> 2 ^ uVar3) & 2 ^ uVar3;
  *(uint *)param_1 = uVar3;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = (pFVar2->ColorSaturation).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x18) = dVar1;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.W;
  *(double *)((longlong)param_1 + 0x20) = (pFVar2->ColorSaturation).field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  uVar3 = ((uint)(byte)pFVar2->field_0x9 << 3 ^ uVar3) & 8 ^ uVar3;
  *(uint *)param_1 = uVar3;
  *(uchar *)((longlong)param_1 + 0x30) = (pFVar2->AutoExposureMethod).Value;
  uVar3 = (byte)pFVar2->field_0x8 >> 3 & 0x1ffffff0 | uVar3 & 0xffffffef;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 0x34) = pFVar2->CameraISO;
  *(uint *)param_1 = ((byte)pFVar2->field_0x8 >> 1 ^ uVar3) & 0x20 ^ uVar3;
  *(float *)((longlong)param_1 + 0x38) = pFVar2->CameraShutterSpeed;
  *(byte *)((longlong)param_1 + 4) =
       *(byte *)((longlong)param_1 + 4) ^
       (pFVar2->bOverride_DepthOfFieldFstop ^ *(byte *)((longlong)param_1 + 4)) & 1;
  *(float *)((longlong)param_1 + 0x3c) = pFVar2->DepthOfFieldFstop;
  if (FStack_788.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(FStack_788.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FDatasmithPostProcessSettingsTemplate> @ 14e2ec310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithPostProcessSettingsTemplate>(void *param_1)

{
  double dVar1;
  FPostProcessSettings *pFVar2;
  uint uVar3;
  undefined1 auStack_7a8 [32];
  FPostProcessSettings FStack_788;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  pFVar2 = FPostProcessSettings::FPostProcessSettings(&FStack_788);
  uVar3 = (pFVar2->bOverride_WhiteTemp ^ *(uint *)param_1) & 1 ^ *(uint *)param_1;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 8) = pFVar2->WhiteTemp;
  uVar3 = ((byte)pFVar2->field_0xd ^ uVar3) & 4 ^ uVar3;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 0xc) = pFVar2->VignetteIntensity;
  uVar3 = (*(byte *)pFVar2 >> 2 ^ uVar3) & 2 ^ uVar3;
  *(uint *)param_1 = uVar3;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = (pFVar2->ColorSaturation).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x18) = dVar1;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.W;
  *(double *)((longlong)param_1 + 0x20) = (pFVar2->ColorSaturation).field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  uVar3 = ((uint)(byte)pFVar2->field_0x9 << 3 ^ uVar3) & 8 ^ uVar3;
  *(uint *)param_1 = uVar3;
  *(uchar *)((longlong)param_1 + 0x30) = (pFVar2->AutoExposureMethod).Value;
  uVar3 = (byte)pFVar2->field_0x8 >> 3 & 0x1ffffff0 | uVar3 & 0xffffffef;
  *(uint *)param_1 = uVar3;
  *(float *)((longlong)param_1 + 0x34) = pFVar2->CameraISO;
  *(uint *)param_1 = ((byte)pFVar2->field_0x8 >> 1 ^ uVar3) & 0x20 ^ uVar3;
  *(float *)((longlong)param_1 + 0x38) = pFVar2->CameraShutterSpeed;
  *(byte *)((longlong)param_1 + 4) =
       *(byte *)((longlong)param_1 + 4) ^
       (pFVar2->bOverride_DepthOfFieldFstop ^ *(byte *)((longlong)param_1 + 4)) & 1;
  *(float *)((longlong)param_1 + 0x3c) = pFVar2->DepthOfFieldFstop;
  if (FStack_788.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(FStack_788.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FDatasmithPostProcessSettingsTemplate> @ 14e2ec320

void __cdecl
UE::CoreUObject::Private::Destruct<FDatasmithPostProcessSettingsTemplate>(void *param_1)

{
  return;
}

// Copy<FDatasmithPostProcessSettingsTemplate> @ 14e2ec3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithPostProcessSettingsTemplate>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithCameraFocusSettingsTemplate> @ 14e2ec9d0

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithCameraFocusSettingsTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FDatasmithCameraFocusSettingsTemplate> @ 14e2ec9e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraFocusSettingsTemplate>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FDatasmithCameraFocusSettingsTemplate> @ 14e2eca00

void __cdecl
UE::CoreUObject::Private::Destruct<FDatasmithCameraFocusSettingsTemplate>(void *param_1)

{
  return;
}

// Copy<FDatasmithCameraFocusSettingsTemplate> @ 14e2ecad0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithCameraFocusSettingsTemplate>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FDatasmithCameraLensSettingsTemplate> @ 14e2ed310

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithCameraLensSettingsTemplate>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FDatasmithCameraLensSettingsTemplate> @ 14e2ed320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraLensSettingsTemplate>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FDatasmithCameraLensSettingsTemplate> @ 14e2ed330

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithCameraLensSettingsTemplate>(void *param_1)

{
  return;
}

// Copy<FDatasmithCameraLensSettingsTemplate> @ 14e2ed4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithCameraLensSettingsTemplate>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithCameraFilmbackSettingsTemplate> @ 14e2edae0

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithCameraFilmbackSettingsTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDatasmithCameraFilmbackSettingsTemplate> @ 14e2edaf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraFilmbackSettingsTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDatasmithCameraFilmbackSettingsTemplate> @ 14e2edb00

void __cdecl
UE::CoreUObject::Private::Destruct<FDatasmithCameraFilmbackSettingsTemplate>(void *param_1)

{
  return;
}

// Copy<FDatasmithCameraFilmbackSettingsTemplate> @ 14e2edb10

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithCameraFilmbackSettingsTemplate>
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

// Construct<FDatasmithCameraLookatTrackingSettingsTemplate> @ 14e2edc90

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithCameraLookatTrackingSettingsTemplate>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// ConstructForTests<FDatasmithCameraLookatTrackingSettingsTemplate> @ 14e2edcc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraLookatTrackingSettingsTemplate>
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// Destruct<FDatasmithCameraLookatTrackingSettingsTemplate> @ 14e2edcf0

void __cdecl
UE::CoreUObject::Private::Destruct<FDatasmithCameraLookatTrackingSettingsTemplate>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDatasmithCameraLookatTrackingSettingsTemplate> @ 14e2edd10

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithCameraLookatTrackingSettingsTemplate>
          (void *param_1,void *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_1;
    do {
      pbVar1 = pbVar3 + ((longlong)param_2 - (longlong)param_1);
      bVar2 = (*pbVar3 ^ *pbVar1) & 1 ^ *pbVar3;
      *pbVar3 = bVar2;
      *pbVar3 = (bVar2 ^ *pbVar1) & 2 ^ bVar2;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(pbVar3 + 8),
                 (TPersistentObjectPtr<FSoftObjectPath> *)(pbVar1 + 8));
      param_3 = param_3 + -1;
      pbVar3 = pbVar3 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithRetessellationOptions> @ 14e2ee700

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithRetessellationOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f50624dd2f1a9fc;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FDatasmithRetessellationOptions> @ 14e2ee740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithRetessellationOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f50624dd2f1a9fc;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FDatasmithRetessellationOptions> @ 14e2ee780

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithRetessellationOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithRetessellationOptions> @ 14e2eea50

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithRetessellationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithTessellationOptions> @ 14e2eed90

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithTessellationOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f50624dd2f1a9fc;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// ConstructForTests<FDatasmithTessellationOptions> @ 14e2eedc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithTessellationOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f50624dd2f1a9fc;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// Destruct<FDatasmithTessellationOptions> @ 14e2eee30

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithTessellationOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithTessellationOptions> @ 14e2eee80

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithTessellationOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithMeshSectionInfoMapTemplate> @ 14e2eeec0

void __cdecl
UE::CoreUObject::Private::Construct<FDatasmithMeshSectionInfoMapTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FDatasmithMeshSectionInfoMapTemplate> @ 14e2eef00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshSectionInfoMapTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FDatasmithMeshSectionInfoMapTemplate> @ 14e2eef30

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithMeshSectionInfoMapTemplate>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FDatasmithMeshSectionInfoMapTemplate> @ 14e2eefb0

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithMeshSectionInfoMapTemplate>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        iVar2 = *(int *)&pTVar1->field_0x8;
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,(ForAnyElementType *)this,(int *)&this->field_0x8,
                   (int *)&this->field_0xc);
        *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar1->field_0x30;
        *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar1->field_0x34;
        if (&this->field_0x10 != &pTVar1->field_0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&pTVar1->field_0x10);
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)pTVar1,(longlong)iVar2 << 4);
        }
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDatasmithImportBaseOptions> @ 14e2ef0f0

void __cdecl UE::CoreUObject::Private::Construct<FDatasmithImportBaseOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010302;
  return;
}

// ConstructForTests<FDatasmithImportBaseOptions> @ 14e2ef110

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDatasmithImportBaseOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010302;
  return;
}

// Destruct<FDatasmithImportBaseOptions> @ 14e2ef130

void __cdecl UE::CoreUObject::Private::Destruct<FDatasmithImportBaseOptions>(void *param_1)

{
  return;
}

// Copy<FDatasmithImportBaseOptions> @ 14e2ef140

bool __cdecl
UE::CoreUObject::Private::Copy<FDatasmithImportBaseOptions>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

