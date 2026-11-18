// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// PostTask @ 146933650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
::PostTask(TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = FMovieSceneTracksComponentTypes::Get();
  pFVar4 = (this->ReboundMaterials).AllocatorInstance.Data;
  iVar2 = (this->ReboundMaterials).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 2;
  while( true ) {
    if ((this->ReboundMaterials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FEntityManager::AddComponent
              (&this->Linker->EntityManager,(FMovieSceneEntityID)*(ushort *)pFVar4,
               (FComponentTypeID)(pFVar3->Tags).BoundMaterialChanged.Value);
    pFVar4 = pFVar4 + 2;
  }
  return;
}

