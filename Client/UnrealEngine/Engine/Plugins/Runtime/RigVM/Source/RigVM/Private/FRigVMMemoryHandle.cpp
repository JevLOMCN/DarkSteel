// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// GetData_Internal @ 14a094b50

uchar * __thiscall
FRigVMMemoryHandle::GetData_Internal(FRigVMMemoryHandle *this,bool param_1,int param_2)

{
  EArrayPropertyFlags EVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  FProperty *_Src;
  FProperty *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  FProperty *pFVar10;
  FScriptArrayHelper local_38;
  
  if (param_2 == -1) {
    if ((param_1) && (this->PropertyPath != (FRigVMPropertyPath *)0x0)) {
      puVar7 = FRigVMPropertyPath::GetData_Internal(this->PropertyPath,this->Ptr,this->Property);
      return puVar7;
    }
    return this->Ptr;
  }
  if ((this->PropertyPath != (FRigVMPropertyPath *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyPath == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorage.h"
                         ,0x33b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  if ((param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFollowPropertyPath",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorage.h"
                         ,0x33c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  pFVar8 = this->Property;
  pFVar10 = (FProperty *)0x0;
  if (((pFVar8 == (FProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar8 = pFVar10, bVar4)
     ) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  FVar9 = (FScriptArrayHelper_u_8)this->Ptr;
  EVar1 = (EArrayPropertyFlags)pFVar8[1]._padding_;
  local_38.ElementAlignment = (**(code **)(*(longlong *)pFVar8[1]._padding_ + 0x168))();
  local_38.InnerProperty = (FProperty *)pFVar8[1]._padding_;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = FVar9;
  local_38.ArrayFlags = EVar1;
  if ((local_38.ElementSize < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  FVar9 = local_38.field1_0x8;
  if ((local_38.field1_0x8.FreezableArray)->ArrayNum + -1 <= param_2) {
    iVar5 = (local_38.field1_0x8.FreezableArray)->ArrayNum + -1;
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = (param_2 - iVar6) + 1;
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if (((0 < iVar6) &&
        (iVar6 = FScriptArrayHelper::AddValues(&local_38,iVar6), FVar9 = local_38.field1_0x8,
        0 < iVar6)) && ((local_38.field1_0x8.FreezableArray)->ArrayNum != 0)) {
      puVar7 = (uchar *)(local_38.field1_0x8.FreezableArray)->_padding_;
      if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar7 & 1) != 0)) {
        puVar7 = &(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar7 >> 0x18);
      }
      _Src = (FProperty *)(puVar7 + (longlong)(iVar6 + -1) * (longlong)local_38.ElementSize);
      if (_Src != (FProperty *)0x0) {
        plVar2 = (longlong *)pFVar8[1]._padding_;
        while (iVar6 < (FVar9.FreezableArray)->ArrayNum) {
          pFVar8 = pFVar10;
          if ((FVar9.FreezableArray)->ArrayNum == 0) {
LAB_14a094d82:
            if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar2 + 0xf0))(plVar2,pFVar8,_Src,(int)plVar2[6]);
              FVar9 = local_38.field1_0x8;
              goto LAB_14a094dc7;
            }
            memcpy(pFVar8,_Src,
                   (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
            iVar6 = iVar6 + 1;
            FVar9 = local_38.field1_0x8;
          }
          else {
            puVar7 = (uchar *)(FVar9.FreezableArray)->_padding_;
            if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)puVar7 & 1) != 0)) {
              puVar7 = &(FVar9.HeapArray)->field_0x0 + ((longlong)puVar7 >> 0x18);
            }
            pFVar8 = (FProperty *)(puVar7 + (longlong)local_38.ElementSize * (longlong)iVar6);
            if ((FProperty *)(puVar7 + (longlong)local_38.ElementSize * (longlong)iVar6) != _Src)
            goto LAB_14a094d82;
LAB_14a094dc7:
            iVar6 = iVar6 + 1;
          }
        }
      }
    }
  }
  if ((FVar9.FreezableArray)->ArrayNum != 0) {
    puVar7 = (uchar *)(FVar9.FreezableArray)->_padding_;
    if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && (((ulonglong)puVar7 & 1) != 0)
       ) {
      puVar7 = &(FVar9.HeapArray)->field_0x0 + ((longlong)puVar7 >> 0x18);
    }
    pFVar10 = (FProperty *)(puVar7 + (longlong)local_38.ElementSize * (longlong)param_2);
  }
  return (uchar *)pFVar10;
}

// ComputeLazyValueIfNecessary @ 14a0d0080

bool __thiscall
FRigVMMemoryHandle::ComputeLazyValueIfNecessary
          (FRigVMMemoryHandle *this,FRigVMExtendedExecuteContext *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  ERigVMExecuteResult EVar3;
  
  if (this->LazyBranch == (FRigVMLazyBranch *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLazy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  EVar3 = FRigVMLazyBranch::ExecuteIfRequired(this->LazyBranch,param_1,param_2);
  return EVar3 != Failed;
}

