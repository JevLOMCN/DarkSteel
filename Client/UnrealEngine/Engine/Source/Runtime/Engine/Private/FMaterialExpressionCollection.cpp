// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1472881f0

UScriptStruct * __cdecl FMaterialExpressionCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialExpressionCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialExpressionCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialExpressionCollection,(UObject *)pUVar1,
                         L"MaterialExpressionCollection");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialExpressionCollection.OuterSingleton;
}

// AddComment @ 148affd50

void __thiscall
FMaterialExpressionCollection::AddComment
          (FMaterialExpressionCollection *this,UMaterialExpressionComment *param_1)

{
  TObjectPtr<UMaterialExpressionComment>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialExpressionComment *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMaterialExpressionComment>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UMaterialExpressionComment>_>
            (&this->EditorComments,
             (TObjectPtr<UMaterialExpressionComment> *)&local_res8[0].ObjectPtr);
  return;
}

// AddExpression @ 148affd90

void __thiscall
FMaterialExpressionCollection::AddExpression
          (FMaterialExpressionCollection *this,UMaterialExpression *param_1)

{
  TObjectPtr<UMaterialExpression>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialExpression *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMaterialExpression>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UMaterialExpression>_>
            (&this->Expressions,(TObjectPtr<UMaterialExpression> *)&local_res8[0].ObjectPtr);
  return;
}

// Empty @ 148b00480

void __thiscall FMaterialExpressionCollection::Empty(FMaterialExpressionCollection *this)

{
  int *piVar1;
  
  piVar1 = &(this->Expressions).ArrayMax;
  (this->Expressions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->EditorComments).ArrayMax;
  (this->EditorComments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EditorComments).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveComment @ 148b035f0

void __thiscall
FMaterialExpressionCollection::RemoveComment
          (FMaterialExpressionCollection *this,UMaterialExpressionComment *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialExpressionComment *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMaterialExpressionComment *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialExpressionComment *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->EditorComments).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->EditorComments).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->EditorComments).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->EditorComments).AllocatorInstance.Data;
    bVar4 = *(UMaterialExpressionComment **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMaterialExpressionComment **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->EditorComments).ArrayNum = iVar9;
  }
  return;
}

// RemoveExpression @ 148b03780

void __thiscall
FMaterialExpressionCollection::RemoveExpression
          (FMaterialExpressionCollection *this,UMaterialExpression *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialExpression *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMaterialExpression *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialExpression *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Expressions).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Expressions).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Expressions).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Expressions).AllocatorInstance.Data;
    bVar4 = *(UMaterialExpression **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMaterialExpression **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Expressions).ArrayNum = iVar9;
  }
  return;
}

