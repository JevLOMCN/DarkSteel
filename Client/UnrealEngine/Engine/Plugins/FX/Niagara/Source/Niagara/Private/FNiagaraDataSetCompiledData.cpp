// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 148e43940

UScriptStruct * __cdecl FNiagaraDataSetCompiledData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData,(UObject *)pUVar1,
                         L"NiagaraDataSetCompiledData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataSetCompiledData.OuterSingleton;
}

// operator= @ 148e571a0

FNiagaraDataSetCompiledData * __thiscall
FNiagaraDataSetCompiledData::operator=
          (FNiagaraDataSetCompiledData *this,FNiagaraDataSetCompiledData *param_1)

{
  TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  FNiagaraVariableLayoutInfo *pFVar5;
  undefined3 uVar6;
  
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
            (&this->Variables,&param_1->Variables);
  pTVar1 = &this->VariableLayouts;
  if (pTVar1 != &param_1->VariableLayouts) {
    DestructItems<FNiagaraVariableLayoutInfo,int>
              ((FNiagaraVariableLayoutInfo *)(pTVar1->AllocatorInstance).Data,
               (this->VariableLayouts).ArrayNum);
    iVar3 = (param_1->VariableLayouts).ArrayNum;
    piVar2 = &(this->VariableLayouts).ArrayMax;
    pFVar5 = (FNiagaraVariableLayoutInfo *)(param_1->VariableLayouts).AllocatorInstance.Data;
    (this->VariableLayouts).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  (this->ID).Name = (param_1->ID).Name;
  uVar6 = *(undefined3 *)&(param_1->ID).field_0x9;
  (this->ID).Type = (param_1->ID).Type;
  *(undefined3 *)&(this->ID).field_0x9 = uVar6;
  this->TotalFloatComponents = param_1->TotalFloatComponents;
  this->TotalInt32Components = param_1->TotalInt32Components;
  this->TotalHalfComponents = param_1->TotalHalfComponents;
  *(uint *)&this->field_0x38 =
       *(uint *)&this->field_0x38 ^
       (this->bRequiresPersistentIDs ^ param_1->bRequiresPersistentIDs) & 1;
  this->SimTarget = param_1->SimTarget;
  this->CachedLayoutHash = param_1->CachedLayoutHash;
  return this;
}

// GetLayoutHash @ 148e6cb00

uint __thiscall FNiagaraDataSetCompiledData::GetLayoutHash(FNiagaraDataSetCompiledData *this)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  FNiagaraTypeDefinition *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  
  if (this->CachedLayoutHash == 0xffffffff) {
    this->CachedLayoutHash = 0;
    iVar4 = (this->Variables).ArrayNum;
    pFVar11 = (this->Variables).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (longlong)iVar4 * 0xc;
    while( true ) {
      if ((this->Variables).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar1) break;
      uVar5 = *(undefined8 *)pFVar11;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
      uVar6 = (int)((ulonglong)uVar5 >> 0x20) + uVar6;
      pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar11 + 8));
      uVar3 = pFVar7->UnderlyingType;
      bVar2 = pFVar7->Flags;
      uVar10 = pFVar7->UnderlyingTypePathNameHash - (uint)uVar3 ^ (uint)(uVar3 >> 0xd);
      uVar8 = (-0x61c88647 - uVar10) - (uint)uVar3 ^ uVar10 << 8;
      uVar12 = (uVar3 - uVar8) - uVar10 ^ uVar8 >> 0xd;
      uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 0xc;
      uVar8 = (uVar8 - uVar10) - uVar12 ^ uVar10 << 0x10;
      uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 >> 5;
      uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 3;
      uVar8 = (uVar8 - uVar10) - uVar12 ^ uVar10 << 10;
      uVar8 = (uVar12 - uVar8) - uVar10 ^ uVar8 >> 0xf;
      iVar9 = uVar8 - bVar2;
      uVar10 = iVar9 * 0x100 ^ 0x9e3779b9 - uVar8;
      uVar12 = (((uint)bVar2 + (uint)bVar2) - uVar10) - uVar8 ^ uVar10 >> 0xd;
      uVar8 = (iVar9 - uVar12) - uVar10 ^ uVar12 >> 0xc;
      uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 0x10;
      uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar10 >> 5;
      uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar12 >> 3;
      uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 10;
      uVar12 = ((uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
      uVar8 = (-0x61c88647 - uVar6) - uVar12 ^ uVar12 << 8;
      uVar10 = (uVar6 - uVar8) - uVar12 ^ uVar8 >> 0xd;
      uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xc;
      uVar6 = (uVar8 - uVar12) - uVar10 ^ uVar12 << 0x10;
      uVar8 = (uVar10 - uVar6) - uVar12 ^ uVar6 >> 5;
      uVar10 = (uVar12 - uVar8) - uVar6 ^ uVar8 >> 3;
      uVar6 = (uVar6 - uVar10) - uVar8 ^ uVar10 << 10;
      uVar10 = (uVar8 - uVar6) - uVar10 ^ uVar6 >> 0xf;
      uVar8 = this->CachedLayoutHash - uVar10 ^ uVar10 >> 0xd;
      uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
      uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xd;
      uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
      uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
      uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
      uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
      uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
      this->CachedLayoutHash = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
      pFVar11 = pFVar11 + 0xc;
    }
    return this->CachedLayoutHash;
  }
  return this->CachedLayoutHash;
}

