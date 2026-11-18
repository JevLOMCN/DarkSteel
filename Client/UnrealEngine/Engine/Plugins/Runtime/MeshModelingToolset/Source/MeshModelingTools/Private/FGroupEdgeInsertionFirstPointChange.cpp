// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// Apply @ 14cd5a800

void __thiscall
FGroupEdgeInsertionFirstPointChange::Apply
          (FGroupEdgeInsertionFirstPointChange *this,UObject *param_1)

{
  return;
}

// HasExpired @ 14cd6fab0

bool __thiscall
FGroupEdgeInsertionFirstPointChange::HasExpired
          (FGroupEdgeInsertionFirstPointChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UPolyEditInsertEdgeActivity::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cd6faea;
  }
  param_1 = (UObject *)0x0;
LAB_14cd6faea:
  if (((this->bHaveDoneUndo == false) && (*(int *)&param_1[0x1c].field_0x18 == this->ChangeStamp))
     && (*(int *)&param_1[0x1b].field_0x18 != 0)) {
    return false;
  }
  return true;
}

// Revert @ 14cd7b290

void __thiscall
FGroupEdgeInsertionFirstPointChange::Revert
          (FGroupEdgeInsertionFirstPointChange *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UPolyEditInsertEdgeActivity::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14cd7b2d2;
  }
  param_1 = (UObject *)0x0;
LAB_14cd7b2d2:
  if ((*(int *)&param_1[0x1b].field_0x18 != 1) && (*(int *)&param_1[0x1b].field_0x18 != 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Activity->ToolState == UPolyEditInsertEdgeActivity::EState::GettingEnd || Activity->ToolState == UPolyEditInsertEdgeActivity::EState::WaitingForInsertComplete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                       ,0x3a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined4 *)&param_1[0x1b].field_0x18 = 0;
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            (*(UMeshOpPreviewWithBackgroundCompute **)(lVar2 + 0x40));
  UPreviewMesh::UpdatePreview
            (*(UPreviewMesh **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x40) + 0x68),
             *(FDynamicMesh3 **)(*(longlong *)(param_1 + 2) + 0x30),FullUpdate,AllVertexAttribs);
  param_1[0x1b].field_0x1c = 1;
  *(undefined4 *)&param_1[5].field_0x10 = 0;
  if (*(int *)&param_1[5].field_0x14 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&param_1[5].field_0x8,0,(int *)&param_1[5].field_0x14);
  }
  *(undefined4 *)&param_1[5].field_0x20 = 0;
  if (*(int *)&param_1[5].field_0x24 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&param_1[5].field_0x18,0,(int *)&param_1[5].field_0x24)
    ;
  }
  if (*(int *)&param_1[0x1b].field_0x18 == 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8292026993105436315>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                       ,0x165,"ToolState != EState::GettingEnd");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&param_1[0x1b].field_0x18 = 0;
  }
  this->bHaveDoneUndo = true;
  return;
}

// ToString @ 14cd81ed0

FString * __thiscall
FGroupEdgeInsertionFirstPointChange::ToString
          (FGroupEdgeInsertionFirstPointChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGroupEdgeInsertionFirstPointChange");
  return __return_storage_ptr__;
}

