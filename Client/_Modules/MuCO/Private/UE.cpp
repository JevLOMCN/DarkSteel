// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 327

// Construct<FCustomizableObjectTransformParameterValue> @ 14ab968f0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectTransformParameterValue>(void *param_1)

{
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
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectTransformParameterValue> @ 14ab96970

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectTransformParameterValue>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FCustomizableObjectTransformParameterValue> @ 14ab969d0

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectTransformParameterValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FCustomizableObjectTransformParameterValue> @ 14ab969f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectTransformParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    iVar2 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax = iVar3;
    iVar2 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax = iVar3;
    iVar2 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayMax = iVar3;
    iVar2 = (((FString *)((longlong)param_2 + 0x40))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x40))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x40))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x40))->Data).ArrayMax = iVar3;
    iVar2 = (((FString *)((longlong)param_2 + 0x50))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x50))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x50))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x50))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x50))->Data).ArrayMax = iVar3;
    iVar2 = (((FString *)((longlong)param_2 + 0x60))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x60))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x60))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x60))->Data).ArrayMax = iVar3;
    pFVar1 = (FString *)((longlong)param_2 + 0x70);
    iVar2 = (((FString *)((longlong)param_2 + 0x70))->Data).ArrayNum;
    iVar3 = (((FString *)((longlong)param_2 + 0x70))->Data).ArrayMax;
    param_2 = (void *)((longlong)param_2 + 0x80);
    (((FString *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
         (pFVar1->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayNum = iVar2;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayMax = iVar3;
    param_1 = (FString *)((longlong)param_1 + 0x80);
  }
  return true;
}

// Construct<FMutableStreamableBlock> @ 14ab96af0

void __cdecl UE::CoreUObject::Private::Construct<FMutableStreamableBlock>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// GetStructTypeHash<FCustomizableObjectTransformParameterValue> @ 14ab96b00

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectTransformParameterValue>
          (void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  iVar4 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  uStack_28 = *(undefined8 *)((longlong)param_1 + 0x30);
  uStack_20 = *(undefined8 *)((longlong)param_1 + 0x38);
  uStack_18 = *(undefined8 *)((longlong)param_1 + 0x40);
  uVar2 = FCrc::MemCrc_DEPRECATED(&uStack_28,0x18,0);
  uStack_28 = *(undefined8 *)((longlong)param_1 + 0x10);
  uStack_20 = *(undefined8 *)((longlong)param_1 + 0x18);
  uStack_18 = *(undefined8 *)((longlong)param_1 + 0x20);
  uStack_10 = *(undefined8 *)((longlong)param_1 + 0x28);
  uVar3 = FCrc::MemCrc_DEPRECATED(&uStack_28,0x20,0);
  uStack_28 = *(undefined8 *)((longlong)param_1 + 0x50);
  uStack_20 = *(undefined8 *)((longlong)param_1 + 0x58);
  uStack_18 = *(undefined8 *)((longlong)param_1 + 0x60);
  uVar2 = uVar2 * 0x40 + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2;
  uVar3 = FCrc::MemCrc_DEPRECATED(&uStack_28,0x18,0);
  uVar2 = uVar2 * 0x40 + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2;
  uVar3 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar6 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar2 = (uVar3 - uVar6) - uVar1 ^ uVar6 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar3 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// ConstructForTests<FMutableStreamableBlock> @ 14ab96b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableStreamableBlock>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMutableStreamableBlock> @ 14ab96b20

void __cdecl UE::CoreUObject::Private::Destruct<FMutableStreamableBlock>(void *param_1)

{
  return;
}

// Copy<FMutableStreamableBlock> @ 14ab96b30

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableStreamableBlock>(void *param_1,void *param_2,int param_3)

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

// Construct<FMutableSkinWeightProfileInfo> @ 14ab96be0

void __cdecl UE::CoreUObject::Private::Construct<FMutableSkinWeightProfileInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FMutableSkinWeightProfileInfo> @ 14ab96c00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMutableSkinWeightProfileInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMutableSkinWeightProfileInfo> @ 14ab96c20

void __cdecl UE::CoreUObject::Private::Destruct<FMutableSkinWeightProfileInfo>(void *param_1)

{
  return;
}

// Construct<FCustomizableObjectVectorParameterValue> @ 14ab96cb0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectVectorParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectVectorParameterValue> @ 14ab96d10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectVectorParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Copy<FMutableSkinWeightProfileInfo> @ 14ab96d30

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableSkinWeightProfileInfo>
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

// Destruct<FCustomizableObjectVectorParameterValue> @ 14ab96d60

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectVectorParameterValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FCustomizableObjectVectorParameterValue> @ 14ab96d80

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectVectorParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      iVar2 = pFVar1[1].Data.ArrayNum;
      iVar3 = pFVar1[1].Data.ArrayMax;
      this[1].Data.AllocatorInstance.Data = pFVar1[1].Data.AllocatorInstance.Data;
      this[1].Data.ArrayNum = iVar2;
      this[1].Data.ArrayMax = iVar3;
      iVar2 = pFVar1[2].Data.ArrayNum;
      iVar3 = pFVar1[2].Data.ArrayMax;
      this[2].Data.AllocatorInstance.Data = pFVar1[2].Data.AllocatorInstance.Data;
      this[2].Data.ArrayNum = iVar2;
      this[2].Data.ArrayMax = iVar3;
      param_3 = param_3 + -1;
      this = this + 3;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectVectorParameterValue> @ 14ab96e80

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectVectorParameterValue>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  uVar2 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x10),0x10,0);
  uVar5 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar6 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xd;
  uVar2 = (uVar5 - uVar6) - uVar1 ^ uVar6 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar5 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Construct<FAnimBpOverridePhysicsAssetsInfo> @ 14ab97140

void __cdecl UE::CoreUObject::Private::Construct<FAnimBpOverridePhysicsAssetsInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  return;
}

// ConstructForTests<FAnimBpOverridePhysicsAssetsInfo> @ 14ab971c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimBpOverridePhysicsAssetsInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  return;
}

// Destruct<FAnimBpOverridePhysicsAssetsInfo> @ 14ab97230

void __cdecl UE::CoreUObject::Private::Destruct<FAnimBpOverridePhysicsAssetsInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FAnimBpOverridePhysicsAssetsInfo> @ 14ab97270

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimBpOverridePhysicsAssetsInfo>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_2 + 8));
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x30),
                 (FSoftObjectPath *)((longlong)param_2 + 0x30));
      puVar1 = (undefined4 *)((longlong)param_2 + 0x50);
      param_2 = (void *)((longlong)param_2 + 0x58);
      *(undefined4 *)((longlong)param_1 + 0x50) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectMaterialParameterValue> @ 14ab97310

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectMaterialParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectMaterialParameterValue> @ 14ab97340

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectMaterialParameterValue>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCustomizableObjectMaterialParameterValue> @ 14ab97380

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectMaterialParameterValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectMaterialParameterValue> @ 14ab97430

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectMaterialParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    pFVar2 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(FScriptContainerElement **)((longlong)param_1 + 0x20) = pFVar2;
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x28),
               (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (int *)((longlong)param_1 + 0x38);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectMaterialParameterValue> @ 14ab974e0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectMaterialParameterValue>
          (void *param_1)

{
  FObjectPtr *pFVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  FObjectPtr *this;
  uint uVar9;
  undefined1 auStackX_8 [8];
  FString FStack_38;
  
  iVar5 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)param_1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  this = *(FObjectPtr **)((longlong)param_1 + 0x28);
  iVar5 = *(int *)((longlong)param_1 + 0x30);
  pFVar1 = this + iVar5;
  uVar7 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar9 = uVar4 - uVar7 ^ uVar7 >> 0xd;
  uVar4 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar4 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xf;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (this == pFVar1) break;
    FObjectPtr::GetPathName(this,&FStack_38);
    FVar3.Data = FStack_38.Data.AllocatorInstance.Data;
    iVar6 = FStack_38.Data.ArrayNum + -1;
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
    if (FStack_38.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    uVar4 = uVar4 - uVar7 ^ uVar7 >> 0xd;
    uVar9 = (-0x61c88647 - uVar4) - uVar7 ^ uVar4 << 8;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xd;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 3;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xf;
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    this = this + 1;
  }
  return uVar4;
}

// Construct<FMutableRefSkeletalMeshData> @ 14ab97570

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefSkeletalMeshData>(void *param_1)

{
  memset(param_1,0,0xe8);
  FMutableRefSkeletalMeshData::FMutableRefSkeletalMeshData(param_1);
  return;
}

// ConstructForTests<FMutableRefSkeletalMeshData> @ 14ab975a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRefSkeletalMeshData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xc0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xc0),0);
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  return;
}

// Destruct<FMutableRefSkeletalMeshData> @ 14ab975b0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefSkeletalMeshData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FMutableRefSkeletalMeshData> @ 14ab975c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefSkeletalMeshData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      FSoftObjectPath::operator=((FSoftObjectPath *)(puVar7 + 2),(FSoftObjectPath *)(puVar3 + 2));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[6]);
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 7);
      puVar7[6] = puVar3[6];
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 7)) {
        iVar4 = *(int *)(puVar3 + 8);
        piVar2 = (int *)((longlong)puVar7 + 0x44);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 7))->Data;
        *(int *)(puVar7 + 8) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 << 4);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 9);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 9)) {
        iVar4 = *(int *)(puVar3 + 10);
        piVar2 = (int *)((longlong)puVar7 + 0x54);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 9))->Data;
        *(int *)(puVar7 + 10) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 * 0x60);
          }
        }
      }
      uVar6 = puVar3[0xc];
      puVar7[0xb] = puVar3[0xb];
      puVar7[0xc] = uVar6;
      uVar6 = puVar3[0xe];
      puVar7[0xd] = puVar3[0xd];
      puVar7[0xe] = uVar6;
      uVar6 = puVar3[0x10];
      puVar7[0xf] = puVar3[0xf];
      puVar7[0x10] = uVar6;
      puVar7[0x11] = puVar3[0x11];
      puVar7[0x12] = puVar3[0x12];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[0x13] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[0x13]);
      }
      puVar7[0x13] = puVar3[0x13];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[0x14] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[0x14]);
      }
      puVar7[0x14] = puVar3[0x14];
      puVar7[0x15] = puVar3[0x15];
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(puVar7 + 0x16),(FSoftObjectPath *)(puVar3 + 0x16));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[0x1a] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[0x1a]);
      }
      puVar7[0x1a] = puVar3[0x1a];
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar7 + 0x1b),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x1b));
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 0x1d;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectSkeletalMeshParameterValue> @ 14ab97860

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectSkeletalMeshParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectSkeletalMeshParameterValue> @ 14ab97890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectSkeletalMeshParameterValue>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCustomizableObjectSkeletalMeshParameterValue> @ 14ab978c0

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectSkeletalMeshParameterValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectSkeletalMeshParameterValue> @ 14ab97910

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectSkeletalMeshParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  ForAnyElementType *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar4;
    if (pFVar5 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      iVar2 = *(int *)((longlong)param_2 + 0x30);
      piVar1 = (int *)((longlong)param_1 + 0x34);
      pFVar3 = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
        ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
                  (pFVar5->Data,(TObjectPtr<USkeletalMesh> *)pFVar3,iVar2);
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x38);
    param_2 = (int *)((longlong)param_2 + 0x38);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectSkeletalMeshParameterValue> @ 14ab97a20

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectSkeletalMeshParameterValue>
          (void *param_1)

{
  FObjectPtr *pFVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  FObjectPtr *this;
  uint uVar9;
  undefined1 auStackX_8 [8];
  FString FStack_38;
  
  iVar5 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)param_1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  this = *(FObjectPtr **)((longlong)param_1 + 0x28);
  iVar5 = *(int *)((longlong)param_1 + 0x30);
  pFVar1 = this + iVar5;
  uVar7 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar9 = uVar4 - uVar7 ^ uVar7 >> 0xd;
  uVar4 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar4 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xf;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<USkeletalMesh>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (this == pFVar1) break;
    FObjectPtr::GetPathName(this,&FStack_38);
    FVar3.Data = FStack_38.Data.AllocatorInstance.Data;
    iVar6 = FStack_38.Data.ArrayNum + -1;
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
    if (FStack_38.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    uVar4 = uVar4 - uVar7 ^ uVar7 >> 0xd;
    uVar9 = (-0x61c88647 - uVar4) - uVar7 ^ uVar4 << 8;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xd;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 3;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xf;
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    this = this + 1;
  }
  return uVar4;
}