// FNiagaraDataSetCompiledData @ 149212940

FNiagaraDataSetCompiledData * __thiscall
FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(FNiagaraDataSetCompiledData *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_10;
  
  piVar1 = &(this->Variables).ArrayMax;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VariableLayouts).ArrayMax;
  *piVar1 = 0;
  (this->VariableLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableLayouts).ArrayNum = 0;
  *piVar2 = 0;
  (this->ID).Name.ComparisonIndex = 0;
  (this->ID).Name.Number = 0;
  (this->ID).Type = Event;
  this->bRequiresPersistentIDs = 0;
  this->CachedLayoutHash = 0xffffffff;
  this->TotalFloatComponents = 0;
  this->TotalInt32Components = 0;
  this->TotalHalfComponents = 0;
  (this->Variables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)(this->VariableLayouts).AllocatorInstance.Data,
             (this->VariableLayouts).ArrayNum);
  (this->VariableLayouts).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->VariableLayouts).AllocatorInstance,0,piVar2);
  }
  (this->ID).Name.ComparisonIndex = 0;
  (this->ID).Name.Number = 0;
  this->SimTarget = CPUSim;
  local_10 = CONCAT31(local_10._1_3_,2);
  *(undefined4 *)&(this->ID).Type = local_10;
  return this;
}

// BuildLayout @ 14921fb60

