// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// StaticStruct @ 14acdd5b0

UScriptStruct * __cdecl FSpriteInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpriteInstanceData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FSpriteInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpriteInstanceData,(UObject *)pUVar1,
                         L"SpriteInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSpriteInstanceData.OuterSingleton;
}

// FSpriteInstanceData @ 14ace9bd0

FSpriteInstanceData * __thiscall
FSpriteInstanceData::FSpriteInstanceData(FSpriteInstanceData *this,FSpriteInstanceData *param_1)

{
  UPaperSprite *pUVar1;
  double dVar2;
  
  dVar2 = (param_1->Transform).M[0][1];
  (this->Transform).M[0][0] = (param_1->Transform).M[0][0];
  (this->Transform).M[0][1] = dVar2;
  dVar2 = (param_1->Transform).M[0][3];
  (this->Transform).M[0][2] = (param_1->Transform).M[0][2];
  (this->Transform).M[0][3] = dVar2;
  dVar2 = (param_1->Transform).M[1][1];
  (this->Transform).M[1][0] = (param_1->Transform).M[1][0];
  (this->Transform).M[1][1] = dVar2;
  dVar2 = (param_1->Transform).M[1][3];
  (this->Transform).M[1][2] = (param_1->Transform).M[1][2];
  (this->Transform).M[1][3] = dVar2;
  dVar2 = (param_1->Transform).M[2][1];
  (this->Transform).M[2][0] = (param_1->Transform).M[2][0];
  (this->Transform).M[2][1] = dVar2;
  dVar2 = (param_1->Transform).M[2][3];
  (this->Transform).M[2][2] = (param_1->Transform).M[2][2];
  (this->Transform).M[2][3] = dVar2;
  dVar2 = (param_1->Transform).M[3][1];
  (this->Transform).M[3][0] = (param_1->Transform).M[3][0];
  (this->Transform).M[3][1] = dVar2;
  dVar2 = (param_1->Transform).M[3][3];
  (this->Transform).M[3][2] = (param_1->Transform).M[3][2];
  (this->Transform).M[3][3] = dVar2;
  pUVar1 = (param_1->SourceSprite).field0_0x0.DebugPtr;
  (this->SourceSprite).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPaperSprite *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VertexColor).field0_0x0 = (param_1->VertexColor).field0_0x0;
  this->MaterialIndex = param_1->MaterialIndex;
  return this;
}

