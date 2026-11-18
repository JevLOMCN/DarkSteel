// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator<< @ 14737ebd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FArchive * __thiscall
FArchiveGatherExternalActorRefs::operator<<(FArchiveGatherExternalActorRefs *this,UObject **param_1)

{
  TMap<UObject_*,FArchiveGatherExternalActorRefs::EReferenceState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FArchiveGatherExternalActorRefs::EReferenceState,0>_>
  *this_00;
  TWeakObjectPtr<UChildActorComponent,FWeakObjectPtr> *this_01;
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  UClass *pUVar4;
  AActor *this_02;
  UObject *pUVar5;
  FArchive *pFVar6;
  FActorReference *pFVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res8 [8];
  bool local_res10 [8];
  int local_res18 [2];
  UObject **local_38;
  undefined1 *local_30;
  FActorReference local_28;
  
  if ((((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0) ||
      (bVar2 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)*param_1,RF_ArchetypeObject|RF_ClassDefaultObject),
      bVar2)) || ((*(uint *)&(*param_1)->field_0x8 >> 6 & 1) != 0)) {
    return (FArchive *)this;
  }
  pUVar5 = *param_1;
  this_00 = &this->SubObjectsState;
  local_res8[0] = 0;
  uVar8 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)&(this->SubObjectsState).field_0x8 != *(int *)&(this->SubObjectsState).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SubObjectsState).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SubObjectsState).field_0x38;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->SubObjectsState).field_0x48 - 1U & uVar8)
                               * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)this_00;
      do {
        if (*(UObject **)(lVar10 + (longlong)iVar11 * 0x18) == pUVar5) {
          if ((iVar11 != -1) && (lVar10 = lVar10 + (longlong)iVar11 * 0x18, lVar10 != 0))
          goto LAB_14737ecf3;
          break;
        }
        iVar11 = *(int *)(lVar10 + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  local_30 = local_res8;
  local_38 = param_1;
  TSet<TTuple<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState>,TDefaultMapHashableKeyFuncs<UObject_*,enum_FArchiveGatherExternalActorRefs::EReferenceState,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<UObject_*_const_&,enum_FArchiveGatherExternalActorRefs::EReferenceState_&&>_>
            (this_00,(uint)local_res18,
             (TPairInitializer<UObject_*_const_&,FArchiveGatherExternalActorRefs::EReferenceState_&&>
              *)(ulonglong)uVar8,(bool *)&local_38);
  lVar10 = *(longlong *)this_00 + (longlong)local_res18[0] * 0x18;
LAB_14737ecf3:
  bVar3 = (this->EditorOnlyStack < 1) + 1;
  if (bVar3 <= *(byte *)(lVar10 + 8)) {
    return (FArchive *)this;
  }
  *(byte *)(lVar10 + 8) = bVar3;
  this_02 = (AActor *)*param_1;
  if (this_02 == (AActor *)0x0) {
LAB_14737ed36:
    pUVar4 = AActor::StaticClass();
    this_02 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_02,pUVar4);
    if (this_02 == (AActor *)0x0) goto LAB_14737ee39;
  }
  else {
    pUVar4 = AActor::GetPrivateStaticClass();
    iVar11 = (int)pUVar4->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar4->_padding_)) goto LAB_14737ed36;
  }
  while( true ) {
    this_01 = &this_02->ParentComponent;
    pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    if ((pUVar5 == (UObject *)0x0) || (*(longlong *)&pUVar5[4].field_0x8 == 0)) break;
    this_02 = (AActor *)0x0;
    pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    if (pUVar5 != (UObject *)0x0) {
      this_02 = *(AActor **)&pUVar5[4].field_0x8;
    }
  }
  if ((this_02 == (AActor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TopParentActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActorReferencesUtils.cpp"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FArchive *)(*pcVar1)();
    return pFVar6;
  }
  if (((this->RequiredFlags == RF_NoFlags) ||
      (((EObjectFlags)this_02->_padding_ & this->RequiredFlags) != RF_NoFlags)) &&
     (this_02 != (AActor *)this->Root)) {
    uVar8 = ((uint)((ulonglong)this_02 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_02 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    local_28.Actor = this_02;
    pFVar7 = TSet<ActorsReferencesUtils::FActorReference,FArchiveGatherExternalActorRefs::FActorReferenceKeyFuncs,FDefaultSetAllocator>
             ::FindOrAddByHash<ActorsReferencesUtils::FActorReference_const_&>
                       (this->ActorReferences,uVar8 >> 0x10 ^ uVar8,&local_28,local_res10);
    bVar2 = 0 < this->EditorOnlyStack;
    if (local_res10[0] == false) {
      pFVar7->bIsEditorOnly = bVar2;
    }
    else {
      pFVar7->bIsEditorOnly = (bool)(pFVar7->bIsEditorOnly & bVar2);
    }
  }
LAB_14737ee39:
  if ((this->bRecursive != false) ||
     (bVar2 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)*param_1,this->Root), bVar2)) {
    (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
  }
  return (FArchive *)this;
}

// operator<< @ 14737ee90

FArchive * __thiscall
FArchiveGatherExternalActorRefs::operator<<
          (FArchiveGatherExternalActorRefs *this,FWeakObjectPtr *param_1)

{
  FArchive *pFVar1;
  UObject *local_res18 [2];
  
  local_res18[0] = FWeakObjectPtr::Get(param_1);
  if (local_res18[0] != (UObject *)0x0) {
    pFVar1 = (FArchive *)(**(code **)(this->_padding_ + 0x168))(this,local_res18);
    return pFVar1;
  }
  return (FArchive *)this;
}

// PopSerializedProperty @ 1473ab210

void __thiscall
FArchiveGatherExternalActorRefs::PopSerializedProperty
          (FArchiveGatherExternalActorRefs *this,FProperty *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  FArchive::PopSerializedProperty((FArchive *)this,param_1,param_2);
  piVar1 = &this->EditorOnlyStack;
  *piVar1 = *piVar1 - ((uint)(param_1->PropertyFlags >> 0x23) & 1);
  if (*piVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EditorOnlyStack >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActorReferencesUtils.cpp"
                       ,0x5f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// PushSerializedProperty @ 1473ae490

void __thiscall
FArchiveGatherExternalActorRefs::PushSerializedProperty
          (FArchiveGatherExternalActorRefs *this,FProperty *param_1,bool param_2)

{
  FArchive::PushSerializedProperty((FArchive *)this,param_1,param_2);
  this->EditorOnlyStack = this->EditorOnlyStack + ((uint)(param_1->PropertyFlags >> 0x23) & 1);
  return;
}

