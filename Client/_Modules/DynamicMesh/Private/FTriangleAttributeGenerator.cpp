// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// FTriangleAttributeGenerator<int,1> @ 14c7b1c10

FTriangleAttributeGenerator<int,1> * __thiscall
UniformTessellateLocals::FTriangleAttributeGenerator<int,1>::FTriangleAttributeGenerator<int,1>
          (FTriangleAttributeGenerator<int,1> *this,FDynamicMesh3 *param_1,int param_2,
          FProgressCancel *param_3,bool param_4,TFunction<void___cdecl(int,int_*)> *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  this->_padding_ = (longlong)param_1;
  *(int *)&this->_padding_ = param_2;
  *(bool *)&this->_padding_ = param_4;
  this->OutTriangleCount = 0;
  this->OutInnerTriangleCount = 0;
  this->_padding_ = (longlong)&___7__FTriangleAttributeGenerator_H_00_UniformTessellateLocals__6B_;
  this->_padding_ = (longlong)param_3;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  lVar1 = *(longlong *)param_5;
  *(longlong *)&this->DataFunction = lVar1;
  *(undefined8 *)&(this->DataFunction).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  iVar3 = param_2 + 1;
  this->OutInnerTriangleCount = iVar3 * iVar3;
  this->OutTriangleCount = iVar3 * *(int *)(this->_padding_ + 0x170) * iVar3;
  return this;
}

// CopyToAttribute @ 14c7fb690

void __thiscall
UniformTessellateLocals::FTriangleAttributeGenerator<int,1>::CopyToAttribute
          (FTriangleAttributeGenerator<int,1> *this,TDynamicMeshTriangleAttribute<int,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (0 < this->OutTriangleCount) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar4 < (this->AttribValues).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar4 + 1;
      pFVar1 = (this->AttribValues).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 4;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
       (ulonglong)(uVar4 & 0x1ff) * 4) = *(undefined4 *)pFVar1;
      uVar4 = uVar5;
    } while ((int)uVar5 < this->OutTriangleCount);
  }
  return;
}

// CreateFromDynamicMeshTriangleAttribute @ 14c7fce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UniformTessellateLocals::FTriangleAttributeGenerator<int,1>,TDefaultDelete<UniformTessellateLocals::FTriangleAttributeGenerator<int,1>_>_>
 __cdecl UniformTessellateLocals::FTriangleAttributeGenerator<int,1>::
         CreateFromDynamicMeshTriangleAttribute
                   (FDynamicMesh3 *param_1,int param_2,FProgressCancel *param_3,bool param_4,
                   TDynamicMeshTriangleAttribute<int,1> *param_5)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined4 in_register_00000014;
  undefined8 *puVar4;
  undefined7 in_register_00000089;
  longlong in_stack_00000030;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined **local_48 [3];
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)0x0;
  if (in_stack_00000030 == 0) {
    param_1->_padding_ = 0;
  }
  else {
    local_48[0] = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateFromDynamicMeshTriangleAttribute___FTriangleAttributeGenerator_H_00_UniformTessellateLocals__SA_AV__TUniquePtr_V__FTriangleAttributeGenerator_H_00_UniformTessellateLocals__U__TDefaultDelete_V__FTriangleAttributeGenerator_H_00_UniformTessellateLocals______PEBVFDynamicMesh3_Geometry_UE__HPEAVFProgressCancel___NPEBV__TDynamicMeshTriangleAttribute_H_00_78__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = (undefined ***)0x0;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FTriangleAttributeGenerator<int,1>::CreateFromDynamicMeshTriangleAttribute'::__l2::<lambda_1>,void,int,int_*>
               ::Call;
    puVar1 = ::operator_new(0x70);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = CONCAT44(in_register_00000014,param_2);
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 4) = param_5._0_1_;
      *(int *)(puVar1 + 2) = (int)param_3;
      puVar1[3] = CONCAT71(in_register_00000089,param_4);
      *puVar1 = &___7__FTriangleAttributeGenerator_H_00_UniformTessellateLocals__6B_;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = local_58;
      puVar1[0xd] = 0;
      if (local_58 != (code *)0x0) {
        pppuVar2 = local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar2 = local_30;
        }
        (*(code *)**pppuVar2)();
      }
      iVar3 = (int)param_3 + 1;
      *(int *)((longlong)puVar1 + 0x2c) = iVar3 * iVar3;
      *(int *)(puVar1 + 5) = iVar3 * *(int *)(puVar1[1] + 0x170) * iVar3;
      puVar4 = puVar1;
    }
    param_1->_padding_ = (longlong)puVar4;
    if (local_58 != (code *)0x0) {
      pppuVar2 = local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar2 = local_30;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return (TUniquePtr<UniformTessellateLocals::FTriangleAttributeGenerator<int,1>,TDefaultDelete<UniformTessellateLocals::FTriangleAttributeGenerator<int,1>_>_>
          )(FTriangleAttributeGenerator<int,1> *)param_1;
}

// Generate @ 14c80a370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UniformTessellateLocals::FTriangleAttributeGenerator<int,1>::Generate
          (FTriangleAttributeGenerator<int,1> *this)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  
  lVar2 = this->_padding_;
  if ((((lVar2 == 0) || (*(int *)(lVar2 + 0x38) * 0x200 + *(int *)(lVar2 + 0x3c) != 0)) ||
      (*(int *)(lVar2 + 0x1e8) * 0x200 + *(int *)(lVar2 + 0x1ec) != 0)) ||
     ((*(int *)(lVar2 + 0x158) * 0x200 + *(int *)(lVar2 + 0x15c) != 0 || ((int)this->_padding_ < 0))
     )) {
    return false;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->AttribValues,this->OutTriangleCount,Default);
  iVar13 = 0;
  if (0 < *(int *)(this->_padding_ + 0x170)) {
    do {
      local_res18[0] = local_res10;
      local_res8[0] = iVar13;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
      plVar3 = *(longlong **)&(this->DataFunction).field_0x28;
      pcVar4 = *(code **)&this->DataFunction;
      plVar11 = (longlong *)&(this->DataFunction).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar11 = plVar3;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar4)(uVar10,local_res8,local_res18);
      iVar8 = this->OutInnerTriangleCount;
      iVar12 = 0;
      if (0 < iVar8) {
        do {
          uVar5 = local_res10[0];
          uVar1 = iVar8 * iVar13 + iVar12;
          uVar9 = 0;
          if ((int)uVar1 < (this->AttribValues).ArrayNum) {
            uVar9 = ~uVar1 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar12 = iVar12 + 1;
          *(undefined4 *)((this->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
               uVar5;
          iVar8 = this->OutInnerTriangleCount;
        } while (iVar12 < iVar8);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(this->_padding_ + 0x170));
  }
  return true;
}

