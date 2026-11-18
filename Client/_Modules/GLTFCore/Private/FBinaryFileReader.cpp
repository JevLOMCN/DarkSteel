// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 2

// FBinaryFileReader @ 14e629e50

FBinaryFileReader * __thiscall GLTF::FBinaryFileReader::FBinaryFileReader(FBinaryFileReader *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->JsonChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonChunk).ArrayNum = 0;
  (this->JsonChunk).ArrayMax = 0;
  this->BinChunk = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0;
  return this;
}

// ReadFile @ 14e647b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall GLTF::FBinaryFileReader::ReadFile(FBinaryFileReader *this,FArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  FText *pFVar11;
  uint uVar12;
  uint uVar13;
  bool local_res8 [16];
  uint local_res18 [2];
  int local_res20 [2];
  int local_58;
  uint local_54;
  int local_50 [2];
  FText local_48;
  
  if (this->BinChunk == (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3210034397839360147>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFBinaryReader.cpp"
                       ,0x93,"BinChunk");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else {
    DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
              ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)this->_padding_);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    uVar10 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    if (0xb < (longlong)uVar10) {
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res20,0xffffffff);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,&local_58,0xffffffff);
      (**(code **)(*(longlong *)param_1 + 0x198))(param_1,&local_54);
      if (((local_res20[0] == 0x46546c67) && (local_58 == 2)) && (local_54 == uVar10)) {
        piVar1 = &(this->JsonChunk).ArrayMax;
        (this->JsonChunk).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->JsonChunk).AllocatorInstance,0,piVar1);
        }
        pTVar3 = this->BinChunk;
        pTVar3->ArrayNum = 0;
        if (pTVar3->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
        }
        uVar8 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        uVar12 = uVar8 + 3 & 0xfffffffc;
        if (uVar8 != uVar12) {
          (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar12);
        }
        (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res18,0xffffffff);
        (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_50,0xffffffff);
        iVar9 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
        uVar13 = (-8 - uVar12) + iVar9;
        uVar8 = uVar13 - (local_res18[0] + 3 & 0xfffffffc);
        local_res8[0] = 7 < uVar8;
        if (local_res18[0] <= uVar13) {
          if (local_50[0] == 0x4e4f534a) {
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      (&this->JsonChunk,local_res18[0],Default);
            (**(code **)(*(longlong *)param_1 + 0x188))
                      (param_1,(this->JsonChunk).AllocatorInstance.Data,local_res18[0]);
            if (7 < uVar8) {
              while( true ) {
                bVar6 = GLTF::`anonymous_namespace'::ReadBinChunk
                                  (param_1,"BIN",local_res8,this->BinChunk);
                if (bVar6) break;
                if (local_res8[0] == false) {
                  return 0 < (this->JsonChunk).ArrayNum;
                }
              }
            }
          }
          else {
            (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_res18[0] + 8 + uVar12);
          }
        }
        return 0 < (this->JsonChunk).ArrayNum;
      }
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"InterchangeGLTFBinaryReader",L"InvalidHeader",
                         L"Invalid GLTF header!");
    iVar9 = (int)this->_padding_;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar4 = this->_padding_;
    lVar2 = (longlong)iVar9 * 3 + 1;
    *(undefined4 *)(lVar4 + -8 + lVar2 * 8) = 2;
    FText::FText((FText *)(lVar4 + lVar2 * 8),pFVar11);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