// Construct<FMutableRefSkeletalMeshSettings> @ 14ab97a30

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefSkeletalMeshSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FMutableRefSkeletalMeshSettings> @ 14ab97a40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMutableRefSkeletalMeshSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FMutableRefSkeletalMeshSettings> @ 14ab97a60

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefSkeletalMeshSettings>(void *param_1)

{
  return;
}

// Copy<FMutableRefSkeletalMeshSettings> @ 14ab97a70

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefSkeletalMeshSettings>
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

// Construct<FCustomizableObjectAnimationSlot> @ 14ab97b20

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectAnimationSlot>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// ConstructForTests<FCustomizableObjectAnimationSlot> @ 14ab97b50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectAnimationSlot>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// Construct<FCustomizableObjectTextureParameterValue> @ 14ab97b80

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectTextureParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCustomizableObjectAnimationSlot> @ 14ab97bf0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectAnimationSlot>(void *param_1)

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

// ConstructForTests<FCustomizableObjectTextureParameterValue> @ 14ab97c10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectTextureParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCustomizableObjectTextureParameterValue> @ 14ab97c40

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectTextureParameterValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectAnimationSlot> @ 14ab97cc0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectAnimationSlot>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x10),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FCustomizableObjectTextureParameterValue> @ 14ab97d30

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectTextureParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  ForAnyElementType *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar4;
    if (pFVar5 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      iVar2 = *(int *)((longlong)param_2 + 0x30);
      piVar1 = (int *)((longlong)param_1 + 0x34);
      pFVar3 = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
        ConstructItems<TObjectPtr<UTexture>,TObjectPtr<UTexture>,int>
                  (pFVar5->Data,(TObjectPtr<UTexture> *)pFVar3,iVar2);
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x38);
    param_2 = (int *)((longlong)param_2 + 0x38);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectTextureParameterValue> @ 14ab97ef0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectTextureParameterValue>(void *param_1)

{
  FObjectPtr *pFVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  FObjectPtr *this;
  uint uVar9;
  undefined1 auStackX_8 [8];
  FString FStack_38;
  
  iVar5 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar8 = L"";
    iVar5 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)param_1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  this = *(FObjectPtr **)((longlong)param_1 + 0x28);
  iVar5 = *(int *)((longlong)param_1 + 0x30);
  pFVar1 = this + iVar5;
  uVar7 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar9 = uVar4 - uVar7 ^ uVar7 >> 0xd;
  uVar4 = (-0x61c88647 - uVar9) - uVar7 ^ uVar9 << 8;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 10;
  uVar4 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xf;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UTexture>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (this == pFVar1) break;
    FObjectPtr::GetPathName(this,&FStack_38);
    FVar3.Data = FStack_38.Data.AllocatorInstance.Data;
    iVar6 = FStack_38.Data.ArrayNum + -1;
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
    if (FStack_38.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    uVar4 = uVar4 - uVar7 ^ uVar7 >> 0xd;
    uVar9 = (-0x61c88647 - uVar4) - uVar7 ^ uVar4 << 8;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xd;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 0xc;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 >> 3;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xf;
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    this = this + 1;
  }
  return uVar4;
}

// Construct<FCustomizableObjectComponentIndex> @ 14ab98440

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectComponentIndex>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FCustomizableObjectComponentIndex> @ 14ab98450

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectComponentIndex>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FCustomizableObjectComponentIndex> @ 14ab98460

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectComponentIndex>(void *param_1)

{
  return;
}

// Copy<FCustomizableObjectComponentIndex> @ 14ab985f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectComponentIndex>
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

// Construct<FMutableRefLODData> @ 14ab987d0

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefLODData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMutableRefLODData> @ 14ab987f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRefLODData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMutableRefLODData> @ 14ab98810

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefLODData>(void *param_1)

{
  return;
}

// Copy<FMutableRefLODData> @ 14ab98820

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefLODData>(void *param_1,void *param_2,int param_3)

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

// Construct<FCustomizableObjectFloatParameterValue> @ 14ab98890

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectFloatParameterValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectFloatParameterValue> @ 14ab988c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectFloatParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCustomizableObjectFloatParameterValue> @ 14ab988f0

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectFloatParameterValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectFloatParameterValue> @ 14ab98930

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectFloatParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x10) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (int *)((longlong)param_1 + 0x38);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectFloatParameterValue> @ 14ab989c0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectFloatParameterValue>(void *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 auStackX_8 [8];
  
  iVar3 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar6 = L"";
    iVar3 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)param_1;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
  uVar4 = *(uint *)((longlong)param_1 + 0x10);
  puVar8 = *(uint **)((longlong)param_1 + 0x28);
  iVar3 = *(int *)((longlong)param_1 + 0x30);
  uVar5 = uVar2 - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  puVar1 = puVar8 + iVar3;
  uVar7 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar4 = (uVar2 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar2 = (uVar5 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar7 ^ uVar2 << 10;
  uVar4 = (uVar7 - uVar4) - uVar2 ^ uVar4 >> 0xf;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar3) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar8 == puVar1) break;
    uVar2 = *puVar8;
    uVar5 = uVar4 - uVar2 ^ uVar2 >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar7 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar2 = (uVar5 - uVar7) - uVar4 ^ uVar7 >> 0xc;
    uVar4 = (uVar4 - uVar2) - uVar7 ^ uVar2 << 0x10;
    uVar5 = (uVar7 - uVar4) - uVar2 ^ uVar4 >> 5;
    uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 10;
    uVar4 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xf;
    puVar8 = puVar8 + 1;
  }
  return uVar4;
}

// Construct<FCustomizableObjectClothingAssetData> @ 14ab98ad0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectClothingAssetData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectClothingAssetData> @ 14ab98b10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectClothingAssetData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FCustomizableObjectClothingAssetData> @ 14ab98b50

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectClothingAssetData>(void *param_1)

{
  DestructItems<FCustomizableObjectClothConfigData,int>
            (*(FCustomizableObjectClothConfigData **)((longlong)param_1 + 0x48),
             *(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FClothLODDataCommon,int>
            (*(FClothLODDataCommon **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectClothingAssetData> @ 14ab98b60

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectClothingAssetData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FClothLODDataCommon *pFVar5;
  FCustomizableObjectClothConfigData *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  ForAnyElementType *pFVar9;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar2) {
        DestructItems<FClothLODDataCommon,int>
                  ((FClothLODDataCommon *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar5 = (FClothLODDataCommon *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x158,8,iVar3,iVar4,pFVar8,iVar3,piVar1);
          ConstructItems<FClothLODDataCommon,FClothLODDataCommon,int>(pFVar8->Data,pFVar5,iVar3);
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + 2),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 4),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar2 + 4));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar8 + 6),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 6));
      pFVar9 = pFVar8 + 9;
      *(undefined4 *)&pFVar8[8].Data = *(undefined4 *)&pFVar2[8].Data;
      if (pFVar9 != pFVar2 + 9) {
        DestructItems<FCustomizableObjectClothConfigData,int>
                  ((FCustomizableObjectClothConfigData *)pFVar9->Data,*(int *)&pFVar8[10].Data);
        iVar3 = *(int *)&pFVar2[10].Data;
        piVar1 = (int *)((longlong)&pFVar8[10].Data + 4);
        pFVar6 = (FCustomizableObjectClothConfigData *)pFVar2[9].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar8[10].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar3,iVar4,pFVar9,iVar3,piVar1);
          ConstructItems<FCustomizableObjectClothConfigData,FCustomizableObjectClothConfigData,int>
                    (pFVar9->Data,pFVar6,iVar3);
        }
      }
      pFVar8[0xb].Data = pFVar2[0xb].Data;
      pFVar7 = pFVar2[0xd].Data;
      pFVar8[0xc].Data = pFVar2[0xc].Data;
      pFVar8[0xd].Data = pFVar7;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 0xe;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableRefLODRenderData> @ 14ab98d00

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefLODRenderData>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FMutableRefLODRenderData> @ 14ab98d10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRefLODRenderData>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FMutableRefLODRenderData> @ 14ab98d20

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefLODRenderData>(void *param_1)

{
  return;
}

// Copy<FMutableRefLODRenderData> @ 14ab98e30

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefLODRenderData>(void *param_1,void *param_2,int param_3)

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

// Construct<FCustomizableObjectIntParameterValue> @ 14ab98ee0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectIntParameterValue>(void *param_1)

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

// ConstructForTests<FCustomizableObjectIntParameterValue> @ 14ab98f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectIntParameterValue>(void *param_1)

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

// Destruct<FCustomizableObjectIntParameterValue> @ 14ab98f40

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectIntParameterValue>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
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

// Construct<FMutableMeshComponentData> @ 14ab98fd0

void __cdecl UE::CoreUObject::Private::Construct<FMutableMeshComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FCustomizableObjectIntParameterValue> @ 14ab98fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectIntParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    iVar3 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    iVar4 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayMax;
    pFVar1 = (FString *)((longlong)param_1 + 0x30);
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = iVar3;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax = iVar4;
    if (pFVar1 != (FString *)((longlong)param_2 + 0x30)) {
      DestructItems<FString,int>
                ((FString *)(pFVar1->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum);
      iVar3 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
      piVar2 = &(((FString *)((longlong)param_1 + 0x30))->Data).ArrayMax;
      pFVar5 = (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
      iVar4 = *piVar2;
      (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
        ConstructItems<FString,FString,int>
                  ((pFVar1->Data).AllocatorInstance.Data,(FString *)pFVar5,iVar3);
      }
    }
    param_1 = (FString *)((longlong)param_1 + 0x40);
    param_2 = (FString *)((longlong)param_2 + 0x40);
  }
  return true;
}

// ConstructForTests<FMutableMeshComponentData> @ 14ab990f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableMeshComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMutableMeshComponentData> @ 14ab99100

void __cdecl UE::CoreUObject::Private::Destruct<FMutableMeshComponentData>(void *param_1)

{
  return;
}

// Copy<FMutableMeshComponentData> @ 14ab99150

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableMeshComponentData>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCustomizableObjectIntParameterValue> @ 14ab991e0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectIntParameterValue>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auStackX_8 [8];
  
  iVar3 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = *(int *)((longlong)param_1 + 0x18) + -1;
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = *(wchar_t **)((longlong)param_1 + 0x10);
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = *(int *)((longlong)param_1 + 0x38);
  uVar7 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar7) - uVar2 ^ uVar7 << 8;
  uVar2 = (uVar2 - uVar1) - uVar7 ^ uVar1 >> 0xd;
  uVar7 = (uVar7 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar7) - uVar2 ^ uVar7 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar7 ^ uVar1 >> 5;
  uVar7 = (uVar7 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar7) - uVar2 ^ uVar7 << 10;
  puVar8 = *(undefined8 **)((longlong)param_1 + 0x30);
  uVar1 = (uVar2 - uVar1) - uVar7 ^ uVar1 >> 0xf;
  puVar6 = puVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x38) != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar8 == puVar6) break;
    iVar4 = *(int *)(puVar8 + 1) + -1;
    if (*(int *)(puVar8 + 1) == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)*puVar8;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    uVar1 = uVar1 - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
    uVar2 = (uVar2 - uVar7) - uVar1 ^ uVar7 >> 0xd;
    uVar1 = (uVar1 - uVar2) - uVar7 ^ uVar2 >> 0xc;
    uVar7 = (uVar7 - uVar1) - uVar2 ^ uVar1 << 0x10;
    uVar2 = (uVar2 - uVar7) - uVar1 ^ uVar7 >> 5;
    uVar1 = (uVar1 - uVar2) - uVar7 ^ uVar2 >> 3;
    uVar7 = (uVar7 - uVar1) - uVar2 ^ uVar1 << 10;
    uVar1 = (uVar2 - uVar7) - uVar1 ^ uVar7 >> 0xf;
    puVar8 = puVar8 + 2;
  }
  return uVar1;
}

