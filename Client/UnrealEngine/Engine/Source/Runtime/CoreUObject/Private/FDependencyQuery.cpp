// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FDependencyQuery @ 14212b240

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "EDependencyQuery": Some values do not have unique names */

FDependencyQuery * __thiscall
UE::AssetRegistry::FDependencyQuery::FDependencyQuery
          (FDependencyQuery *this,EDependencyQuery param_1)

{
  TArray<UE::AssetRegistry::EDependencyProperty,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDependencyQuery *pFVar5;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar6;
  undefined1 local_18 [16];
  
  pTVar1 = &this->RequiredUnions;
  (this->RequiredUnions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
  (this->RequiredUnions).ArrayNum = 0;
  (this->RequiredUnions).ArrayMax = 1;
  if ((param_1 & Propagation) == NoRequirements) {
    this->Required =
         (EDependencyProperty)(param_1 >> 2) & Build | (EDependencyProperty)(param_1 >> 1) & Game;
  }
  else {
    this->Required = None;
    param_1 = param_1 & ~(NotBuild|Build|EditorOnly|Game);
    FVar6 = (this->RequiredUnions).AllocatorInstance.SecondaryData;
    local_18[0] = 6;
    if (FVar6 == (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FVar6 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)pTVar1;
    }
    if (((ulonglong)FVar6 <= local_18) &&
       (local_18 < (undefined1 *)((longlong)(this->RequiredUnions).ArrayMax + (longlong)FVar6))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDependencyQuery *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->RequiredUnions).ArrayNum;
    if (iVar4 == (this->RequiredUnions).ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::AssetRegistry::EDependencyProperty>_>
                        (0x101,&pTVar1->AllocatorInstance,&(this->RequiredUnions).ArrayMax);
    }
    (this->RequiredUnions).ArrayNum = iVar4 + 1;
    FVar6 = (this->RequiredUnions).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FVar6 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (longlong)iVar4) = local_18[0];
  }
  this->Required =
       this->Required |
       (EDependencyProperty)(param_1 >> 6) & CookRule | (EDependencyProperty)(param_1 >> 5) & Direct
       | (EDependencyProperty)param_1 & Hard;
  this->Excluded =
       (EDependencyProperty)(param_1 >> 7) & CookRule | (EDependencyProperty)(param_1 >> 6) & Direct
       | (EDependencyProperty)(param_1 >> 3) & Build | (EDependencyProperty)(param_1 >> 2) & Game |
       (EDependencyProperty)(param_1 >> 1) & Hard;
  return this;
}

