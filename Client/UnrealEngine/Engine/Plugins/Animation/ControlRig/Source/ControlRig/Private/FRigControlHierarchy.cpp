// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// StaticStruct @ 14a2cab20

UScriptStruct * __cdecl FRigControlHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlHierarchy.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlHierarchy,(UObject *)pUVar1,
                         L"RigControlHierarchy");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlHierarchy.OuterSingleton;
}

// FRigControlHierarchy @ 14a2d9da0

FRigControlHierarchy * __thiscall
FRigControlHierarchy::FRigControlHierarchy(FRigControlHierarchy *this)

{
  (this->Controls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Controls).ArrayNum = 0;
  (this->Controls).ArrayMax = 0;
  return this;
}

// operator= @ 14a2e0150

FRigControlHierarchy * __thiscall
FRigControlHierarchy::operator=(FRigControlHierarchy *this,FRigControlHierarchy *param_1)

{
  int *piVar1;
  int iVar2;
  FRigControl *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigControl,int>
              ((FRigControl *)(this->Controls).AllocatorInstance.Data,(this->Controls).ArrayNum);
    iVar2 = (param_1->Controls).ArrayNum;
    piVar1 = &(this->Controls).ArrayMax;
    pFVar3 = (FRigControl *)(param_1->Controls).AllocatorInstance.Data;
    (this->Controls).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x360,0x10,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FRigControl,FRigControl,int>
              ((this->Controls).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

// Add @ 14a2ea750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigControl * __thiscall
FRigControlHierarchy::Add
          (FRigControlHierarchy *this,FName *param_1,ERigControlType param_2,FName *param_3,
          FName *param_4,TTransform<double> *param_5,FRigControlValue *param_6,FName *param_7,
          TTransform<double> *param_8,FLinearColor *param_9)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FRigControlHierarchy *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FRigControl *pFVar9;
  longlong lVar10;
  undefined1 auStack_4a8 [32];
  FRigControl *local_488;
  FRigControl *local_480;
  longlong local_478;
  longlong local_470;
  undefined8 local_468;
  ERigControlType local_458;
  FLinearColor *local_450;
  FRigControlHierarchy *local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  FRigControl local_3b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  local_450 = param_9;
  local_458 = param_2;
  local_448 = this;
  FRigControl::FRigControl(&local_3b8);
  local_3b8.OffsetTransform.Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
  local_3b8.OffsetTransform.Rotation.XY.m128d_f64[1] = (param_5->Rotation).XY.m128d_f64[1];
  local_3b8.OffsetTransform.Rotation.ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
  local_3b8.OffsetTransform.Rotation.ZW.m128d_f64[1] = (param_5->Rotation).ZW.m128d_f64[1];
  local_3b8._padding_ = *(longlong *)param_1;
  local_3b8.InitialValue.FloatStorage.bValid = (param_6->FloatStorage).bValid;
  local_3b8.InitialValue.FloatStorage._129_3_ = *(undefined3 *)&(param_6->FloatStorage).field_0x81;
  local_3b8.OffsetTransform.Translation.XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
  local_3b8.OffsetTransform.Translation.XY.m128d_f64[1] = (param_5->Translation).XY.m128d_f64[1];
  local_3b8.OffsetTransform.Scale3D.XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
  local_3b8.OffsetTransform.Scale3D.XY.m128d_f64[1] = (param_5->Scale3D).XY.m128d_f64[1];
  local_3b8.InitialValue.FloatStorage.Float00 = (param_6->FloatStorage).Float00;
  local_3b8.InitialValue.FloatStorage.Float01 = (param_6->FloatStorage).Float01;
  local_3b8.InitialValue.FloatStorage.Float02 = (param_6->FloatStorage).Float02;
  local_3b8.InitialValue.FloatStorage.Float03 = (param_6->FloatStorage).Float03;
  local_3b8.ParentName = *param_3;
  local_3b8.OffsetTransform.Translation.ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
  local_3b8.OffsetTransform.Translation.ZW.m128d_f64[1] = (param_5->Translation).ZW.m128d_f64[1];
  local_3b8.OffsetTransform.Scale3D.ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
  local_3b8.OffsetTransform.Scale3D.ZW.m128d_f64[1] = (param_5->Scale3D).ZW.m128d_f64[1];
  local_3b8.InitialValue.FloatStorage.Float20 = (param_6->FloatStorage).Float20;
  local_3b8.InitialValue.FloatStorage.Float21 = (param_6->FloatStorage).Float21;
  local_3b8.InitialValue.FloatStorage.Float22 = (param_6->FloatStorage).Float22;
  local_3b8.InitialValue.FloatStorage.Float23 = (param_6->FloatStorage).Float23;
  local_3b8.SpaceName = *param_4;
  local_3b8.InitialValue.FloatStorage.Float10 = (param_6->FloatStorage).Float10;
  local_3b8.InitialValue.FloatStorage.Float11 = (param_6->FloatStorage).Float11;
  local_3b8.InitialValue.FloatStorage.Float12 = (param_6->FloatStorage).Float12;
  local_3b8.InitialValue.FloatStorage.Float13 = (param_6->FloatStorage).Float13;
  local_3b8.InitialValue.FloatStorage.Float00_2 = (param_6->FloatStorage).Float00_2;
  local_3b8.InitialValue.FloatStorage.Float01_2 = (param_6->FloatStorage).Float01_2;
  local_3b8.InitialValue.FloatStorage.Float02_2 = (param_6->FloatStorage).Float02_2;
  local_3b8.InitialValue.FloatStorage.Float03_2 = (param_6->FloatStorage).Float03_2;
  local_3c0 = 0;
  local_3b8.InitialValue.FloatStorage.Float30 = (param_6->FloatStorage).Float30;
  local_3b8.InitialValue.FloatStorage.Float31 = (param_6->FloatStorage).Float31;
  local_3b8.InitialValue.FloatStorage.Float32 = (param_6->FloatStorage).Float32;
  local_3b8.InitialValue.FloatStorage.Float33 = (param_6->FloatStorage).Float33;
  local_3b8.Value.FloatStorage.bValid = false;
  local_3b8.Value.FloatStorage._129_3_ = 0;
  local_3b8.GizmoName = *param_7;
  local_3b8.InitialValue.FloatStorage.Float20_2 = (param_6->FloatStorage).Float20_2;
  local_3b8.InitialValue.FloatStorage.Float21_2 = (param_6->FloatStorage).Float21_2;
  local_3b8.InitialValue.FloatStorage.Float22_2 = (param_6->FloatStorage).Float22_2;
  local_3b8.InitialValue.FloatStorage.Float23_2 = (param_6->FloatStorage).Float23_2;
  local_3b8.ControlType = local_458;
  local_3b8.InitialValue.FloatStorage.Float10_2 = (param_6->FloatStorage).Float10_2;
  local_3b8.InitialValue.FloatStorage.Float11_2 = (param_6->FloatStorage).Float11_2;
  local_3b8.InitialValue.FloatStorage.Float12_2 = (param_6->FloatStorage).Float12_2;
  local_3b8.InitialValue.FloatStorage.Float13_2 = (param_6->FloatStorage).Float13_2;
  local_3b8.ParentIndex = -1;
  local_3b8.InitialValue.FloatStorage.Float30_2 = (param_6->FloatStorage).Float30_2;
  local_3b8.InitialValue.FloatStorage.Float31_2 = (param_6->FloatStorage).Float31_2;
  local_3b8.InitialValue.FloatStorage.Float32_2 = (param_6->FloatStorage).Float32_2;
  local_3b8.InitialValue.FloatStorage.Float33_2 = (param_6->FloatStorage).Float33_2;
  local_3b8.SpaceIndex = -1;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3b8.Value.FloatStorage.Float00 = 0.0;
  local_3b8.Value.FloatStorage.Float01 = 0.0;
  local_3b8.Value.FloatStorage.Float02 = 0.0;
  local_3b8.Value.FloatStorage.Float03 = 0.0;
  local_3b8.Value.FloatStorage.Float10 = 0.0;
  local_3b8.Value.FloatStorage.Float11 = 0.0;
  local_3b8.Value.FloatStorage.Float12 = 0.0;
  local_3b8.Value.FloatStorage.Float13 = 0.0;
  local_3b8.Value.FloatStorage.Float20 = 0.0;
  local_3b8.Value.FloatStorage.Float21 = 0.0;
  local_3b8.Value.FloatStorage.Float22 = 0.0;
  local_3b8.Value.FloatStorage.Float23 = 0.0;
  local_3b8.Value.FloatStorage.Float30 = 0.0;
  local_3b8.Value.FloatStorage.Float31 = 0.0;
  local_3b8.Value.FloatStorage.Float32 = 0.0;
  local_3b8.Value.FloatStorage.Float33 = 0.0;
  local_3b8.Value.FloatStorage.Float00_2 = 0.0;
  local_3b8.Value.FloatStorage.Float01_2 = 0.0;
  local_3b8.Value.FloatStorage.Float02_2 = 0.0;
  local_3b8.Value.FloatStorage.Float03_2 = 0.0;
  local_3b8.Value.FloatStorage.Float10_2 = 0.0;
  local_3b8.Value.FloatStorage.Float11_2 = 0.0;
  local_3b8.Value.FloatStorage.Float12_2 = 0.0;
  local_3b8.Value.FloatStorage.Float13_2 = 0.0;
  local_3b8.Value.FloatStorage.Float20_2 = 0.0;
  local_3b8.Value.FloatStorage.Float21_2 = 0.0;
  local_3b8.Value.FloatStorage.Float22_2 = 0.0;
  local_3b8.Value.FloatStorage.Float23_2 = 0.0;
  local_3b8.Value.FloatStorage.Float30_2 = 0.0;
  local_3b8.Value.FloatStorage.Float31_2 = 0.0;
  local_3b8.Value.FloatStorage.Float32_2 = 0.0;
  local_3b8.Value.FloatStorage.Float33_2 = 0.0;
  local_3b8.GizmoTransform.Rotation.XY.m128d_f64[0] = (param_8->Rotation).XY.m128d_f64[0];
  local_3b8.GizmoTransform.Rotation.XY.m128d_f64[1] = (param_8->Rotation).XY.m128d_f64[1];
  local_3b8.GizmoTransform.Translation.XY.m128d_f64[0] = (param_8->Translation).XY.m128d_f64[0];
  local_3b8.GizmoTransform.Translation.XY.m128d_f64[1] = (param_8->Translation).XY.m128d_f64[1];
  local_3b8.GizmoTransform.Rotation.ZW.m128d_f64[0] = (param_8->Rotation).ZW.m128d_f64[0];
  local_3b8.GizmoTransform.Rotation.ZW.m128d_f64[1] = (param_8->Rotation).ZW.m128d_f64[1];
  local_3b8.GizmoTransform.Scale3D.XY.m128d_f64[0] = (param_8->Scale3D).XY.m128d_f64[0];
  local_3b8.GizmoTransform.Scale3D.XY.m128d_f64[1] = (param_8->Scale3D).XY.m128d_f64[1];
  local_3b8.GizmoTransform.Translation.ZW.m128d_f64[0] = (param_8->Translation).ZW.m128d_f64[0];
  local_3b8.GizmoTransform.Translation.ZW.m128d_f64[1] = (param_8->Translation).ZW.m128d_f64[1];
  local_3b8.GizmoTransform.Scale3D.ZW.m128d_f64[0] = (param_8->Scale3D).ZW.m128d_f64[0];
  local_3b8.GizmoTransform.Scale3D.ZW.m128d_f64[1] = (param_8->Scale3D).ZW.m128d_f64[1];
  local_3b8.GizmoColor.field0_0x0._0_8_ = *(undefined8 *)&local_450->field0_0x0;
  local_3b8.GizmoColor.field0_0x0._8_8_ = *(undefined8 *)((longlong)&local_450->field0_0x0 + 8);
  if (local_3b8.InitialValue.FloatStorage.bValid == false) {
    FRigControlValue::SetFromTransform
              (&local_3b8.InitialValue,&UE::Math::TTransform<double>::Identity,local_458,
               local_3b8.PrimaryAxis);
  }
  pFVar5 = local_448;
  pFVar9 = (FRigControl *)(local_448->Controls).AllocatorInstance.Data;
  if ((pFVar9 <= &local_3b8) &&
     (lVar10 = (longlong)(local_448->Controls).ArrayMax, &local_3b8 < pFVar9 + lVar10)) {
    local_470 = (longlong)(local_448->Controls).ArrayNum;
    local_468 = 0x360;
    local_488 = &local_3b8;
    local_480 = pFVar9;
    local_478 = lVar10;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRigControl *)(*pcVar4)();
      return pFVar9;
    }
  }
  uVar7 = (pFVar5->Controls).ArrayNum;
  piVar1 = &(pFVar5->Controls).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x360,0x10,(ForAnyElementType *)pFVar5,piVar1);
  }
  (pFVar5->Controls).ArrayNum = uVar7 + 1;
  lVar10 = (longlong)(int)uVar7 * 0x360;
  FRigControl::FRigControl
            ((FRigControl *)((pFVar5->Controls).AllocatorInstance.Data + lVar10),&local_3b8);
  iVar2 = (pFVar5->Controls).ArrayNum;
  uVar8 = 0;
  if ((int)uVar7 < iVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_488 = (FRigControl *)(longlong)(int)uVar7;
    local_480 = (FRigControl *)(longlong)iVar2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRigControl *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar3 = (pFVar5->Controls).AllocatorInstance.Data;
  local_3b8._padding_ = (longlong)&___7FRigControl__6B_;
  if (local_3b8.Dependents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Dependents.AllocatorInstance.Data);
  }
  return (FRigControl *)(pFVar3 + lVar10);
}

// PostLoad @ 14a335e50

void __thiscall FRigControlHierarchy::PostLoad(FRigControlHierarchy *this)

{
  return;
}