// Construct<FCustomizableObjectClothConfigData> @ 14ab991f0

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectClothConfigData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectClothConfigData> @ 14ab99210

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectClothConfigData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCustomizableObjectClothConfigData> @ 14ab99230

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectClothConfigData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectClothConfigData> @ 14ab99270

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectClothConfigData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    if (pFVar3 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      iVar2 = *(int *)((longlong)param_2 + 0x20);
      piVar1 = (int *)((longlong)param_1 + 0x24);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,*piVar1,pFVar3,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar3->Data,_Src,(longlong)iVar2);
        }
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x28);
    param_2 = (int *)((longlong)param_2 + 0x28);
  }
  return true;
}

// Construct<FMutableRefLODInfo> @ 14ab99360

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefLODInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMutableRefLODInfo> @ 14ab99370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRefLODInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMutableRefLODInfo> @ 14ab99380

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefLODInfo>(void *param_1)

{
  return;
}

// Copy<FMutableRefLODInfo> @ 14ab99390

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefLODInfo>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectBoolParameterValue> @ 14ab99500

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectBoolParameterValue>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectBoolParameterValue> @ 14ab99530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectBoolParameterValue>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// Destruct<FCustomizableObjectBoolParameterValue> @ 14ab99550

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectBoolParameterValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Construct<FMutableParamNameSet> @ 14ab99570

void __cdecl UE::CoreUObject::Private::Construct<FMutableParamNameSet>(void *param_1)

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

// ConstructForTests<FMutableParamNameSet> @ 14ab995b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableParamNameSet>(void *param_1)

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

// Destruct<FMutableParamNameSet> @ 14ab995e0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableParamNameSet>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FCustomizableObjectBoolParameterValue> @ 14ab99620

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectBoolParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  undefined8 uVar2;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      uVar2 = *(undefined8 *)&pFVar1[1].Data.ArrayMax;
      *(undefined8 *)(this + 5) =
           *(undefined8 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      *(undefined8 *)(this + 7) = uVar2;
      param_3 = param_3 + -1;
      this = this + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMutableParamNameSet> @ 14ab996a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableParamNameSet>(void *param_1,void *param_2,int param_3)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectBoolParameterValue> @ 14ab99730

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectBoolParameterValue>(void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  iVar2 = uVar1 - *(byte *)((longlong)param_1 + 0x10);
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (*(byte *)((longlong)param_1 + 0x10) - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar1 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar1 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 10;
  return (uVar5 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}

// Construct<FMutableRefSocket> @ 14ab998c0

void __cdecl UE::CoreUObject::Private::Construct<FMutableRefSocket>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
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
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x30) = dVar2;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return;
}

// ConstructForTests<FMutableRefSocket> @ 14ab99940

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRefSocket>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x30) = dVar2;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return;
}

// Destruct<FMutableRefSocket> @ 14ab999b0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRefSocket>(void *param_1)

{
  return;
}

// Copy<FMutableRefSocket> @ 14ab99a00

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRefSocket>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableStateData> @ 14ab99cf0

void __cdecl UE::CoreUObject::Private::Construct<FMutableStateData>(void *param_1)

{
  memset(param_1,0,0x148);
  FMutableStateData::FMutableStateData(param_1);
  return;
}

// ConstructForTests<FMutableStateData> @ 14ab99d20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableStateData>(void *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  return;
}

// Destruct<FMutableStateData> @ 14ab99d30

void __cdecl UE::CoreUObject::Private::Destruct<FMutableStateData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf8));
  FMutableUIMetadata::~FMutableUIMetadata(param_1);
  return;
}

// Construct<FTextureReuseCacheKey> @ 14ab99d80

void __cdecl UE::CoreUObject::Private::Construct<FTextureReuseCacheKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// ConstructForTests<FTextureReuseCacheKey> @ 14ab99da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTextureReuseCacheKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// Destruct<FTextureReuseCacheKey> @ 14ab99e00

void __cdecl UE::CoreUObject::Private::Destruct<FTextureReuseCacheKey>(void *param_1)

{
  return;
}

// Copy<FMutableStateData> @ 14ab99e10

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableStateData>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMutableUIMetadata::operator=(param_1,param_2);
    *(undefined1 *)
     &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
      AllocatorInstance.Data =
         *(undefined1 *)
          &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
           AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 1) =
         *(undefined1 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 1);
    *(undefined1 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 2) =
         *(undefined1 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 2);
    *(undefined1 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 3) =
         *(undefined1 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 3);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
                    ArrayNum,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
                    ArrayNum);
    param_2 = &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ExtraInformation).field_0x8;
    param_1 = &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ExtraInformation).field_0x8;
  }
  return true;
}

// Copy<FTextureReuseCacheKey> @ 14ab99ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FTextureReuseCacheKey>(void *param_1,void *param_2,int param_3)

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

// Construct<FMutableModelImageProperties> @ 14ab99f80

void __cdecl UE::CoreUObject::Private::Construct<FMutableModelImageProperties>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1010000;
  return;
}

// GetStructTypeHash<FTextureReuseCacheKey> @ 14ab99fb0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FTextureReuseCacheKey>(void *param_1)

{
  uint uVar1;
  
  uVar1 = HashCombine<unsigned_int,unsigned_int,unsigned_int>
                    ((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                     (uint)*(undefined8 *)((longlong)param_1 + 8),(uint)*(undefined8 *)param_1,
                     (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20));
  return uVar1;
}

// ConstructForTests<FMutableModelImageProperties> @ 14ab99fd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMutableModelImageProperties>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1010000;
  return;
}

// Destruct<FMutableModelImageProperties> @ 14ab9a000

void __cdecl UE::CoreUObject::Private::Destruct<FMutableModelImageProperties>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FMutableModelImageProperties> @ 14ab9a060

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableModelImageProperties>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  uint uVar2;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      uVar2 = *(uint *)((longlong)&this[1].Data.AllocatorInstance.Data + 4);
      *(undefined1 *)&this[1].Data.AllocatorInstance.Data =
           *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      uVar2 = (uVar2 ^ *(uint *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4)) & 1 ^
              *(uint *)((longlong)&this[1].Data.AllocatorInstance.Data + 4);
      *(uint *)((longlong)&this[1].Data.AllocatorInstance.Data + 4) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4)) & 2 ^ uVar2;
      *(uint *)((longlong)&this[1].Data.AllocatorInstance.Data + 4) = uVar2;
      *(uint *)((longlong)&this[1].Data.AllocatorInstance.Data + 4) =
           (uVar2 ^ *(uint *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4)) & 4 ^ uVar2;
      this[1].Data.ArrayNum = pFVar1[1].Data.ArrayNum;
      *(char *)&this[1].Data.ArrayMax = (char)pFVar1[1].Data.ArrayMax;
      *(undefined1 *)((longlong)&this[1].Data.ArrayMax + 1) =
           *(undefined1 *)((longlong)&pFVar1[1].Data.ArrayMax + 1);
      *(undefined1 *)((longlong)&this[1].Data.ArrayMax + 2) =
           *(undefined1 *)((longlong)&pFVar1[1].Data.ArrayMax + 2);
      *(undefined1 *)((longlong)&this[1].Data.ArrayMax + 3) =
           *(undefined1 *)((longlong)&pFVar1[1].Data.ArrayMax + 3);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableParameterData> @ 14ab9a1e0

void __cdecl UE::CoreUObject::Private::Construct<FMutableParameterData>(void *param_1)

{
  memset(param_1,0,0x178);
  FMutableParameterData::FMutableParameterData(param_1);
  return;
}

// ConstructForTests<FMutableParameterData> @ 14ab9a210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableParameterData>(void *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined1 *)((longlong)param_1 + 0x170) = 3;
  return;
}

// Destruct<FMutableParameterData> @ 14ab9a260

void __cdecl UE::CoreUObject::Private::Destruct<FMutableParameterData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x160));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x120));
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  FMutableUIMetadata::~FMutableUIMetadata(param_1);
  return;
}

// Construct<FExtensionInstanceData> @ 14ab9a270

void __cdecl UE::CoreUObject::Private::Construct<FExtensionInstanceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FMutableParameterData> @ 14ab9a290

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableParameterData>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  FMutableUIMetadata *pFVar2;
  undefined1 *this;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMutableUIMetadata::operator=(param_1,param_2);
    *(undefined4 *)
     &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
      AllocatorInstance.Data =
         *(undefined4 *)
          &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
           AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 4);
    FGameplayTagContainer::operator=
              ((FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum,
               (FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum);
    puVar1 = &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->UIThumbnail).SoftObjectPtr.
              field_0x8;
    this = &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->UIThumbnail).SoftObjectPtr.
            field_0x8;
    *(undefined1 *)&(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->UIThumbnail).SoftObjectPtr
         = *(undefined1 *)
            &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->UIThumbnail).SoftObjectPtr;
    if (this != puVar1) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ExtraInformation).field_0x18,
                 (int *)&(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ExtraInformation).
                         field_0x28,
                 (ForElementType<FSetElementId> *)
                 &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ExtraInformation).field_0x18,
                 *(int *)&(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ExtraInformation).
                          field_0x28);
      TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(TSparseArray<TSparseSetElement<TTuple<FString,FIntegerParameterUIData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)puVar1);
    }
    pFVar2 = (FMutableUIMetadata *)((longlong)param_2 + 0xf0);
    param_2 = &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ExtraInformation).field_0x38;
    (((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ExtraInformation).field_0x30 =
         (pFVar2->ExtraInformation).field_0x30;
    param_1 = &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ExtraInformation).field_0x38;
  }
  return true;
}

// ConstructForTests<FExtensionInstanceData> @ 14ab9a390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FExtensionInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Destruct<FExtensionInstanceData> @ 14ab9a3b0

void __cdecl UE::CoreUObject::Private::Destruct<FExtensionInstanceData>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FExtensionInstanceData> @ 14ab9a3c0

bool __cdecl
UE::CoreUObject::Private::Copy<FExtensionInstanceData>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar2 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((FInstancedStruct *)((longlong)param_1 + 8) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 8),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar2 + 0x10));
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableModelParameterProperties> @ 14ab9a520

void __cdecl UE::CoreUObject::Private::Construct<FMutableModelParameterProperties>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMutableModelParameterProperties> @ 14ab9a550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMutableModelParameterProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMutableModelParameterProperties> @ 14ab9a570

void __cdecl UE::CoreUObject::Private::Destruct<FMutableModelParameterProperties>(void *param_1)

