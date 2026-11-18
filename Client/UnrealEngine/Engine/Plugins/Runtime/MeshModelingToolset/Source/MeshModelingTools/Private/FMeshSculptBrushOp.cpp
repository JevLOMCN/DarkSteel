// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 18

// GetPropertySetAs<UBaseSmoothBrushOpProps> @ 14ccafc10

UBaseSmoothBrushOpProps * __thiscall
FMeshSculptBrushOp::GetPropertySetAs<UBaseSmoothBrushOpProps>(FMeshSculptBrushOp *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UBaseSmoothBrushOpProps *pUVar4;
  UClass *pUVar5;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->PropertySet).WeakPtr);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UBaseSmoothBrushOpProps *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (UBaseSmoothBrushOpProps *)FWeakObjectPtr::Get(&(this->PropertySet).WeakPtr);
  if (pUVar4 != (UBaseSmoothBrushOpProps *)0x0) {
    pUVar5 = Z_Construct_UClass_UBaseSmoothBrushOpProps_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UBaseSmoothBrushOpProps *)(*pcVar2)();
    return pUVar4;
  }
  return (UBaseSmoothBrushOpProps *)0x0;
}

// GetPropertySetAs<USculptMaxBrushOpProps> @ 14ccafcd0

USculptMaxBrushOpProps * __thiscall
FMeshSculptBrushOp::GetPropertySetAs<USculptMaxBrushOpProps>(FMeshSculptBrushOp *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  USculptMaxBrushOpProps *pUVar4;
  UClass *pUVar5;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->PropertySet).WeakPtr);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USculptMaxBrushOpProps *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (USculptMaxBrushOpProps *)FWeakObjectPtr::Get(&(this->PropertySet).WeakPtr);
  if (pUVar4 != (USculptMaxBrushOpProps *)0x0) {
    pUVar5 = Z_Construct_UClass_USculptMaxBrushOpProps_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (USculptMaxBrushOpProps *)(*pcVar2)();
    return pUVar4;
  }
  return (USculptMaxBrushOpProps *)0x0;
}

// ~FMeshSculptBrushOp @ 14ccc3140

void __thiscall FMeshSculptBrushOp::~FMeshSculptBrushOp(FMeshSculptBrushOp *this)

{
  this->_padding_ = (longlong)&___7FMeshSculptBrushOp__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Falloff).SharedReferenceCount.ReferenceController);
  return;
}

// BeginStroke @ 14cce6ae0

void __thiscall
FMeshSculptBrushOp::BeginStroke
          (FMeshSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// CancelStroke @ 14ccebff0

void __thiscall FMeshSculptBrushOp::CancelStroke(FMeshSculptBrushOp *this)

{
  return;
}

// ConfigureOptions @ 14ccf14e0

void __thiscall
FMeshSculptBrushOp::ConfigureOptions(FMeshSculptBrushOp *this,FSculptBrushOptions *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->ConstantReferencePlane).Origin.field0_0x0._s_0.Y;
  (this->CurrentOptions).ConstantReferencePlane.Origin.field0_0x0._s_0.X =
       (param_1->ConstantReferencePlane).Origin.field0_0x0._s_0.X;
  (this->CurrentOptions).ConstantReferencePlane.Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ConstantReferencePlane).Rotation.field0_0x0._s_0.X;
  (this->CurrentOptions).ConstantReferencePlane.Origin.field0_0x0._s_0.Z =
       (param_1->ConstantReferencePlane).Origin.field0_0x0._s_0.Z;
  (this->CurrentOptions).ConstantReferencePlane.Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->ConstantReferencePlane).Rotation.field0_0x0._s_0.Z;
  (this->CurrentOptions).ConstantReferencePlane.Rotation.field0_0x0._s_0.Y =
       (param_1->ConstantReferencePlane).Rotation.field0_0x0._s_0.Y;
  (this->CurrentOptions).ConstantReferencePlane.Rotation.field0_0x0._s_0.Z = dVar1;
  (this->CurrentOptions).ConstantReferencePlane.Rotation.field0_0x0._s_0.W =
       (param_1->ConstantReferencePlane).Rotation.field0_0x0._s_0.W;
  return;
}

// EndStroke @ 14ccf91d0

void __thiscall
FMeshSculptBrushOp::EndStroke
          (FMeshSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetAlignStampToView @ 14ccfd8a0

bool __thiscall FMeshSculptBrushOp::GetAlignStampToView(FMeshSculptBrushOp *this)

{
  return false;
}

// GetBrushRegionType @ 14ccfe060

EBrushRegionType __thiscall FMeshSculptBrushOp::GetBrushRegionType(FMeshSculptBrushOp *this)

{
  return LocalSphere;
}

// GetBrushTargetType @ 14ccfe140

ESculptBrushOpTargetType __thiscall FMeshSculptBrushOp::GetBrushTargetType(FMeshSculptBrushOp *this)

{
  return SculptMesh;
}

// GetReferencePlaneType @ 14cd02270

EReferencePlaneType __thiscall FMeshSculptBrushOp::GetReferencePlaneType(FMeshSculptBrushOp *this)

{
  return None;
}

// GetStampAlignmentType @ 14cd02450

EStampAlignmentType __thiscall FMeshSculptBrushOp::GetStampAlignmentType(FMeshSculptBrushOp *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x48))();
  return (EStampAlignmentType)(cVar1 != '\0');
}

// IgnoreZeroMovements @ 14cd03b20

bool __thiscall FMeshSculptBrushOp::IgnoreZeroMovements(FMeshSculptBrushOp *this)

{
  return false;
}

// SupportsStrokeType @ 14cd2f540

bool __thiscall
FMeshSculptBrushOp::SupportsStrokeType(FMeshSculptBrushOp *this,EMeshSculptStrokeType param_1)

{
  if ((param_1 != Spacing) && ((param_1 == Airbrush || (param_1 == Dots)))) {
    return true;
  }
  return false;
}

// SupportsVariableSpacing @ 14cd2f600

bool __thiscall FMeshSculptBrushOp::SupportsVariableSpacing(FMeshSculptBrushOp *this)

{
  return false;
}

// UseLastStampFrameOnZeroMovement @ 14cd3d6d0

bool __thiscall FMeshSculptBrushOp::UseLastStampFrameOnZeroMovement(FMeshSculptBrushOp *this)

{
  return false;
}

// UsesAlpha @ 14cd3d6e0

bool __thiscall FMeshSculptBrushOp::UsesAlpha(FMeshSculptBrushOp *this)

{
  return false;
}

// WantsStampRegionPlane @ 14cd3da30

bool __thiscall FMeshSculptBrushOp::WantsStampRegionPlane(FMeshSculptBrushOp *this)

{
  return false;
}

