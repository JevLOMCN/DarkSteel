// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// GetLocalTransform @ 14b8c7780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
URigHierarchy::GetLocalTransform
          (URigHierarchy *this,TTransform<double> *__return_storage_ptr__,FRigElementKey *param_1,
          bool param_2)

{
  int iVar1;
  FRigTransformElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  
  uVar5 = GetIndex(this,param_1,true);
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->Elements).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar2 = *(FRigTransformElement **)
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    if (pFVar2 != (FRigTransformElement *)0x0) {
      lVar8 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
      pUVar9 = FRigTransformElement::StaticStruct();
      if (pUVar9 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar8 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          GetTransform(this,__return_storage_ptr__,pFVar2,param_2 ^ CurrentLocal);
          return __return_storage_ptr__;
        }
      }
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