{
  DestructItems<FMutableModelParameterValue,int>
            (*(FMutableModelParameterValue **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMutableModelParameterProperties> @ 14ab9a5c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableModelParameterProperties>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FMutableModelParameterValue *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      DestructItems<FMutableModelParameterValue,int>
                ((FMutableModelParameterValue *)pFVar4->Data,*(int *)((longlong)param_1 + 0x20));
      iVar2 = *(int *)((longlong)param_2 + 0x20);
      piVar1 = (int *)((longlong)param_1 + 0x24);
      pFVar3 = (FMutableModelParameterValue *)
               ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FMutableModelParameterValue,FMutableModelParameterValue,int>
                  (pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x28);
    param_2 = (int *)((longlong)param_2 + 0x28);
  }
  return true;
}

// Construct<FIntegerParameterUIData> @ 14ab9a740

void __cdecl UE::CoreUObject::Private::Construct<FIntegerParameterUIData>(void *param_1)

{
  memset(param_1,0,0x118);
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// ConstructForTests<FIntegerParameterUIData> @ 14ab9a7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIntegerParameterUIData>(void *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// Destruct<FIntegerParameterUIData> @ 14ab9a7f0

void __cdecl UE::CoreUObject::Private::Destruct<FIntegerParameterUIData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  FMutableUIMetadata::~FMutableUIMetadata(param_1);
  return;
}

// Copy<FIntegerParameterUIData> @ 14ab9a920

bool __cdecl
UE::CoreUObject::Private::Copy<FIntegerParameterUIData>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMutableUIMetadata::operator=(param_1,param_2);
    *(undefined4 *)
     &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
      AllocatorInstance.Data =
         *(undefined4 *)
          &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
           AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 4);
    FGameplayTagContainer::operator=
              ((FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum,
               (FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum);
    param_2 = &((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->UIThumbnail;
    param_1 = &((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->UIThumbnail;
  }
  return true;
}

// Construct<FAnimBpGeneratedPhysicsAssets> @ 14ab9ab70

void __cdecl UE::CoreUObject::Private::Construct<FAnimBpGeneratedPhysicsAssets>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAnimBpGeneratedPhysicsAssets> @ 14ab9ab80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimBpGeneratedPhysicsAssets>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAnimBpGeneratedPhysicsAssets> @ 14ab9ab90

void __cdecl UE::CoreUObject::Private::Destruct<FAnimBpGeneratedPhysicsAssets>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FAnimBpGeneratedPhysicsAssets> @ 14ab9abf0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimBpGeneratedPhysicsAssets>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FAnimInstanceOverridePhysicsAsset *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FAnimInstanceOverridePhysicsAsset *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FAnimInstanceOverridePhysicsAsset,FAnimInstanceOverridePhysicsAsset,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableModelParameterValue> @ 14ab9ad00

void __cdecl UE::CoreUObject::Private::Construct<FMutableModelParameterValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMutableModelParameterValue> @ 14ab9ad20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableModelParameterValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMutableModelParameterValue> @ 14ab9ad40

void __cdecl UE::CoreUObject::Private::Destruct<FMutableModelParameterValue>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Construct<FIntegerParameterOptionDataTable> @ 14ab9ad60

void __cdecl UE::CoreUObject::Private::Construct<FIntegerParameterOptionDataTable>(void *param_1)

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

// ConstructForTests<FIntegerParameterOptionDataTable> @ 14ab9ada0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIntegerParameterOptionDataTable>(void *param_1)

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

// Destruct<FIntegerParameterOptionDataTable> @ 14ab9ae10

void __cdecl UE::CoreUObject::Private::Destruct<FIntegerParameterOptionDataTable>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UDataTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<UDataTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMutableModelParameterValue> @ 14ab9ae50

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableModelParameterValue>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIntegerParameterOptionDataTable> @ 14ab9aed0

bool __cdecl
UE::CoreUObject::Private::Copy<FIntegerParameterOptionDataTable>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TSoftObjectPtr<UDataTable>,DefaultKeyFuncs<TSoftObjectPtr<UDataTable>,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TSoftObjectPtr<UDataTable>,DefaultKeyFuncs<TSoftObjectPtr<UDataTable>,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TSoftObjectPtr<UDataTable>,DefaultKeyFuncs<TSoftObjectPtr<UDataTable>,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimInstanceOverridePhysicsAsset> @ 14ab9af20

void __cdecl UE::CoreUObject::Private::Construct<FAnimInstanceOverridePhysicsAsset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAnimInstanceOverridePhysicsAsset> @ 14ab9af30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimInstanceOverridePhysicsAsset>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAnimInstanceOverridePhysicsAsset> @ 14ab9af80

void __cdecl UE::CoreUObject::Private::Destruct<FAnimInstanceOverridePhysicsAsset>(void *param_1)

{
  return;
}

// Copy<FAnimInstanceOverridePhysicsAsset> @ 14ab9af90

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimInstanceOverridePhysicsAsset>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableRemappedBone> @ 14ab9b9a0

void __cdecl UE::CoreUObject::Private::Construct<FMutableRemappedBone>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMutableRemappedBone> @ 14ab9bab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableRemappedBone>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMutableRemappedBone> @ 14ab9bac0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableRemappedBone>(void *param_1)

{
  return;
}

// Construct<FIntegerParameterOptionKey> @ 14ab9bad0

void __cdecl UE::CoreUObject::Private::Construct<FIntegerParameterOptionKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FIntegerParameterOptionKey> @ 14ab9baf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIntegerParameterOptionKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FIntegerParameterOptionKey> @ 14ab9bb50

void __cdecl UE::CoreUObject::Private::Destruct<FIntegerParameterOptionKey>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMutableRemappedBone> @ 14ab9bb90

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableRemappedBone>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIntegerParameterOptionKey> @ 14ab9bbd0

bool __cdecl
UE::CoreUObject::Private::Copy<FIntegerParameterOptionKey>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableInstanceComponentData> @ 14ab9bc90

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableInstanceComponentData>(void *param_1)

{
  memset(param_1,0,0x150);
  FCustomizableInstanceComponentData::FCustomizableInstanceComponentData(param_1);
  return;
}

// ConstructForTests<FCustomizableInstanceComponentData> @ 14ab9bd00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableInstanceComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  return;
}

// Destruct<FCustomizableInstanceComponentData> @ 14ab9bd10

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableInstanceComponentData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            (*(FHandle **)((longlong)param_1 + 0x128),*(int *)((longlong)param_1 + 0x130));
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UAssetUserData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FCustomizableInstanceComponentData> @ 14ab9bd20

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableInstanceComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> *pFVar4;
  int iVar5;
  int iVar6;
  void *_Src;
  FHandle *pFVar7;
  UObject *pUVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd8);
    do {
      TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
      ::operator=(param_1,param_2);
      TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x50),
                  (TSet<TObjectPtr<UAssetUserData>,DefaultKeyFuncs<TObjectPtr<UAssetUserData>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x50));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0));
      FReferencedSkeletons::operator=
                ((FReferencedSkeletons *)
                 &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_1 + 0xa0))->Elements).field_0x10,
                 (FReferencedSkeletons *)
                 &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_2 + 0xa0))->Elements).field_0x10);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                      &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                         *)((longlong)param_2 + 0xa0))->Hash);
      TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
                 &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_2 + 0xa0))->HashSize);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (this + 2,(TArray<int,TSizedDefaultAllocator<32>_> *)
                          &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                              *)((longlong)param_2 + 0xf0))->Elements).field_0x8);
      TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)(this + 3),
                 (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
                 &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_2 + 0xf0))->Elements).field_0x18);
      puVar2 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0xf0))->Elements).field_0x28;
      puVar3 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0xf0))->Elements).field_0x28;
      if (puVar3 != puVar2) {
        iVar5 = *(int *)&(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                            *)((longlong)param_2 + 0xf0))->Elements).field_0x30;
        puVar1 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_1 + 0xf0))->Elements).field_0x34;
        _Src = *(void **)puVar2;
        iVar6 = *(int *)puVar1;
        *(int *)&(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_1 + 0xf0))->Elements).field_0x30 = iVar5;
        if ((iVar5 == 0) && (iVar6 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar5,iVar6,(ForAnyElementType *)puVar3,iVar5,(int *)puVar1);
          if (iVar5 != 0) {
            memcpy(*(void **)puVar3,_Src,(longlong)iVar5 << 3);
          }
        }
      }
      pFVar4 = &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0xf0))->Hash;
      if (pFVar4 != &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                       *)((longlong)param_2 + 0xf0))->Hash) {
        DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                  (*(FHandle **)pFVar4,
                   *(int *)&(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                               *)((longlong)param_1 + 0xf0))->Hash).SecondaryData);
        iVar5 = *(int *)&(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                            *)((longlong)param_2 + 0xf0))->Hash).SecondaryData;
        puVar2 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_1 + 0xf0))->Hash).SecondaryData.field_0x4;
        pFVar7 = *(FHandle **)
                  &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                     *)((longlong)param_2 + 0xf0))->Hash;
        iVar6 = *(int *)puVar2;
        *(int *)&(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_1 + 0xf0))->Hash).SecondaryData = iVar5;
        if ((iVar5 == 0) && (iVar6 == 0)) {
          *(undefined4 *)puVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar5,iVar6,(ForAnyElementType *)pFVar4,iVar5,(int *)puVar2);
          ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                    (*(void **)pFVar4,pFVar7,iVar5);
        }
      }
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                 &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_1 + 0xf0))->HashSize,
                 (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                 &((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_2 + 0xf0))->HashSize);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 = *(UObject **)
                    &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                        *)((longlong)param_2 + 0x140))->Elements).field_0x8,
         pUVar8 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar8);
      }
      *(undefined8 *)
       &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
           *)((longlong)param_1 + 0x140))->Elements).field_0x8 =
           *(undefined8 *)
            &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                *)((longlong)param_2 + 0x140))->Elements).field_0x8;
      param_3 = param_3 + -1;
      param_1 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_1 + 0x140))->Elements).field_0x10;
      param_2 = &(((TSet<TTuple<FName,TSoftClassPtr<UAnimInstance>_>,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>,FDefaultSetAllocator>
                    *)((longlong)param_2 + 0x140))->Elements).field_0x10;
      this = this + 0x15;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectMeshToMeshVertData> @ 14ab9c030

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectMeshToMeshVertData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectMeshToMeshVertData> @ 14ab9c060

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectMeshToMeshVertData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// Destruct<FCustomizableObjectMeshToMeshVertData> @ 14ab9c090

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectMeshToMeshVertData>(void *param_1)

{
  return;
}

// Construct<FMorphTargetVertexData> @ 14ab9c0e0

void __cdecl UE::CoreUObject::Private::Construct<FMorphTargetVertexData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FMorphTargetVertexData> @ 14ab9c130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMorphTargetVertexData>(void *param_1)

{
  *(undefined8 *)param_1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x14) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMorphTargetVertexData> @ 14ab9c170

void __cdecl UE::CoreUObject::Private::Destruct<FMorphTargetVertexData>(void *param_1)

{
  return;
}

// Copy<FCustomizableObjectMeshToMeshVertData> @ 14ab9c180

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectMeshToMeshVertData>
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

// Copy<FMorphTargetVertexData> @ 14ab9c1d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMorphTargetVertexData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FReferencedSkeletons> @ 14ab9c280

void __cdecl UE::CoreUObject::Private::Construct<FReferencedSkeletons>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FReferencedSkeletons> @ 14ab9c2a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FReferencedSkeletons>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FReferencedSkeletons> @ 14ab9c2c0

void __cdecl UE::CoreUObject::Private::Destruct<FReferencedSkeletons>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FReferencedSkeletons> @ 14ab9c300

bool __cdecl
UE::CoreUObject::Private::Copy<FReferencedSkeletons>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      *puVar6 = *puVar3;
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 * 2);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 3);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 3)) {
        iVar4 = *(int *)(puVar3 + 4);
        piVar2 = (int *)((longlong)puVar6 + 0x24);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 3))->Data;
        *(int *)(puVar6 + 4) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
                    (pFVar1->Data,(TObjectPtr<USkeleton> *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectProjectorParameterValue> @ 14ab9c730

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectProjectorParameterValue>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x40c90fdb;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectProjectorParameterValue> @ 14ab9c7e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectProjectorParameterValue>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x40c90fdb;
  return;
}

// Destruct<FCustomizableObjectProjectorParameterValue> @ 14ab9c840

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectProjectorParameterValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FClothingStreamable> @ 14ab9c880

void __cdecl UE::CoreUObject::Private::Construct<FClothingStreamable>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FClothingStreamable> @ 14ab9c8b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothingStreamable>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Destruct<FClothingStreamable> @ 14ab9c8e0

void __cdecl UE::CoreUObject::Private::Destruct<FClothingStreamable>(void *param_1)

{
  return;
}

// Copy<FCustomizableObjectProjectorParameterValue> @ 14ab9c8f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectProjectorParameterValue>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x18);
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = uVar3;
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x58)) {
      iVar2 = *(int *)((longlong)param_2 + 0x60);
      piVar1 = (int *)((longlong)param_1 + 100);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x58))->Data;
      *(int *)((longlong)param_1 + 0x60) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x38);
        }
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x68);
    param_2 = (int *)((longlong)param_2 + 0x68);
  }
  return true;
}

// Copy<FClothingStreamable> @ 14ab9ca10

