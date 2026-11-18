// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12VertexDeclarationKey @ 145a903b0

/* WARNING: Enum "Type": Some values do not have unique names */

FD3D12VertexDeclarationKey * __thiscall
FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey
          (FD3D12VertexDeclarationKey *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  TTypeCompatibleBytes<D3D12_INPUT_ELEMENT_DESC> *pTVar1;
  byte bVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FD3D12VertexDeclarationKey *pFVar8;
  uint uVar9;
  uchar *puVar10;
  uint uVar11;
  FIdentityFunctor local_res8;
  undefined1 local_48 [8];
  undefined1 *puStack_40;
  uint local_38;
  uint uStack_34;
  ulonglong uStack_30;
  
  (this->VertexElements).ArrayMax = 0x11;
  uVar11 = 0;
  (this->VertexElements).ArrayNum = 0;
  this->StreamStrides[0] = 0;
  this->StreamStrides[1] = 0;
  this->StreamStrides[2] = 0;
  this->StreamStrides[3] = 0;
  this->StreamStrides[4] = 0;
  this->StreamStrides[5] = 0;
  this->StreamStrides[6] = 0;
  this->StreamStrides[7] = 0;
  this->StreamStrides[8] = 0;
  this->StreamStrides[9] = 0;
  this->StreamStrides[10] = 0;
  this->StreamStrides[0xb] = 0;
  this->StreamStrides[0xc] = 0;
  this->StreamStrides[0xd] = 0;
  this->StreamStrides[0xe] = 0;
  this->StreamStrides[0xf] = 0;
  this->StreamStrides[0x10] = 0;
  uVar9 = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    puVar10 = (param_1->AllocatorInstance).InlineData[0].Pad + 2;
    local_res8 = (FIdentityFunctor)0x0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < iVar7) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FD3D12VertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      local_38 = (uint)((TTypeCompatibleBytes<FVertexElement> *)(puVar10 + -2))->Pad[0];
      uStack_34 = (uint)puVar10[-1];
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      puStack_40 = (undefined1 *)0x0;
      uStack_30._0_1_ = '\0';
      uStack_30._1_1_ = '\0';
      uStack_30._2_1_ = '\0';
      uStack_30._3_1_ = '\0';
      uStack_30._4_1_ = '\0';
      uStack_30._5_1_ = '\0';
      uStack_30._6_1_ = '\0';
      uStack_30._7_1_ = '\0';
      switch(*puVar10) {
      case '\x01':
        puStack_40 = (undefined1 *)0x2900000000;
        break;
      case '\x02':
        puStack_40 = (undefined1 *)0x1000000000;
        break;
      case '\x03':
        puStack_40 = (undefined1 *)0x600000000;
        break;
      case '\x04':
        puStack_40 = (undefined1 *)0x200000000;
        break;
      case '\x05':
        puStack_40 = (undefined1 *)0x1f00000000;
        break;
      case '\x06':
        puStack_40 = (undefined1 *)0x1e00000000;
        break;
      case '\a':
        puStack_40 = (undefined1 *)0x1c00000000;
        break;
      case '\b':
        puStack_40 = (undefined1 *)0x5700000000;
        break;
      case '\t':
        puStack_40 = (undefined1 *)0x2600000000;
        break;
      case '\n':
        puStack_40 = (undefined1 *)0xe00000000;
        break;
      case '\v':
        puStack_40 = (undefined1 *)0x2500000000;
        break;
      case '\f':
        puStack_40 = (undefined1 *)0x2200000000;
        break;
      case '\r':
        puStack_40 = &DAT_a00000000;
        break;
      case '\x0e':
        puStack_40 = (undefined1 *)0xd00000000;
        break;
      case '\x0f':
        puStack_40 = (undefined1 *)0x2400000000;
        break;
      case '\x10':
        puStack_40 = (undefined1 *)0xc00000000;
        break;
      case '\x11':
        puStack_40 = (undefined1 *)0x2300000000;
        break;
      case '\x12':
        puStack_40 = (undefined1 *)0xb00000000;
        break;
      case '\x13':
        puStack_40 = (undefined1 *)0x1800000000;
        break;
      case '\x14':
        puStack_40 = (undefined1 *)0x2a00000000;
        break;
      default:
        uVar6 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FD3D12VertexDeclarationKey *)(*pcVar3)();
          return pFVar8;
        }
        UE::Logging::Private::BasicFatalLog
                  (&`public:___cdecl_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey(TArray<FVertexElement,TFixedAllocator<17>_>_const&___ptr64)___ptr64'
                    ::__l7::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      bVar2 = ((TTypeCompatibleBytes<FVertexElement> *)(puVar10 + -2))->Pad[0];
      puStack_40 = (undefined1 *)CONCAT44(puStack_40._4_4_,(uint)puVar10[1]);
      uStack_30 = (ulonglong)
                  CONCAT14(*(short *)(puVar10 + 4) != 0,(uint)(*(short *)(puVar10 + 4) != 0));
      if (((uVar9 & 0xffff) >> (bVar2 & 0x1f) & 1) == 0) {
        this->StreamStrides[bVar2] = *(ushort *)(puVar10 + 2);
        uVar9 = uVar9 & 0xffff | 1 << (bVar2 & 0x1f);
      }
      else if ((this->StreamStrides[bVar2] != *(ushort *)(puVar10 + 2)) &&
              (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<2065747499779358791>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12VertexDeclaration.cpp"
                                  ,0x47,"StreamStrides[Element.StreamIndex] == Element.Stride"),
              bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FD3D12VertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      if (((this <= (FD3D12VertexDeclarationKey *)local_48) &&
          (local_48 <
           (this->VertexElements).AllocatorInstance.InlineData + (this->VertexElements).ArrayMax))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FD3D12VertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      iVar7 = (this->VertexElements).ArrayNum;
      if (iVar7 == (this->VertexElements).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
                          (0x820,(ForElementType<D3D12_INPUT_ELEMENT_DESC> *)this,
                           &(this->VertexElements).ArrayMax);
      }
      (this->VertexElements).ArrayNum = iVar7 + 1;
      local_res8 = (FIdentityFunctor)((char)local_res8 + '\x01');
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 8;
      pTVar1 = (this->VertexElements).AllocatorInstance.InlineData + iVar7;
      *(undefined1 (*) [8])pTVar1->Pad = local_48;
      *(undefined1 **)(pTVar1->Pad + 8) = puStack_40;
      puVar4 = (this->VertexElements).AllocatorInstance.InlineData[iVar7].Pad;
      *(ulonglong *)(puVar4 + 0x10) = CONCAT44(uStack_34,local_38);
      *(ulonglong *)(puVar4 + 0x18) = uStack_30;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar7);
  }
  AlgoImpl::
  IntroSortInternal<D3D12_INPUT_ELEMENT_DESC,int,FIdentityFunctor,_FD3D12VertexDeclarationKey::FD3D12VertexDeclarationKey_::__l2::FCompareDesc>
            ((D3D12_INPUT_ELEMENT_DESC *)this,(this->VertexElements).ArrayNum,local_res8,
             (FCompareDesc)local_res8);
  uVar11 = FCrc::MemCrc_DEPRECATED(this,(this->VertexElements).ArrayNum << 5,0);
  this->Hash = uVar11;
  this->HashNoStrides = uVar11;
  uVar11 = FCrc::MemCrc_DEPRECATED(this->StreamStrides,0x22,uVar11);
  iVar7 = (this->VertexElements).ArrayNum;
  uVar9 = 0;
  this->Hash = uVar11;
  pFVar8 = this;
  if (0 < iVar7) {
    do {
      uVar11 = 0;
      if ((int)uVar9 < iVar7) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FD3D12VertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      *(char **)(pFVar8->VertexElements).AllocatorInstance.InlineData[0].Pad = "ATTRIBUTE";
      uVar9 = uVar9 + 1;
      iVar7 = (this->VertexElements).ArrayNum;
      pFVar8 = (FD3D12VertexDeclarationKey *)
               ((pFVar8->VertexElements).AllocatorInstance.InlineData + 1);
    } while ((int)uVar9 < iVar7);
  }
  return this;
}

