// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FindOrAddImpl<UObject_const_*_const_&> @ 14e5c7c90

TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UObject_const_*_const_&>
          (TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObject_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UObject_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14e5f1860

TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,UObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == param_1) {
          pTVar4 = (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14e5f1900

UMaterialExpression ** __thiscall
TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
::FindChecked(TMapBase<FString,UMaterialExpression_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UMaterialExpression **ppUVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,UMaterialExpression_*>,TDefaultMapHashableKeyFuncs<FString,UMaterialExpression_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppUVar5 = (UMaterialExpression **)(*pcVar1)();
      return ppUVar5;
    }
  }
  return (UMaterialExpression **)(lVar8 + 0x10);
}