bool __cdecl
UE::CoreUObject::Private::Copy<FClothingStreamable>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCustomizableObjectProjectorParameterValue> @ 14ab9ca50

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectProjectorParameterValue>
          (void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  FCustomizableObjectProjector *pFVar5;
  uint uVar6;
  FCustomizableObjectProjector *pFVar7;
  undefined1 auStackX_8 [8];
  
  iVar3 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  uVar2 = ::GetTypeHash((FCustomizableObjectProjector *)((longlong)param_1 + 0x10));
  iVar3 = *(int *)((longlong)param_1 + 0x60);
  uVar6 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar6) - uVar2 ^ uVar6 << 8;
  uVar2 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 5;
  uVar6 = (uVar6 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 << 10;
  pFVar7 = *(FCustomizableObjectProjector **)((longlong)param_1 + 0x58);
  uVar1 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 0xf;
  pFVar5 = pFVar7 + iVar3;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x60) != iVar3) {
      `TCheckedPointerIterator<FCustomizableObjectProjector_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pFVar7 == pFVar5) break;
    uVar2 = ::GetTypeHash(pFVar7);
    uVar1 = uVar1 - uVar2 ^ uVar2 >> 0xd;
    uVar6 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
    uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 0xd;
    uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 >> 0xc;
    uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar1 << 0x10;
    uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 5;
    uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 >> 3;
    uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar1 << 10;
    uVar1 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 0xf;
    pFVar7 = pFVar7 + 1;
  }
  return uVar1;
}

// Construct<FReferencedPhysicsAssets> @ 14ab9cac0

void __cdecl UE::CoreUObject::Private::Construct<FReferencedPhysicsAssets>(void *param_1)

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

// ConstructForTests<FReferencedPhysicsAssets> @ 14ab9caf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FReferencedPhysicsAssets>(void *param_1)

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

// Destruct<FReferencedPhysicsAssets> @ 14ab9cb20

void __cdecl UE::CoreUObject::Private::Destruct<FReferencedPhysicsAssets>(void *param_1)

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

// Copy<FReferencedPhysicsAssets> @ 14ab9cb80

bool __cdecl
UE::CoreUObject::Private::Copy<FReferencedPhysicsAssets>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FMutableSurfaceMetadata> @ 14ab9cc50

void __cdecl UE::CoreUObject::Private::Construct<FMutableSurfaceMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FMutableSurfaceMetadata> @ 14ab9cc70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableSurfaceMetadata>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMutableSurfaceMetadata> @ 14ab9cc80

void __cdecl UE::CoreUObject::Private::Destruct<FMutableSurfaceMetadata>(void *param_1)

{
  return;
}

// Copy<FMutableSurfaceMetadata> @ 14ab9cce0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableSurfaceMetadata>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableMeshMetadata> @ 14ab9cda0

void __cdecl UE::CoreUObject::Private::Construct<FMutableMeshMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMutableMeshMetadata> @ 14ab9cdb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableMeshMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMutableMeshMetadata> @ 14ab9cdc0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableMeshMetadata>(void *param_1)

{
  return;
}

// Copy<FMutableMeshMetadata> @ 14ab9cdd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableMeshMetadata>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectProjector> @ 14ab9ce10

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectProjector>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40c90fdb;
  return;
}

// ConstructForTests<FCustomizableObjectProjector> @ 14ab9ce70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectProjector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40c90fdb;
  return;
}

// Destruct<FCustomizableObjectProjector> @ 14ab9cec0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectProjector>(void *param_1)

{
  return;
}

// Copy<FCustomizableObjectProjector> @ 14ab9cf10

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectProjector>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FCustomizableObjectProjector> @ 14ab9cf60

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FCustomizableObjectProjector>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  uVar2 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0xc),0xc,0);
  uVar4 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar5 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar4 = (uVar2 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x18),0xc,0);
  uVar5 = ((uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x24),0xc,0);
  uVar4 = ((uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar5 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar1 = (uVar5 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  iVar3 = uVar1 - *(byte *)((longlong)param_1 + 0x30);
  uVar2 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar5 = (*(byte *)((longlong)param_1 + 0x30) - uVar2) - iVar3 ^ uVar2 >> 0xd;
  uVar1 = (iVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar4 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar1 = *(uint *)((longlong)param_1 + 0x34);
  uVar2 = ((uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// Construct<FRealTimeMorphStreamable> @ 14ab9cfb0

void __cdecl UE::CoreUObject::Private::Construct<FRealTimeMorphStreamable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRealTimeMorphStreamable> @ 14ab9cfd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRealTimeMorphStreamable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRealTimeMorphStreamable> @ 14ab9cff0

void __cdecl UE::CoreUObject::Private::Destruct<FRealTimeMorphStreamable>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FRealTimeMorphStreamable> @ 14ab9d050

bool __cdecl
UE::CoreUObject::Private::Copy<FRealTimeMorphStreamable>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      iVar2 = pTVar1[1].ArrayNum;
      iVar3 = pTVar1[1].ArrayMax;
      this[1].AllocatorInstance.Data = pTVar1[1].AllocatorInstance.Data;
      this[1].ArrayNum = iVar2;
      this[1].ArrayMax = iVar3;
      *(undefined4 *)&this[2].AllocatorInstance.Data =
           *(undefined4 *)&pTVar1[2].AllocatorInstance.Data;
      *(undefined4 *)((longlong)&this[2].AllocatorInstance.Data + 4) =
           *(undefined4 *)((longlong)&pTVar1[2].AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this[2].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectAssetUserData> @ 14aba91a0

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectAssetUserData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FCustomizableObjectAssetUserData> @ 14aba91f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectAssetUserData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FCustomizableObjectAssetUserData> @ 14aba9200

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectAssetUserData>(void *param_1)

{
  return;
}

// Copy<FCustomizableObjectAssetUserData> @ 14aba9290

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectAssetUserData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectIdPair> @ 14aba9430

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectIdPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectIdPair> @ 14aba9450

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectIdPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCustomizableObjectIdPair> @ 14aba9470

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectIdPair>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCustomizableObjectIdPair> @ 14aba94c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectIdPair>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectResourceData> @ 14aba95e0

void __cdecl UE::CoreUObject::Private::Construct<FCustomizableObjectResourceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FCustomizableObjectResourceData> @ 14aba9600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectResourceData>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Destruct<FCustomizableObjectResourceData> @ 14aba9620

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizableObjectResourceData>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FCustomizableObjectResourceData> @ 14aba9720

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectResourceData>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar2 + 8);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      if ((FInstancedStruct *)((longlong)param_1 + 8) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 8),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar2 + 0x10));
      }
      param_3 = param_3 + -1;
      param_1 = (undefined2 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPreSetSkeletalMeshParams> @ 14aba9990

void __cdecl UE::CoreUObject::Private::Construct<FPreSetSkeletalMeshParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPreSetSkeletalMeshParams> @ 14aba99a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPreSetSkeletalMeshParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPreSetSkeletalMeshParams> @ 14aba99f0

void __cdecl UE::CoreUObject::Private::Destruct<FPreSetSkeletalMeshParams>(void *param_1)

{
  return;
}

// Copy<FPreSetSkeletalMeshParams> @ 14aba9a40

bool __cdecl
UE::CoreUObject::Private::Copy<FPreSetSkeletalMeshParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCompilationOptions_DEPRECATED> @ 14aba9d40

void __cdecl UE::CoreUObject::Private::Construct<FCompilationOptions_DEPRECATED>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x10000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x400;
  return;
}

// ConstructForTests<FCompilationOptions_DEPRECATED> @ 14aba9d70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCompilationOptions_DEPRECATED>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x10000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x400;
  return;
}

// Destruct<FCompilationOptions_DEPRECATED> @ 14aba9da0

void __cdecl UE::CoreUObject::Private::Destruct<FCompilationOptions_DEPRECATED>(void *param_1)

{
  return;
}

// Copy<FCompilationOptions_DEPRECATED> @ 14aba9f30

bool __cdecl
UE::CoreUObject::Private::Copy<FCompilationOptions_DEPRECATED>
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

// Construct<FCompileParams> @ 14abaa360

void __cdecl UE::CoreUObject::Private::Construct<FCompileParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0x1000100;
  *(undefined4 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x103;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FCompileParams> @ 14abaa3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompileParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1000100;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x103;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FCompileParams> @ 14abaa3d0

void __cdecl UE::CoreUObject::Private::Destruct<FCompileParams>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x30));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FCompileParams> @ 14abaa480

bool __cdecl UE::CoreUObject::Private::Copy<FCompileParams>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
      *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)((longlong)param_2 + 3);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x18),
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_2 + 0x18));
      if ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_2 + 0x30) !=
          (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x30)) {
        local_58 = (undefined1  [8])0x0;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_2 + 0x30),(FReadAccessScope *)&local_40);
        if ((*(int *)((longlong)param_2 + 0x40) != 0) &&
           (plVar1 = *(longlong **)((longlong)param_2 + 0x38), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_40);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x30),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_50.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
          local_48 = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
      }
      param_2 = (void *)((longlong)param_2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUpdateContext> @ 14abaa640

void __cdecl UE::CoreUObject::Private::Construct<FUpdateContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FUpdateContext> @ 14abaa650

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUpdateContext>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FUpdateContext> @ 14abaa670

void __cdecl UE::CoreUObject::Private::Destruct<FUpdateContext>(void *param_1)

{
  return;
}

// Construct<FPendingReleaseSkeletalMeshInfo> @ 14abaa6c0

void __cdecl UE::CoreUObject::Private::Construct<FPendingReleaseSkeletalMeshInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPendingReleaseSkeletalMeshInfo> @ 14abaa6d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPendingReleaseSkeletalMeshInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPendingReleaseSkeletalMeshInfo> @ 14abaa6e0

void __cdecl UE::CoreUObject::Private::Destruct<FPendingReleaseSkeletalMeshInfo>(void *param_1)

{
  return;
}

// Copy<FUpdateContext> @ 14abaa6f0

bool __cdecl UE::CoreUObject::Private::Copy<FUpdateContext>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FPendingReleaseSkeletalMeshInfo> @ 14abaa780

bool __cdecl
UE::CoreUObject::Private::Copy<FPendingReleaseSkeletalMeshInfo>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCompileCallbackParams> @ 14abaaeb0

void __cdecl UE::CoreUObject::Private::Construct<FCompileCallbackParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FCompileCallbackParams> @ 14abaaed0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompileCallbackParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FCompileCallbackParams> @ 14abaaef0

void __cdecl UE::CoreUObject::Private::Destruct<FCompileCallbackParams>(void *param_1)

{
  return;
}

// Copy<FCompileCallbackParams> @ 14abaaf40

bool __cdecl
UE::CoreUObject::Private::Copy<FCompileCallbackParams>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 5);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBakingConfiguration> @ 14abaafb0

void __cdecl UE::CoreUObject::Private::Construct<FBakingConfiguration>(void *param_1)

{
  memset(param_1,0,0xc0);
  FBakingConfiguration::FBakingConfiguration(param_1);
  return;
}

// ConstructForTests<FBakingConfiguration> @ 14abab000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBakingConfiguration>(void *param_1)

{
  ::FString::FString(param_1,L"/Game");
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x28),L"SK_");
  ::FString::FString((FString *)((longlong)param_1 + 0x38),L"SKEL_");
  ::FString::FString((FString *)((longlong)param_1 + 0x48),L"PHYS_");
  ::FString::FString((FString *)((longlong)param_1 + 0x58),L"T_");
  ::FString::FString((FString *)((longlong)param_1 + 0x68),L"M_");
  ::FString::FString((FString *)((longlong)param_1 + 0x78),L"MI_");
  ::FString::FString((FString *)((longlong)param_1 + 0x88),L"MID_");
  ::FString::FString((FString *)((longlong)param_1 + 0x98),L"MIC_");
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// Destruct<FBakingConfiguration> @ 14abab010

void __cdecl UE::CoreUObject::Private::Destruct<FBakingConfiguration>(void *param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0xa8));
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
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

// Construct<FGeneratedMaterial> @ 14abab0a0

void __cdecl UE::CoreUObject::Private::Construct<FGeneratedMaterial>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGeneratedMaterial> @ 14abab0c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeneratedMaterial>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGeneratedMaterial> @ 14abab0e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeneratedMaterial>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28));
  DestructItems<FGeneratedTexture,int>
            (*(FGeneratedTexture **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FBakingConfiguration> @ 14abab120

bool __cdecl
UE::CoreUObject::Private::Copy<FBakingConfiguration>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data + 1) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data + 1);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x40))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x40))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x50))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x50))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x60))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x60))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x70))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x70))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x80))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x80))->Data).ArrayNum);
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x90))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x90))->Data).ArrayNum);
    TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
               &(((FString *)((longlong)param_1 + 0xa0))->Data).ArrayNum,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)
               &(((FString *)((longlong)param_2 + 0xa0))->Data).ArrayNum);
    param_2 = (void *)((longlong)param_2 + 0xc0);
    param_1 = (FString *)((longlong)param_1 + 0xc0);
  }
  return true;
}

// Copy<FGeneratedMaterial> @ 14abab240

bool __cdecl
UE::CoreUObject::Private::Copy<FGeneratedMaterial>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FGeneratedTexture *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar9);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar9 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar9 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        DestructItems<FGeneratedTexture,int>((FGeneratedTexture *)pFVar1->Data,*(int *)(puVar9 + 2))
        ;
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar9 + 0x14);
        pFVar5 = (FGeneratedTexture *)((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar9 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FGeneratedTexture,FGeneratedTexture,int>(pFVar1->Data,pFVar5,iVar4);
        }
      }
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar3 + 3);
      lVar6 = puVar3[5];
      uVar7 = puVar3[4];
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = (TReferenceControllerBase<1> *)puVar9[5];
      puVar9[4] = uVar7;
      puVar9[5] = lVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      param_3 = param_3 + -1;
      puVar9 = puVar9 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeneratedTexture> @ 14abab670

void __cdecl UE::CoreUObject::Private::Construct<FGeneratedTexture>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Construct<FMutableLODSettings> @ 14abab690

void __cdecl UE::CoreUObject::Private::Construct<FMutableLODSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FGeneratedTexture> @ 14abab6e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeneratedTexture>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMutableLODSettings> @ 14abab700

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableLODSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGeneratedTexture> @ 14abab740

void __cdecl UE::CoreUObject::Private::Destruct<FGeneratedTexture>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Destruct<FMutableLODSettings> @ 14abab760

void __cdecl UE::CoreUObject::Private::Destruct<FMutableLODSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FGeneratedTexture> @ 14abab810

bool __cdecl
UE::CoreUObject::Private::Copy<FGeneratedTexture>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  UObject *pUVar2;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (UObject *)pFVar1[1].Data.AllocatorInstance.Data, pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      *(FScriptContainerElement **)(this + 4) = pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMutableLODSettings> @ 14abab8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableLODSettings>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    this = (FString *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      ::FString::operator=(this,(FString *)((longlong)param_1 + lVar1 + 8));
      *(undefined4 *)&this[1].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)param_1 + lVar1 + 0x18);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this[1].Data.ArrayNum,
                 (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + lVar1 + 0x20));
      this = this + 7;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x70);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectInstanceBakeOutput> @ 14abab9b0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectInstanceBakeOutput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectInstanceBakeOutput> @ 14abab9d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectInstanceBakeOutput>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FCustomizableObjectInstanceBakeOutput> @ 14abab9f0

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectInstanceBakeOutput>(void *param_1)

{
  DestructItems<FBakedResourceData,int>
            (*(FBakedResourceData **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FCustomizableObjectInstanceBakeOutput> @ 14ababba0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectInstanceBakeOutput>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FBakedResourceData *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 8)) {
        DestructItems<FBakedResourceData,int>
                  ((FBakedResourceData *)pFVar4->Data,*(int *)((longlong)param_1 + 0x10));
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = (FBakedResourceData *)((ForAnyElementType *)((longlong)param_1 + lVar5 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FBakedResourceData,FBakedResourceData,int>(pFVar4->Data,pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProfileParameterDat> @ 14ababf10

void __cdecl UE::CoreUObject::Private::Construct<FProfileParameterDat>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FProfileParameterDat> @ 14ababf70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProfileParameterDat>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FProfileParameterDat> @ 14ababfd0

void __cdecl UE::CoreUObject::Private::Destruct<FProfileParameterDat>(void *param_1)

{
  DestructItems<FCustomizableObjectTransformParameterValue,int>
            (*(FCustomizableObjectTransformParameterValue **)((longlong)param_1 + 0x80),
             *(int *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FCustomizableObjectProjectorParameterValue,int>
            (*(FCustomizableObjectProjectorParameterValue **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FCustomizableObjectVectorParameterValue,int>
            (*(FCustomizableObjectVectorParameterValue **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
            (*(FCustomizableObjectSkeletalMeshParameterValue **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FCustomizableObjectTextureParameterValue,int>
            (*(FCustomizableObjectTextureParameterValue **)((longlong)param_1 + 0x40),
             *(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FCustomizableObjectFloatParameterValue,int>
            (*(FCustomizableObjectFloatParameterValue **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FCustomizableObjectIntParameterValue,int>
            (*(FCustomizableObjectIntParameterValue **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FCustomizableObjectBoolParameterValue,int>
            (*(FCustomizableObjectBoolParameterValue **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FProfileParameterDat> @ 14abac020

bool __cdecl
UE::CoreUObject::Private::Copy<FProfileParameterDat>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30));
    TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40),
               (TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x40));
    TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x50),
               (TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x50));
    TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x60),
               (TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x60));
    TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x70),
               (TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x70));
    TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x80),
               (TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x80));
    param_2 = (void *)((longlong)param_2 + 0x90);
    param_1 = (FString *)((longlong)param_1 + 0x90);
  }
  return true;
}

// Construct<FBakedResourceData> @ 14abac100

void __cdecl UE::CoreUObject::Private::Construct<FBakedResourceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FBakedResourceData> @ 14abac120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBakedResourceData>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FBakedResourceData> @ 14abac180

void __cdecl UE::CoreUObject::Private::Destruct<FBakedResourceData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
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

// Copy<FBakedResourceData> @ 14abac1e0

bool __cdecl
UE::CoreUObject::Private::Copy<FBakedResourceData>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=
                ((FString *)(puVar1 + 8),
                 (FString *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FParameterTags> @ 14abac420

void __cdecl UE::CoreUObject::Private::Construct<FParameterTags>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FParameterTags> @ 14abac470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FParameterTags>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FParameterTags> @ 14abac4b0

void __cdecl UE::CoreUObject::Private::Destruct<FParameterTags>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FParameterTags> @ 14abac550

bool __cdecl UE::CoreUObject::Private::Copy<FParameterTags>(void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      if ((TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(this + 1) !=
          (TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(pTVar1 + 1)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&this[4].ArrayNum,&this[5].ArrayNum,
                   (ForElementType<FSetElementId> *)&pTVar1[4].ArrayNum,pTVar1[5].ArrayNum);
        TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(this + 1),
                    (TSparseArray<TSparseSetElement<TTuple<FString,FFParameterOptionsTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(pTVar1 + 1));
      }
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFParameterOptionsTags> @ 14abac940

void __cdecl UE::CoreUObject::Private::Construct<FFParameterOptionsTags>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFParameterOptionsTags> @ 14abac950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFParameterOptionsTags>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFParameterOptionsTags> @ 14abac960

void __cdecl UE::CoreUObject::Private::Destruct<FFParameterOptionsTags>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FFParameterOptionsTags> @ 14abaca20

bool __cdecl
UE::CoreUObject::Private::Copy<FFParameterOptionsTags>(void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructPtr<FCustomizableObjectAssetUserData> @ 14abb5c40

/* WARNING: Removing unreachable block (ram,0x00014abb5cf6) */

FCustomizableObjectAssetUserData * __cdecl
UE::StructUtils::GetStructPtr<FCustomizableObjectAssetUserData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FCustomizableObjectAssetUserData *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectAssetUserData,
                         (UObject *)pUVar2,L"CustomizableObjectAssetUserData");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton)
  {
    if (Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_CustomizableObject();
      Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectAssetUserData,
                           (UObject *)pUVar2,L"CustomizableObjectAssetUserData");
      if (Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FCustomizableObjectAssetUserData *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton)
                 ->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FCustomizableObjectAssetUserData.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FCustomizableObjectAssetUserData *)0x0;
  }
  return param_2;
}

// InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_> @ 14abb6b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::
InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_>
          (UCustomizableInstancePrivate *param_1,FName param_2,
          TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  FCustomizableInstanceComponentData *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FCustomizableInstanceComponentData *pFVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  FName local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_ec;
  UClass *local_e0;
  FString local_d8;
  FString local_c8;
  FCustomizableInstanceComponentData *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  bVar8 = false;
  local_res10 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_68);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    ::FName::ToString(&local_res10,&local_88);
    ::FString::PrintfImpl
              (&local_d8,
               L"Attempting to iterate over AnimInstances with an unbound delegate for component [%s]."
              );
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMutable._0_1_) {
      Logging::Private::BasicLog<3>
                (&`void___cdecl_UE::Mutable::Private::InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_>(UCustomizableInstancePrivate*___ptr64,FName,TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    bVar8 = true;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  pFVar11 = UCustomizableInstancePrivate::GetComponentData(param_1,&local_res10);
  if (pFVar11 == (FCustomizableInstanceComponentData *)0x0) {
    ::FName::ToString(&local_res10,&local_78);
    ::FString::PrintfImpl
              (&local_c8,L"Tried to access an invalid component [%s] in a Mutable Instance.");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogMutable._0_1_) {
      Logging::Private::BasicLog<2>
                (&`void___cdecl_UE::Mutable::Private::InternalForEachAnimInstance<TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>_>(UCustomizableInstancePrivate*___ptr64,FName,TDelegate<void___cdecl(FName,TSubclassOf<UAnimInstance>),FDefaultDelegateUserPolicy>)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else if (!bVar8) {
    iVar3 = *(int *)&(pFVar11->AnimSlotToBP).field_0x28;
    iVar19 = 0;
    iVar21 = 0;
    puVar1 = &(pFVar11->AnimSlotToBP).field_0x10;
    uVar9 = 1;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar22 = *(uint **)&(pFVar11->AnimSlotToBP).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar17 = *puVar22;
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar19;
        iVar21 = iVar21 + 0x20;
        iVar19 = iVar19 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14abb6cfd;
        uVar17 = puVar22[lVar14 + 1];
      }
      uVar9 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iVar10 = iVar21 + -1 + local_res20;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_14abb6cfd:
    uVar17 = *(uint *)&(pFVar11->AnimSlotToBP).field_0x28;
    uVar15 = uVar17 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar9,iVar19);
    TStack_b0.CurrentBitIndex = iVar10;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar17 >> 5;
    TStack_b0._28_4_ = iVar10;
    TStack_b0.BaseBitIndex = iVar21;
    uStack_90 = CONCAT44(uStack_ec,
                         *(int *)&(pFVar11->AnimSlotToBP).field_0x8 -
                         *(int *)&(pFVar11->AnimSlotToBP).field_0x34);
    local_b8 = pFVar11;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)&(pFVar11->AnimSlotToBP).field_0x28;
    if (uVar17 != uVar9) {
      puVar20 = *(undefined1 **)&(pFVar11->AnimSlotToBP).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar19;
        uVar15 = uVar15 + 0x20;
        iVar19 = iVar19 + 1;
        uVar17 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14abb6e00;
        uVar17 = *(uint *)(puVar20 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar17 = (int)lVar14 + -1 + uVar15;
      if ((int)uVar9 < (int)uVar17) {
        uVar17 = uVar9;
      }
    }
LAB_14abb6e00:
    do {
      pFVar6 = local_b8;
      if (*(int *)&(local_b8->AnimSlotToBP).field_0x8 - *(int *)&(local_b8->AnimSlotToBP).field_0x34
          != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_b0.CurrentBitIndex == uVar17) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pFVar6 == pFVar11)) break;
      puVar18 = (undefined8 *)
                ((longlong)TStack_b0.CurrentBitIndex * 0x38 + *(longlong *)&pFVar6->AnimSlotToBP);
      if (puVar18[2] != 0) {
        pUVar12 = LoadClass<UAnimInstance>((TSoftClassPtr<UAnimInstance> *)(puVar18 + 1));
        if (GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 != (UClass *)0x0) goto LAB_14abb6e75;
        }
        else if (pUVar12 != (UClass *)0x0) {
          GC::MarkAsReachable((UObject *)pUVar12);
LAB_14abb6e75:
          pUVar13 = Z_Construct_UClass_UAnimInstance_NoRegister();
          if (pUVar13 != (UClass *)0x0) {
            iVar3 = (int)pUVar13->_padding_;
            if (((int)pUVar12->_padding_ < iVar3) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
                &pUVar13->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar12);
              }
              uVar4 = *puVar18;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_50
                        );
              if (*(int *)&param_3->field_0x10 == 0) {
                plVar16 = (longlong *)0x0;
              }
              else {
                plVar16 = *(longlong **)&param_3->field_0x8;
              }
              pcVar5 = *(code **)(*plVar16 + 0x60);
              local_e0 = pUVar12;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar12);
              }
              (*pcVar5)(plVar16,uVar4,&local_e0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_50);
            }
          }
        }
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while( true );
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate> @ 14abb6f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>
          (UCustomizableInstancePrivate *param_1,FName param_2,
          FEachComponentAnimInstanceClassDelegate *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  FCustomizableInstanceComponentData *pFVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FCustomizableInstanceComponentData *pFVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  FName local_res10;
  TScriptDelegate<FNotThreadSafeDelegateMode> *local_res18;
  undefined1 local_res20 [8];
  undefined4 uStack_cc;
  FString local_c0;
  FString local_b0;
  undefined8 local_a0;
  UClass *local_98;
  FCustomizableInstanceComponentData *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  bVar8 = false;
  local_res10 = param_2;
  local_res18 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3;
  bVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
  if (!bVar7) {
    ::FName::ToString(&local_res10,&local_60);
    ::FString::PrintfImpl
              (&local_c0,
               L"Attempting to iterate over AnimInstances with an unbound delegate for component [%s]."
              );
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMutable._0_1_) {
      Logging::Private::BasicLog<3>
                (&`void___cdecl_UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>(UCustomizableInstancePrivate*___ptr64,FName,FEachComponentAnimInstanceClassDelegate)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    bVar8 = true;
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  pFVar11 = UCustomizableInstancePrivate::GetComponentData(param_1,&local_res10);
  if (pFVar11 == (FCustomizableInstanceComponentData *)0x0) {
    ::FName::ToString(&local_res10,&local_50);
    ::FString::PrintfImpl
              (&local_b0,L"Tried to access an invalid component [%s] in a Mutable Instance.");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogMutable._0_1_) {
      Logging::Private::BasicLog<2>
                (&`void___cdecl_UE::Mutable::Private::InternalForEachAnimInstance<FEachComponentAnimInstanceClassDelegate>(UCustomizableInstancePrivate*___ptr64,FName,FEachComponentAnimInstanceClassDelegate)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    this = local_res18;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      this = local_res18;
    }
  }
  else {
    this = local_res18;
    if (!bVar8) {
      iVar3 = *(int *)&(pFVar11->AnimSlotToBP).field_0x28;
      iVar18 = 0;
      puVar1 = &(pFVar11->AnimSlotToBP).field_0x10;
      iVar20 = 0;
      uVar9 = 1;
      iVar10 = 0;
      if (iVar3 != 0) {
        puVar21 = *(uint **)&(pFVar11->AnimSlotToBP).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar1;
        }
        uVar16 = *puVar21;
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar18;
          iVar20 = iVar20 + 0x20;
          iVar18 = iVar18 + 1;
          iVar10 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14abb712d;
          uVar16 = puVar21[lVar14 + 1];
        }
        uVar9 = -uVar16 & uVar16;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = iVar20 + -1 + (int)lVar14;
        if (iVar3 < iVar10) {
          iVar10 = iVar3;
        }
      }
LAB_14abb712d:
      uVar16 = *(uint *)&(pFVar11->AnimSlotToBP).field_0x28;
      uVar15 = uVar16 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uVar9,iVar18);
      TStack_88.CurrentBitIndex = iVar10;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar16 >> 5;
      TStack_88._28_4_ = iVar10;
      TStack_88.BaseBitIndex = iVar20;
      uStack_68 = CONCAT44(uStack_cc,
                           *(int *)&(pFVar11->AnimSlotToBP).field_0x8 -
                           *(int *)&(pFVar11->AnimSlotToBP).field_0x34);
      local_90 = pFVar11;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = local_res18;
      uVar9 = *(uint *)&(pFVar11->AnimSlotToBP).field_0x28;
      if (uVar16 != uVar9) {
        puVar19 = *(undefined1 **)&(pFVar11->AnimSlotToBP).field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = puVar1;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar18;
          uVar15 = uVar15 + 0x20;
          iVar18 = iVar18 + 1;
          uVar16 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14abb7230;
          uVar16 = *(uint *)(puVar19 + lVar14 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + uVar15;
        if ((int)uVar9 < (int)uVar16) {
          uVar16 = uVar9;
        }
      }
LAB_14abb7230:
      do {
        pFVar6 = local_90;
        if (*(int *)&(local_90->AnimSlotToBP).field_0x8 -
            *(int *)&(local_90->AnimSlotToBP).field_0x34 != (int)uStack_68) {
          `TSparseArray<TSparseSetElement<TTuple<FName,TSoftClassPtr<UAnimInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_88.CurrentBitIndex == uVar16) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar6 == pFVar11)) break;
        puVar17 = (undefined8 *)
                  ((longlong)TStack_88.CurrentBitIndex * 0x38 + *(longlong *)&pFVar6->AnimSlotToBP);
        if (puVar17[2] != 0) {
          pUVar12 = LoadClass<UAnimInstance>((TSoftClassPtr<UAnimInstance> *)(puVar17 + 1));
          if (GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar12 != (UClass *)0x0) goto LAB_14abb72a2;
          }
          else if (pUVar12 != (UClass *)0x0) {
            GC::MarkAsReachable((UObject *)pUVar12);
LAB_14abb72a2:
            pUVar13 = Z_Construct_UClass_UAnimInstance_NoRegister();
            if (pUVar13 != (UClass *)0x0) {
              iVar3 = (int)pUVar13->_padding_;
              if (((int)pUVar12->_padding_ < iVar3) ||
                 ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
                  &pUVar13->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)pUVar12);
                }
                uVar4 = *puVar17;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)pUVar12);
                }
                local_98 = (UClass *)0x0;
                local_a0 = uVar4;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)pUVar12);
                }
                local_98 = pUVar12;
                TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                          (this,&local_a0);
              }
            }
          }
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      } while( true );
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// LoadClass<UAnimInstance> @ 14abb82e0

