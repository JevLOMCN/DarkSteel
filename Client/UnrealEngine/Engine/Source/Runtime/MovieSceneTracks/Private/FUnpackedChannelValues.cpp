// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Add @ 146634700

void __thiscall
UE::MovieScene::FUnpackedChannelValues::Add
          (FUnpackedChannelValues *this,FUnpackedChannelValue *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FName *pFVar3;
  ForElementType<UE::MovieScene::FUnpackedChannelValue> FVar4;
  FName FVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (this->Values).ArrayNum;
  piVar2 = &(this->Values).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FUnpackedChannelValue>_>
                      (0x828,(ForElementType<UE::MovieScene::FUnpackedChannelValue> *)this,piVar2);
  }
  (this->Values).ArrayNum = iVar7 + 1;
  FVar4 = (this->Values).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::MovieScene::FUnpackedChannelValue>)0x0) {
    this = (FUnpackedChannelValues *)FVar4;
  }
  pFVar3 = (FName *)((longlong)this + (longlong)iVar7 * 0x28);
  *pFVar3 = param_1->PropertyPath;
  bVar6 = (byte)pFVar3[4].ComparisonIndex.Value & 0xfe;
  *(byte *)&pFVar3[4].ComparisonIndex.Value = bVar6 | 2;
  if ((param_1->ChannelValue).bIsValid) {
    *(byte *)&pFVar3[4].ComparisonIndex.Value = bVar6 | 3;
    (param_1->ChannelValue).bIsValid = false;
    *(byte *)&pFVar3[4].ComparisonIndex.Value =
         (byte)pFVar3[4].ComparisonIndex.Value ^
         ((param_1->ChannelValue).field_0x18 ^ (byte)pFVar3[4].ComparisonIndex.Value) & 2;
    FVar5 = *(FName *)((param_1->ChannelValue).Data.Pad + 8);
    pFVar3[1] = *(FName *)(param_1->ChannelValue).Data.Pad;
    pFVar3[2] = FVar5;
    pFVar3[3] = *(FName *)((param_1->ChannelValue).Data.Pad + 0x10);
  }
  return;
}

