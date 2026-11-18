// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1474978a0

UScriptStruct * __cdecl FAnimNodeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeData,(UObject *)pUVar1,L"AnimNodeData");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeData.OuterSingleton;
}

// GetAnimClassInterface @ 1474d5f50

IAnimClassInterface * __thiscall FAnimNodeData::GetAnimClassInterface(FAnimNodeData *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  IAnimClassInterface *pIVar4;
  
  puVar1 = &(this->AnimClassInterface).field_0x8;
  if (((*(longlong *)&this->AnimClassInterface == 0) || (*(longlong *)puVar1 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimClassInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimNodeData.h"
                         ,0x76,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar4 = (IAnimClassInterface *)(*pcVar2)();
    return pIVar4;
  }
  if (*(longlong *)&this->AnimClassInterface == 0) {
    return (IAnimClassInterface *)0x0;
  }
  return *(IAnimClassInterface **)puVar1;
}

// GetData @ 1474d8fe0

void * __thiscall
FAnimNodeData::GetData
          (FAnimNodeData *this,FNodeDataId *param_1,FAnimNode_Base *param_2,UObject *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  UClass *pUVar8;
  IAnimClassInterface *pIVar9;
  IAnimClassInterface *pIVar10;
  
  if (((param_1->Index < 0) || ((this->Entries).ArrayNum <= param_1->Index)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(InId.Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  uVar1 = param_1->Index;
  pIVar10 = (IAnimClassInterface *)0x0;
  uVar6 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  uVar1 = *(uint *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  if ((uVar1 == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry != 0xffffffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x2e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  if (-1 < (int)uVar1) {
    if (*(longlong *)&this->AnimClassInterface != 0) {
      pIVar10 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
    }
    pvVar7 = (void *)(**(code **)((longlong)*pIVar10 + 0x100))(pIVar10,uVar1 & 0x7fffffff);
    return pvVar7;
  }
  if (param_3 == (UObject *)0x0) {
    pIVar9 = pIVar10;
    if (*(longlong *)&this->AnimClassInterface != 0) {
      pIVar9 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
    }
    param_3 = IAnimClassInterface::GetObjectPtrFromAnimNode(pIVar9,param_2);
    if (param_3 != (UObject *)0x0) goto LAB_1474d90ed;
  }
  else {
LAB_1474d90ed:
    lVar3 = *(longlong *)&param_3->field_0x10;
    pIVar9 = pIVar10;
    if (*(longlong *)&this->AnimClassInterface != 0) {
      pIVar9 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
    }
    pUVar8 = IAnimClassInterface::GetActualAnimClass(pIVar9);
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1474d9153;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentObject && CurrentObject->GetClass()->IsChildOf(IAnimClassInterface::GetActualAnimClass(&(*AnimClassInterface)))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                     ,0x37,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
LAB_1474d9153:
  if (*(longlong *)&this->AnimClassInterface != 0) {
    pIVar10 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
  }
  pvVar7 = (void *)(**(code **)((longlong)*pIVar10 + 0x108))(pIVar10,uVar1 & 0x7fffffff,param_3);
  return pvVar7;
}

// GetInstanceData @ 1474da0d0

void * __thiscall
FAnimNodeData::GetInstanceData
          (FAnimNodeData *this,FNodeDataId *param_1,FAnimNode_Base *param_2,UObject *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  UClass *pUVar8;
  IAnimClassInterface *pIVar9;
  IAnimClassInterface *pIVar10;
  
  if (((param_1->Index < 0) || ((this->Entries).ArrayNum <= param_1->Index)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(InId.Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x4a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  uVar1 = param_1->Index;
  pIVar10 = (IAnimClassInterface *)0x0;
  uVar6 = 0;
  if ((int)uVar1 < (this->Entries).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  uVar1 = *(uint *)((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  if ((uVar1 == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry != 0xffffffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                         ,0x4d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  if (-1 < (int)uVar1) {
    return (void *)0x0;
  }
  if (param_3 == (UObject *)0x0) {
    pIVar9 = pIVar10;
    if (*(longlong *)&this->AnimClassInterface != 0) {
      pIVar9 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
    }
    param_3 = IAnimClassInterface::GetObjectPtrFromAnimNode(pIVar9,param_2);
    if (param_3 != (UObject *)0x0) goto LAB_1474da1df;
  }
  else {
LAB_1474da1df:
    lVar3 = *(longlong *)&param_3->field_0x10;
    pIVar9 = pIVar10;
    if (*(longlong *)&this->AnimClassInterface != 0) {
      pIVar9 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
    }
    pUVar8 = IAnimClassInterface::GetActualAnimClass(pIVar9);
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1474da245;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentObject && CurrentObject->GetClass()->IsChildOf(IAnimClassInterface::GetActualAnimClass(&(*AnimClassInterface)))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeData.cpp"
                     ,0x56,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
LAB_1474da245:
  if (*(longlong *)&this->AnimClassInterface != 0) {
    pIVar10 = *(IAnimClassInterface **)&(this->AnimClassInterface).field_0x8;
  }
  pvVar7 = (void *)(**(code **)((longlong)*pIVar10 + 0x108))(pIVar10,uVar1 & 0x7fffffff,param_3);
  return pvVar7;
}