void __thiscall FNiagaraDataSetCompiledData::BuildLayout(FNiagaraDataSetCompiledData *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  UScriptStruct *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)(this->VariableLayouts).AllocatorInstance.Data,
             (this->VariableLayouts).ArrayNum);
  piVar1 = &(this->VariableLayouts).ArrayMax;
  (this->VariableLayouts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->VariableLayouts).AllocatorInstance,0,piVar1);
  }
  this->TotalFloatComponents = 0;
  this->TotalInt32Components = 0;
  this->TotalHalfComponents = 0;
  iVar2 = (this->Variables).ArrayNum;
  pFVar11 = (this->Variables).AllocatorInstance.Data;
  local_res10 = pFVar11 + (longlong)iVar2 * 0xc;
  do {
    pFVar9 = local_res10;
    if ((this->Variables).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar9) {
      GetLayoutHash(this);
      return;
    }
    uVar6 = (this->VariableLayouts).ArrayNum;
    if (uVar6 == *piVar1) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->VariableLayouts).AllocatorInstance,piVar1);
    }
    (this->VariableLayouts).ArrayNum = uVar6 + 1;
    DefaultConstructItems<FNiagaraVariableLayoutInfo,int>
              ((this->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20,1);
    uVar7 = 0;
    if ((int)uVar6 < (this->VariableLayouts).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = (this->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar11 + 8));
    pUVar10 = FNiagaraTypeDefinition::IntStruct;
    if (this_00->UnderlyingType != 3) {
      if ((this_00->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar8 = Z_Construct_UClass_UStruct_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
        if (bVar5) {
          pUVar10 = (UScriptStruct *)(this_00->ClassStructOrEnum).field0_0x0.DebugPtr;
          goto LAB_14921fcc2;
        }
      }
      pUVar10 = (UScriptStruct *)0x0;
    }
LAB_14921fcc2:
    if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14921fcea:
      pUVar10 = (UScriptStruct *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) goto LAB_14921fcea;
    }
    FNiagaraTypeLayoutInfo::GenerateLayoutInfo((FNiagaraTypeLayoutInfo *)(pFVar9 + 8),pUVar10);
    uVar6 = this->TotalFloatComponents;
    if ((0xffff < uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset <= TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetCompiledData.h"
                           ,0x1f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(short *)pFVar9 = (short)uVar6;
    uVar6 = this->TotalInt32Components;
    if ((0xffff < uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset <= TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetCompiledData.h"
                           ,0x20,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(short *)(pFVar9 + 2) = (short)uVar6;
    uVar6 = this->TotalHalfComponents;
    if ((0xffff < uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset <= TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetCompiledData.h"
                           ,0x21,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(short *)(pFVar9 + 4) = (short)uVar6;
    this->TotalFloatComponents = this->TotalFloatComponents + (uint)*(ushort *)(pFVar9 + 8);
    this->TotalInt32Components = this->TotalInt32Components + (uint)*(ushort *)(pFVar9 + 10);
    this->TotalHalfComponents = this->TotalHalfComponents + (uint)*(ushort *)(pFVar9 + 0xc);
    pFVar11 = pFVar11 + 0xc;
  } while( true );
}

// Empty @ 14922cfd0

void __thiscall FNiagaraDataSetCompiledData::Empty(FNiagaraDataSetCompiledData *this)

{
  int *piVar1;
  undefined4 local_10;
  
  this->bRequiresPersistentIDs = 0;
  piVar1 = &(this->Variables).ArrayMax;
  this->CachedLayoutHash = 0xffffffff;
  this->TotalFloatComponents = 0;
  this->TotalInt32Components = 0;
  this->TotalHalfComponents = 0;
  (this->Variables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)(this->VariableLayouts).AllocatorInstance.Data,
             (this->VariableLayouts).ArrayNum);
  piVar1 = &(this->VariableLayouts).ArrayMax;
  (this->VariableLayouts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->VariableLayouts).AllocatorInstance,0,piVar1);
  }
  (this->ID).Name.ComparisonIndex = 0;
  (this->ID).Name.Number = 0;
  this->SimTarget = CPUSim;
  local_10 = CONCAT31(local_10._1_3_,2);
  *(undefined4 *)&(this->ID).Type = local_10;
  return;
}

// FindVariableLayoutInfo @ 149230620

FNiagaraVariableLayoutInfo * __thiscall
FNiagaraDataSetCompiledData::FindVariableLayoutInfo
          (FNiagaraDataSetCompiledData *this,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNiagaraVariableLayoutInfo *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraTypeDefinition *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = (this->Variables).ArrayNum;
  uVar7 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < iVar9) {
        uVar3 = uVar8;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNiagaraVariableLayoutInfo *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->Variables).AllocatorInstance.Data + lVar10) == param_1->Name) {
        uVar3 = 0;
        if ((int)uVar7 < (this->Variables).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FNiagaraVariableLayoutInfo *)(*pcVar1)();
          return pFVar4;
        }
        pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)
                            ((this->Variables).AllocatorInstance.Data +
                            (longlong)(int)uVar7 * 0xc + 8));
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
        if ((((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
              (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr) &&
            (pFVar5->UnderlyingType == pFVar6->UnderlyingType)) && (pFVar5->Flags == pFVar6->Flags))
        {
          uVar3 = 0;
          if ((int)uVar7 < (this->VariableLayouts).ArrayNum) {
            uVar3 = uVar8;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FNiagaraVariableLayoutInfo *)(*pcVar1)();
            return pFVar4;
          }
          return (FNiagaraVariableLayoutInfo *)
                 ((this->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        }
      }
      iVar9 = (this->Variables).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((int)uVar7 < iVar9);
  }
  return (FNiagaraVariableLayoutInfo *)0x0;
}

