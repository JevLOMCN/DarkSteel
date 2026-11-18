// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// operator() @ 14ccc7c40

void __thiscall `FFlattenBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double local_118;
  double dStack_110;
  double local_108;
  TVector<double> local_100;
  double local_d8;
  
  plVar19 = *(longlong **)this;
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar19[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar17 = *(uint *)(*plVar19 + lVar20 * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar17 >> 9) * 8
           );
  pdVar1 = (double *)(lVar4 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
  local_118 = *pdVar1;
  dStack_110 = pdVar1[1];
  local_108 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            (&local_100,(FDynamicMesh3 *)**(longlong **)((longlong)this + 8),uVar17,true,true);
  pdVar1 = *(double **)((longlong)this + 0x10);
  dVar2 = pdVar1[3];
  dVar3 = pdVar1[4];
  dVar21 = pdVar1[5] + pdVar1[5];
  dVar22 = pdVar1[6] * (dVar3 + dVar3) + dVar21 * dVar2;
  dVar21 = dVar21 * dVar3 - pdVar1[6] * (dVar2 + dVar2);
  dVar2 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
  dVar23 = (dStack_110 - pdVar1[1]) * dVar21 + (local_118 - *pdVar1) * dVar22 +
           (local_108 - pdVar1[2]) * dVar2;
  dVar8 = local_118 - dVar23 * dVar22;
  dVar3 = local_108 - dVar23 * dVar2;
  dVar24 = dVar8 - local_118;
  dVar10 = dStack_110 - dVar23 * dVar21;
  dVar15 = dVar3 - local_108;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_108;
  dVar14 = dVar10 - dStack_110;
  dVar23 = local_108;
  dVar9 = local_118;
  dVar11 = dStack_110;
  if (0.0 <= (dVar14 * dVar21 + dVar24 * dVar22 + dVar15 * dVar2) *
             **(double **)((longlong)this + 0x18)) {
    lVar4 = *(longlong *)((longlong)this + 0x20);
    if ((*(longlong *)(lVar4 + 0x10) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    uVar6 = *(undefined8 *)((longlong)this + 0x28);
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar7 = (code *)*puVar5;
    plVar19 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar19 = (longlong *)puVar5[5];
    }
    uVar18 = (**(code **)(*plVar19 + 8))();
    dVar21 = (double)(*pcVar7)(uVar18,uVar6,&local_118);
    dVar22 = dVar21 * **(double **)((longlong)this + 0x30);
    dVar26 = dVar24 * dVar22;
    dVar2 = dVar14 * dVar22;
    dVar22 = dVar15 * dVar22;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar24 * dVar24 + dVar14 * dVar14 + dVar15 * dVar15;
    auVar25 = sqrtpd(auVar25,auVar12);
    dVar24 = auVar25._0_8_;
    if (dVar24 <= 0.0) {
      dVar24 = 0.0;
    }
    dVar23 = dVar3;
    dVar9 = dVar8;
    dVar11 = dVar10;
    local_d8 = dVar3;
    if (dVar2 * dVar2 + dVar26 * dVar26 + dVar22 * dVar22 <= dVar24 * dVar24) {
      dVar23 = dVar22 * dVar21 + local_108;
      dVar11 = dVar2 * dVar21 + dStack_110;
      dVar9 = dVar26 * dVar21 + local_118;
      local_d8 = dVar23;
    }
  }
  plVar19 = *(longlong **)((longlong)this + 0x38);
  uVar17 = 0;
  if (param_1 < (int)plVar19[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = *plVar19;
  auVar13._8_4_ = SUB84(dVar11,0);
  auVar13._0_8_ = dVar9;
  auVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + lVar20 * 0x18) = auVar13;
  *(double *)(lVar4 + 0x10 + lVar20 * 0x18) = dVar23;
  return;
}

// ApplyStamp @ 14ccdf030

void __thiscall
FFlattenBrushOp::ApplyStamp
          (FFlattenBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  double *local_res8;
  FDynamicMesh3 *local_res10;
  double local_res18;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FDynamicMesh3 **local_50;
  TFrame3<double> *local_48;
  undefined8 *local_40;
  FFlattenBrushOp *local_38;
  FSculptBrushStamp *local_30;
  double *local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_20;
  
  local_res10 = param_1;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UFlattenBrushOpProps_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14ccdf0ea;
  }
  pUVar4 = (UObject *)0x0;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ccdf0ea:
  local_res8 = (&`public:_virtual_void___cdecl_FFlattenBrushOp::ApplyStamp(UE::Geometry::FDynamicMesh3_const*___ptr64,FSculptBrushStamp_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                 ::__l2::PlaneSigns)[(byte)pUVar4[4].field_0x24];
  local_50 = &local_res10;
  local_48 = &param_2->RegionPlane;
  local_40 = &local_res8;
  local_28 = &local_res18;
  local_20 = param_4;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FFlattenBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_60 = &local_58;
  local_res18 = param_2->Power * param_2->Radius * param_2->DeltaTime * this->BrushSpeedTuning;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_58 = param_3;
  local_38 = this;
  local_30 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             param_4._0_1_,None,&local_78);
  return;
}

// WantsStampRegionPlane @ 14cd3da20

bool __thiscall FFlattenBrushOp::WantsStampRegionPlane(FFlattenBrushOp *this)

{
  return true;
}

