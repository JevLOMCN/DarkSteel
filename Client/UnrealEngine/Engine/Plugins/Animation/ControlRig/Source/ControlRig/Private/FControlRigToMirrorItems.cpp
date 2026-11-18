// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FControlRigToMirrorItems @ 14a3b66a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigToMirrorItems * __thiscall
FControlRigToMirrorItems::FControlRigToMirrorItems
          (FControlRigToMirrorItems *this,UControlRig *param_1)

{
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::AIE::FMirrorItem,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  URigHierarchy *this_00;
  bool bVar6;
  int iVar7;
  UClass *this_01;
  TTransform<double> *pTVar8;
  FGuid *pFVar9;
  FControlRigToMirrorItems *pFVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [8];
  FRigControlElement *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 *local_148 [2];
  FControlRigToMirrorItems *local_138;
  UObject *local_130;
  URigHierarchy *local_128 [2];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Elements;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  pTVar2 = &this->MirrorItems;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MirrorItems).ArrayNum = 0;
  (this->MirrorItems).ArrayMax = 0;
  *(undefined8 *)&(this->Results).MirroredItems = 0;
  *(undefined8 *)&(this->Results).MirroredItems.field_0x8 = 0;
  *(undefined8 *)&(this->Results).MirroredItems.field_0x20 = 0;
  *(undefined4 *)&(this->Results).MirroredItems.field_0x28 = 0;
  *(undefined4 *)&(this->Results).MirroredItems.field_0x2c = 0x80;
  *(undefined4 *)&(this->Results).MirroredItems.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Results).MirroredItems.field_0x34 = 0;
  *(undefined8 *)&(this->Results).MirroredItems.field_0x40 = 0;
  *(undefined4 *)&(this->Results).MirroredItems.field_0x48 = 0;
  *(undefined8 *)&(this->Results).ExactlyOnAxis.Elements = 0;
  *(undefined8 *)&(this->Results).ExactlyOnAxis.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Results).ExactlyOnAxis.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Results).ExactlyOnAxis.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Results).ExactlyOnAxis.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Results).ExactlyOnAxis.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Results).ExactlyOnAxis.Elements.field_0x34 = 0;
  (this->Results).ExactlyOnAxis.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Results).ExactlyOnAxis.HashSize = 0;
  *(undefined8 *)&(this->Results).NotOnAxis.Elements = 0;
  *(undefined8 *)&(this->Results).NotOnAxis.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Results).NotOnAxis.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Results).NotOnAxis.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Results).NotOnAxis.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Results).NotOnAxis.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Results).NotOnAxis.Elements.field_0x34 = 0;
  (this->Results).NotOnAxis.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Results).NotOnAxis.HashSize = 0;
  this->ControlRig = param_1;
  pFVar10 = this;
  if ((param_1 != (UControlRig *)0x0) &&
     (local_138 = this, local_128[0] = (URigHierarchy *)(**(code **)(param_1->_padding_ + 0x10))(),
     local_128[0] != (URigHierarchy *)0x0)) {
    this_01 = UControlRigPoseMirrorSettings::StaticClass();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    local_130 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    if (local_130 != (UObject *)0x0) {
      (**(code **)(this->ControlRig->_padding_ + 0x3c0))(this->ControlRig,local_148);
      this_00 = local_128[0];
      iVar12 = (int)local_148[1];
      local_178 = local_148[0] + iVar12;
      puVar13 = local_148[0];
      while( true ) {
        if ((int)local_148[1] != iVar12) {
          local_188[0] = 0;
          `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_188);
        }
        pFVar10 = local_138;
        if (puVar13 == local_178) break;
        local_180 = (FRigControlElement *)*puVar13;
        bVar6 = URigHierarchy::IsAnimatable(this_00,local_180);
        if (bVar6) {
          pTVar8 = URigHierarchy::GetTransform
                             (this_00,&local_98,(FRigTransformElement *)local_180,InitialGlobal);
          local_f8 = (pTVar8->Rotation).XY.m128d_f64[0];
          dStack_f0 = (pTVar8->Rotation).XY.m128d_f64[1];
          local_e8 = (pTVar8->Rotation).ZW.m128d_f64[0];
          dStack_e0 = (pTVar8->Rotation).ZW.m128d_f64[1];
          local_160 = (pTVar8->Translation).XY.m128d_f64[0];
          uStack_158 = (pTVar8->Translation).XY.m128d_f64[1];
          local_150 = (pTVar8->Translation).ZW.m128d_f64[0];
          dStack_c0 = (pTVar8->Translation).ZW.m128d_f64[1];
          local_b8 = (pTVar8->Scale3D).XY.m128d_f64[0];
          dStack_b0 = (pTVar8->Scale3D).XY.m128d_f64[1];
          local_a8 = (pTVar8->Scale3D).ZW.m128d_f64[0];
          dStack_a0 = (pTVar8->Scale3D).ZW.m128d_f64[1];
          local_170 = 0;
          uStack_168 = 0;
          local_118 = local_160;
          dStack_110 = uStack_158;
          local_108 = local_150;
          local_d8 = local_160;
          dStack_d0 = uStack_158;
          local_c8 = local_150;
          pFVar9 = FGuid::NewGuid((FGuid *)local_128);
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          local_170._0_4_ = pFVar9->A;
          local_170._4_4_ = pFVar9->B;
          uStack_168._0_4_ = pFVar9->C;
          uStack_168._4_4_ = pFVar9->D;
          if (((pFVar3 <= (FScriptContainerElement *)&local_170) &&
              ((FScriptContainerElement *)&local_170 <
               pFVar3 + (longlong)(this->MirrorItems).ArrayMax * 0x28)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FControlRigToMirrorItems *)(*pcVar5)();
            return pFVar10;
          }
          iVar7 = (this->MirrorItems).ArrayNum;
          if (iVar7 == (this->MirrorItems).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&pTVar2->AllocatorInstance,&(this->MirrorItems).ArrayMax);
          }
          (this->MirrorItems).ArrayNum = iVar7 + 1;
          lVar11 = (longlong)iVar7;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar4 + lVar11 * 0x28) = local_170;
          *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 8) = uStack_168;
          pFVar3 = pFVar4 + lVar11 * 0x28 + 0x10;
          *(undefined4 *)pFVar3 = (undefined4)local_160;
          *(undefined4 *)(pFVar3 + 4) = local_160._4_4_;
          *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_158;
          *(undefined4 *)(pFVar3 + 0xc) = uStack_158._4_4_;
          *(double *)(pFVar4 + lVar11 * 0x28 + 0x20) = local_150;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_180) &&
              ((FScriptContainerElement *)&local_180 <
               pFVar3 + (longlong)(this->Elements).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FControlRigToMirrorItems *)(*pcVar5)();
            return pFVar10;
          }
          iVar7 = (this->Elements).ArrayNum;
          if (iVar7 == (this->Elements).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,&(this->Elements).ArrayMax);
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          (this->Elements).ArrayNum = iVar7 + 1;
          *(FRigControlElement **)(pFVar3 + (longlong)iVar7 * 8) = local_180;
        }
        puVar13 = puVar13 + 1;
      }
      UE::AIE::FMirrorCalculator::FindMirroredItems
                (&local_138->Calculator,pTVar2,&local_138->Results,
                 (TEnumAsByte<EAxis::Type>)local_130[1].field_0x20,0.0,*(double *)(local_130 + 2));
      if (local_148[0] != (undefined8 *)0x0) {
        FMemory::Free(local_148[0]);
      }
    }
  }
  return pFVar10;
}