UClass * __cdecl
UE::Mutable::Private::LoadClass<UAnimInstance>(TSoftClassPtr<UAnimInstance> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar3 == (UClass *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      return (UClass *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar3 = (UClass *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar3 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar4->_padding_)) &&
       (pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return pUVar3;
      }
    }
  }
  return (UClass *)0x0;
}

// LoadClass<UDGGUI> @ 14abb8390

UClass * __cdecl UE::Mutable::Private::LoadClass<UDGGUI>(FSoftClassPath *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  int iVar4;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (*(longlong *)param_1 == 0) {
    return (UClass *)0x0;
  }
  local_28.DataPtr = (wchar_t *)0x0;
  iVar4 = 0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  pFVar1 = FSoftObjectPath::ToString((FSoftObjectPath *)param_1,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14abb83db;
  }
  sVar2 = wcslen(local_38.DataPtr);
  iVar4 = (int)sVar2;
LAB_14abb83db:
  local_38.Size = iVar4;
  pUVar3 = UDGGUI::StaticClass();
  pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_38,&local_28,0,(UPackageMap *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// LoadObject<USkeletalMesh> @ 14abb8440

USkeletalMesh * __cdecl
UE::Mutable::Private::LoadObject<USkeletalMesh>(TSoftObjectPtr<USkeletalMesh> *param_1)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USkeletalMesh *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 == (USkeletalMesh *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      return (USkeletalMesh *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (USkeletalMesh *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar2 != (USkeletalMesh *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeletalMesh *)0x0;
}

// LoadObject<UStreamableRenderAsset> @ 14abb84c0

UStreamableRenderAsset * __cdecl
UE::Mutable::Private::LoadObject<UStreamableRenderAsset>
          (TSoftObjectPtr<UStreamableRenderAsset> *param_1)

{
  int iVar1;
  UStreamableRenderAsset *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStreamableRenderAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 == (UStreamableRenderAsset *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      return (UStreamableRenderAsset *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UStreamableRenderAsset *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar2 != (UStreamableRenderAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStreamableRenderAsset *)0x0;
}

// LoadObject<UTexture> @ 14abb8540

UTexture * __cdecl UE::Mutable::Private::LoadObject<UTexture>(TSoftObjectPtr<UTexture> *param_1)

{
  int iVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTexture *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 == (UTexture *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      return (UTexture *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UTexture *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar2 != (UTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture *)0x0;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FMeshToMeshVertData,int>_>_> @ 14abb95b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArrayView<FMeshToMeshVertData,int>_>_>
          (ushort param_1,ForElementType<TArrayView<FMeshToMeshVertData,int>_> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArrayView<FMeshToMeshVertData,int>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_> @ 14abb9680

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_> @ 14abb9760

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// Construct<FMutableUIMetadata> @ 14ac02000

void __cdecl UE::CoreUObject::Private::Construct<FMutableUIMetadata>(void *param_1)

{
  memset(param_1,0,0xf0);
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  return;
}

// ConstructForTests<FMutableUIMetadata> @ 14ac02030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableUIMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  return;
}

// Destruct<FMutableUIMetadata> @ 14ac02040

void __cdecl UE::CoreUObject::Private::Destruct<FMutableUIMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FMutableUIMetadata> @ 14ac02050

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableUIMetadata>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    iVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax = iVar1;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x30),
               (FSoftObjectPath *)((longlong)param_2 + 0x30));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x50),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x50));
    if ((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0xa0) !=
        (TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0xa0)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(((FString *)((longlong)param_1 + 0xd0))->Data).ArrayNum,
                 &(((FString *)((longlong)param_1 + 0xe0))->Data).ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &(((FString *)((longlong)param_2 + 0xd0))->Data).ArrayNum,
                 (((FString *)((longlong)param_2 + 0xe0))->Data).ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0xa0),
                  (TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0xa0));
    }
    param_1 = (FString *)((longlong)param_1 + 0xf0);
    param_2 = (FString *)((longlong)param_2 + 0xf0);
  }
  return true;
}

