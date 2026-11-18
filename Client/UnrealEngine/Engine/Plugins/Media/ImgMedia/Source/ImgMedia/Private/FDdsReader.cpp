// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// ReadHeaderAndPrepare @ 14ea57f00

/* WARNING: Enum "EDDSError": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> __thiscall
FDdsReader::ReadHeaderAndPrepare(FDdsReader *this)

{
  int iVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  long64 lVar6;
  ulong64 uVar7;
  FDDSFile *pFVar8;
  TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> TVar9;
  longlong lVar10;
  FDDSFile *in_RDX;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  EDDSError local_res18 [4];
  ForAnyElementType local_58;
  long64 lStack_50;
  long64 local_48 [2];
  
  lVar12 = 0;
  pFVar2 = (this->ArFileReader).Ptr;
  local_48[0] = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  lStack_50 = 0;
  if (pFVar2 != (FArchive *)0x0) {
    uVar5 = (**(code **)(*(longlong *)pFVar2 + 0x30))();
    lVar6 = UE::DDS::GetDDSHeaderMinimalSize();
    if (lVar6 < (longlong)uVar5) {
      uVar7 = UE::DDS::GetDDSHeaderMaximalSize();
      if ((longlong)uVar5 < (longlong)uVar7) {
        uVar7 = uVar5;
      }
      if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar7);
      }
      if (local_48[0] < (longlong)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,uVar7,&local_58,0,local_48);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar7,&local_58,&lStack_50,local_48);
      pFVar2 = (this->ArFileReader).Ptr;
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_58.Data,lStack_50);
      pFVar8 = UE::DDS::FDDSFile::CreateFromDDSInMemory
                         ((uchar *)local_58.Data,lStack_50,local_res18,HeaderWithMipInfo);
      if (pFVar8 != (FDDSFile *)0x0) {
        lVar10 = (**(code **)(*(longlong *)(this->ArFileReader).Ptr + 0x30))();
        iVar1 = (pFVar8->Mips).ArrayNum;
        pFVar13 = (pFVar8->Mips).AllocatorInstance.Data;
        pFVar11 = pFVar13 + (longlong)iVar1 * 0x30;
        while( true ) {
          if ((pFVar8->Mips).ArrayNum != iVar1) {
            `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar13 == pFVar11) break;
          lVar12 = lVar12 + *(longlong *)(pFVar13 + 0x20);
          pFVar13 = pFVar13 + 0x30;
        }
        this->StartSeekPos = lVar10 - lVar12;
        *(FDDSFile **)in_RDX = pFVar8;
        goto LAB_14ea58065;
      }
      if ((local_res18[0] == OK) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Error != UE::DDS::EDDSError::OK",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\DdsImgMediaReader.cpp"
                             ,0xbf,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (FDDSFile *)(*pcVar3)();
        return (TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_>)TVar9.Ptr;
      }
      if (((local_res18[0] != NotADDS) && (local_res18[0] != IoError)) &&
         (2 < (byte)LogImgMedia._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_>___cdecl_FDdsReader::ReadHeaderAndPrepare(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      }
    }
  }
  in_RDX->Dimension = 0;
  in_RDX->Width = 0;
LAB_14ea58065:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_>)in_RDX;
}