// Construct<FPendingReleaseMaterialsInfo> @ 14ac02490

void __cdecl UE::CoreUObject::Private::Construct<FPendingReleaseMaterialsInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPendingReleaseMaterialsInfo> @ 14ac024b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPendingReleaseMaterialsInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPendingReleaseMaterialsInfo> @ 14ac024d0

void __cdecl UE::CoreUObject::Private::Destruct<FPendingReleaseMaterialsInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FPendingReleaseMaterialsInfo> @ 14ac024f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPendingReleaseMaterialsInfo>
          (void *param_1,void *param_2,int param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined4 *)&this[1].AllocatorInstance.Data =
           *(undefined4 *)&pTVar1[1].AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&this[1].ArrayNum
      ;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectStreamedResourceData> @ 14ac025b0

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectStreamedResourceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FCustomizableObjectStreamedResourceData> @ 14ac02600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectStreamedResourceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FCustomizableObjectStreamedResourceData> @ 14ac02650

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectStreamedResourceData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FCustomizableObjectStreamedResourceData> @ 14ac02670

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectStreamedResourceData>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_1 + lVar2 + 8));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x28), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizableObjectInstanceDescriptor> @ 14ac04430

void __cdecl
UE::CoreUObject::Private::Construct<FCustomizableObjectInstanceDescriptor>(void *param_1)

{
  memset(param_1,0,400);
  FCustomizableObjectInstanceDescriptor::FCustomizableObjectInstanceDescriptor(param_1);
  return;
}

// ConstructForTests<FCustomizableObjectInstanceDescriptor> @ 14ac04460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizableObjectInstanceDescriptor>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  return;
}

// Destruct<FCustomizableObjectInstanceDescriptor> @ 14ac04470

void __cdecl
UE::CoreUObject::Private::Destruct<FCustomizableObjectInstanceDescriptor>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x180));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x140));
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf0));
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  DestructItems<FCustomizableObjectTransformParameterValue,int>
            (*(FCustomizableObjectTransformParameterValue **)((longlong)param_1 + 0x88),
             *(int *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  DestructItems<FCustomizableObjectProjectorParameterValue,int>
            (*(FCustomizableObjectProjectorParameterValue **)((longlong)param_1 + 0x78),
             *(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  DestructItems<FCustomizableObjectVectorParameterValue,int>
            (*(FCustomizableObjectVectorParameterValue **)((longlong)param_1 + 0x68),
             *(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  DestructItems<FCustomizableObjectMaterialParameterValue,int>
            (*(FCustomizableObjectMaterialParameterValue **)((longlong)param_1 + 0x58),
             *(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
            (*(FCustomizableObjectSkeletalMeshParameterValue **)((longlong)param_1 + 0x48),
             *(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FCustomizableObjectTextureParameterValue,int>
            (*(FCustomizableObjectTextureParameterValue **)((longlong)param_1 + 0x38),
             *(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<FCustomizableObjectFloatParameterValue,int>
            (*(FCustomizableObjectFloatParameterValue **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FCustomizableObjectIntParameterValue,int>
            (*(FCustomizableObjectIntParameterValue **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FCustomizableObjectBoolParameterValue,int>
            (*(FCustomizableObjectBoolParameterValue **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FCustomizableObjectInstanceDescriptor> @ 14ac04480

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizableObjectInstanceDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  FCustomizableObjectInstanceDescriptor *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FCustomizableObjectInstanceDescriptor::operator=
                (this,(FCustomizableObjectInstanceDescriptor *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableStateUIMetadata> @ 14ac04670

void __cdecl UE::CoreUObject::Private::Construct<FMutableStateUIMetadata>(void *param_1)

{
  memset(param_1,0,0xf0);
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  return;
}

// ConstructForTests<FMutableStateUIMetadata> @ 14ac046a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableStateUIMetadata>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  return;
}

// Destruct<FMutableStateUIMetadata> @ 14ac046b0

void __cdecl UE::CoreUObject::Private::Destruct<FMutableStateUIMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FMutableStateUIMetadata> @ 14ac046c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableStateUIMetadata>(void *param_1,void *param_2,int param_3)

{
  FMutableUIMetadata *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FMutableUIMetadata::operator=
                (this,(FMutableUIMetadata *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMutableParamUIMetadata> @ 14ac04890

void __cdecl UE::CoreUObject::Private::Construct<FMutableParamUIMetadata>(void *param_1)

{
  memset(param_1,0,0x118);
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// ConstructForTests<FMutableParamUIMetadata> @ 14ac048f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMutableParamUIMetadata>(void *param_1)

{
  FMutableUIMetadata::FMutableUIMetadata(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// Destruct<FMutableParamUIMetadata> @ 14ac04940

void __cdecl UE::CoreUObject::Private::Destruct<FMutableParamUIMetadata>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  FMutableUIMetadata::~FMutableUIMetadata(param_1);
  return;
}

// Copy<FMutableParamUIMetadata> @ 14ac04980

bool __cdecl
UE::CoreUObject::Private::Copy<FMutableParamUIMetadata>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMutableUIMetadata::operator=(param_1,param_2);
    *(undefined4 *)
     &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
      AllocatorInstance.Data =
         *(undefined4 *)
          &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
           AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
       AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)
           &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
            AllocatorInstance.Data + 4);
    FGameplayTagContainer::operator=
              ((FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum,
               (FGameplayTagContainer *)
               &(((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->ObjectFriendlyName).Data.
                ArrayNum);
    param_2 = &((FMutableUIMetadata *)((longlong)param_2 + 0xf0))->UIThumbnail;
    param_1 = &((FMutableUIMetadata *)((longlong)param_1 + 0xf0))->UIThumbnail;
  }
  return true;
}

// Launch<TUniqueFunction<void___cdecl(void)>_> @ 14ac07a00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<TUniqueFunction<void___cdecl(void)>_>
          (wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::Create
                   ((wchar_t *)param_2,
                    (TUniqueFunction<void___cdecl(void)> *)CONCAT71(in_register_00000081,param_3),
                    param_4,(undefined1)param_5,in_stack_00000030);
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)();
    }
  }
  *(TExecutableTask<TUniqueFunction<void___cdecl(void)>_> **)param_1 = this;
  Private::FTaskBase::TryLaunch((FTaskBase *)this,0x140);
  return (TTask<void>)param_1;
}

// Launch<TUniqueFunction<void___cdecl(void)>,TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&> @ 14ac07a90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<TUniqueFunction<void___cdecl(void)>,TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&>
          (wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_3,ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::Create
                   ((wchar_t *)param_2,(TUniqueFunction<void___cdecl(void)> *)param_3,param_5,
                    (undefined1)param_6,in_stack_00000038);
  Private::FTaskBase::
  AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>
            ((FTaskBase *)this,
             (TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              *)CONCAT71(in_register_00000089,param_4),true);
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(TExecutableTask<TUniqueFunction<void___cdecl(void)>_> **)param_1 = this;
  Private::FTaskBase::TryLaunch((FTaskBase *)this,0x140);
  return (TTask<void>)param_1;
}

// MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_&> @ 14ac07b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> __cdecl
UE::Tasks::
MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_&>
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  uchar *puVar1;
  int iVar2;
  FImage *pFVar3;
  FTaskBase *this;
  longlong in_RDX;
  
  param_1->Object = (FImage *)0x0;
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init
              (this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
               ,Default,Inline,None);
    this[1]._padding_ = in_RDX;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00__AEAV1__Tasks_UE__YA_AV__TTask_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___23_AEAV__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Z__Private_Tasks_UE__6B_
    ;
  }
  pFVar3 = param_1->Object;
  if (pFVar3 != (FImage *)0x0) {
    param_1->Object = (FImage *)0x0;
    LOCK();
    puVar1 = (pFVar3->DataStorage).Buffers.AllocatorInstance.InlineData + 0x10;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  param_1->Object = (FImage *)this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)param_1;
}

// Prerequisites<UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0> @ 14ac08040

TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> __cdecl
UE::Tasks::Prerequisites<UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>
          (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_1)

{
  TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *in_RDX;
  
  *param_1 = *in_RDX;
  return (TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>)(FTaskBase * [1])param_1;
}

// PrerequisitesUnpacker<0,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_> @ 14ac08050

void __cdecl
UE::Tasks::Private::
PrerequisitesUnpacker<0,TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>
          (TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> *param_1,
          TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  param_1->Elements[0] = (FTaskBase *)*param_2;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 14ac08060

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Tasks::Private::FTaskHandle> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 14ac08100

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Tasks::Private::FTaskHandle> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType> @ 14ac081e0

int __cdecl
UE::Core::Private::
ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  iVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar6 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    uVar5 = (ulonglong)(int)uVar1;
    if (iVar6 == 0) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,param_2);
    iVar6 = (int)(uVar4 / uVar7);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    UE::Mutable::Private::
    TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>
    ::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
              (param_4,iVar2,iVar6,uVar7,param_2);
    *param_6 = iVar6;
  }
  return iVar2;
}

// ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType> @ 14ac082c0

void __cdecl
UE::Core::Private::
ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if (((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
     ((0x40 < iVar1 - param_4 || (param_4 == 0)))) {
    iVar2 = param_4;
    if (0 < param_4) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,param_2);
      iVar2 = (int)(uVar3 / uVar4);
    }
    if (iVar2 != iVar1) {
      *param_5 = iVar2;
      UE::Mutable::Private::
      TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>
      ::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
                (param_3,param_4,iVar2,uVar4,param_2);
    }
  }
  return;
}

// ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType> @ 14ac08370

void __cdecl
UE::Core::Private::
ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,param_2);
    iVar1 = (int)(uVar2 / uVar3);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    UE::Mutable::Private::
    TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter>
    ::ForAnyElementType::ResizeAllocation<TSizedDefaultAllocator<32>_>
              (param_4,param_5,iVar1,uVar3,param_2);
  }
  return;
}

// LoadObject @ 14ac2a9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * __cdecl UE::Mutable::Private::LoadObject(FAssetData *param_1)

{
  int iVar1;
  uint uVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  UObject *pUVar4;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ForElementType<FSetElementId> local_70;
  ulonglong local_60;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_58;
  
  local_70.InlineData[0] = '\0';
  local_70.InlineData[1] = '\0';
  local_70.InlineData[2] = '\0';
  local_70.InlineData[3] = '\0';
  local_70._padding_ = 0;
  local_a8._16_8_ = 0;
  uStack_90 = 0;
  local_80 = ___xmm_00000000ffffffff0000008000000000;
  uStack_78 = _UNK_150631d98;
  local_60 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar3 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                     (&local_58,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8);
  pUVar4 = FAssetData::FastGetAsset(param_1,true,pTVar3);
  local_60 = local_60 & 0xffffffff00000000;
  if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  iVar1 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  uVar2 = local_80._4_4_;
  uStack_78 = 0xffffffff;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_80 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return pUVar4;
}

// LoadObject @ 14ac2ab00

UObject * __cdecl UE::Mutable::Private::LoadObject(FSoftObjectPath *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  return pUVar1;
}

// LoadObject @ 14ac2ab10

UObject * __cdecl UE::Mutable::Private::LoadObject(FSoftObjectPtr *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if ((pUVar1 == (UObject *)0x0) && (*(longlong *)&param_1->field_0x8 != 0)) {
    FSoftObjectPath::TryLoad((FSoftObjectPath *)&param_1->field_0x8,(FUObjectSerializeContext *)0x0)
    ;
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
    return pUVar1;
  }
  return pUVar1;
}

// Construct<FMultilayerProjectorLayer> @ 14ac4ee10

void __cdecl UE::CoreUObject::Private::Construct<FMultilayerProjectorLayer>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// ConstructForTests<FMultilayerProjectorLayer> @ 14ac4ee50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMultilayerProjectorLayer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FMultilayerProjectorLayer> @ 14ac4ee70

void __cdecl UE::CoreUObject::Private::Destruct<FMultilayerProjectorLayer>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x68);
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

// Copy<FMultilayerProjectorLayer> @ 14ac4ee90

bool __cdecl
UE::CoreUObject::Private::Copy<FMultilayerProjectorLayer>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    puVar3[2] = puVar1[2];
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    puVar3[4] = uVar2;
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    puVar3[6] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar3[7] = uVar2;
    puVar3[8] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x50 - (longlong)param_1));
    puVar3[9] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    puVar3[10] = uVar2;
    puVar3[0xb] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x58 - (longlong)param_1))
    ;
    *(undefined4 *)(puVar3 + 0xc) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    ::FString::operator=
              ((FString *)(puVar3 + 0xd),
               (FString *)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    puVar1 = puVar1 + 0x10;
    *(undefined4 *)(puVar3 + 0xf) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    puVar3 = puVar3 + 0x10;
  }
  return true;
}

// GetStructTypeHash<FMultilayerProjectorLayer> @ 14ac4ef60

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMultilayerProjectorLayer>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
  uVar2 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x18),0x18,0);
  uVar6 = uVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar6) - uVar2 ^ uVar6 << 8;
  uVar2 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 0xd;
  uVar7 = (uVar6 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar7) - uVar2 ^ uVar7 << 0x10;
  uVar6 = (uVar2 - uVar1) - uVar7 ^ uVar1 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar1 ^ uVar6 >> 3;
  uVar2 = (uVar1 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar1 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x30),0x18,0);
  uVar7 = ((uVar6 - uVar2) - uVar7 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar5 = (uVar7 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar1 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar7 = (uVar6 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar1 ^ uVar7 >> 3;
  uVar6 = (uVar1 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar2 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x48),0x18,0);
  uVar1 = *(uint *)((longlong)param_1 + 0x60);
  uVar5 = ((uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar6) - uVar5 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar2 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar6 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar7 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar6 = ((uVar6 - uVar2) - uVar7 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar6) - uVar1 ^ uVar6 << 8;
  uVar7 = (uVar1 - uVar2) - uVar6 ^ uVar2 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar1 = (uVar2 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar1) - uVar6 ^ uVar1 >> 5;
  uVar2 = (uVar6 - uVar7) - uVar1 ^ uVar7 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar7 ^ uVar2 << 10;
  iVar3 = *(int *)((longlong)param_1 + 0x70) + -1;
  if (*(int *)((longlong)param_1 + 0x70) == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = *(wchar_t **)((longlong)param_1 + 0x68);
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  uVar2 = ((uVar7 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar6 ^ uVar2 << 8;
  uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar6 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar7 = (uVar6 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar6 = (uVar2 - uVar7) - uVar1 ^ uVar7 >> 3;
  uVar2 = (uVar1 - uVar6) - uVar7 ^ uVar6 << 10;
  uVar1 = *(uint *)((longlong)param_1 + 0x78);
  uVar2 = ((uVar7 - uVar2) - uVar6 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar6 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 0xc;
  uVar6 = (uVar6 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar6 ^ uVar1 >> 3;
  uVar6 = (uVar6 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar6) - uVar2 ^ uVar6 >> 0xf;
}

// MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_> @ 14ac4fc20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_> __cdecl
UE::Tasks::MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_>(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  TTask<TSharedPtr<UE::Mutable::Private::FMesh,1>_> in_RCX;
  
  *(longlong *)in_RCX = 0;
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init
              (this,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(552)"
               ,Default,Inline,None);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____MakeCompletedTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00____V_Tasks_UE__YA_AV__TTask_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___23_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)in_RCX;
  if (puVar3 != (undefined8 *)0x0) {
    *(longlong *)in_RCX = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)in_RCX = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return in_RCX;
}

// ReallocGrow<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 14ac4fce0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x1c0;
    uVar8 = (ulonglong)param_1;
    if (0x1c0 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x1c1) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 14ac4fdc0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x1c0;
  if (0x1c0 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<448,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

