// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FOpenGLVertexDeclarationKey @ 145be5990

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLVertexDeclarationKey * __thiscall
FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey
          (FOpenGLVertexDeclarationKey *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  TTypeCompatibleBytes<FOpenGLVertexElement> *pTVar1;
  byte bVar2;
  code *pcVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FOpenGLVertexDeclarationKey *pFVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  FIdentityFunctor local_res8;
  uchar local_48;
  uchar uStack_47;
  uchar uStack_46;
  uchar uStack_45;
  uint uStack_44;
  uint uStack_40;
  uchar uStack_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  uint local_38;
  uint uStack_34;
  uchar local_30;
  undefined3 uStack_2f;
  
  (this->VertexElements).ArrayMax = 0x11;
  (this->VertexElements).ArrayNum = 0;
  uVar10 = 0;
  this->StreamStrides[0] = 0;
  this->StreamStrides[1] = 0;
  this->StreamStrides[2] = 0;
  this->StreamStrides[3] = 0;
  this->StreamStrides[4] = 0;
  this->StreamStrides[5] = 0;
  this->StreamStrides[6] = 0;
  this->StreamStrides[7] = 0;
  uVar11 = 0;
  this->StreamStrides[8] = 0;
  this->StreamStrides[9] = 0;
  this->StreamStrides[10] = 0;
  this->StreamStrides[0xb] = 0;
  this->StreamStrides[0xc] = 0;
  this->StreamStrides[0xd] = 0;
  this->StreamStrides[0xe] = 0;
  this->StreamStrides[0xf] = 0;
  this->StreamStrides[0x10] = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    local_res8 = (FIdentityFunctor)0x0;
    puVar9 = (param_1->AllocatorInstance).InlineData[0].Pad + 6;
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
        pFVar8 = (FOpenGLVertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      uStack_44 = (uint)((TTypeCompatibleBytes<FVertexElement> *)(puVar9 + -6))->Pad[0];
      uStack_40 = (uint)puVar9[-5];
      _local_30 = _local_30 & 0xffffff;
      local_38 = (uint)(*(short *)puVar9 != 0);
      _local_30 = CONCAT11(puVar9[-3],local_30);
      uStack_34 = (uint)*(ushort *)(puVar9 + -2);
      sVar4 = (short)(_local_30 >> 8);
      switch(puVar9[-4]) {
      case '\x01':
        local_48 = '\x06';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x01';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x02':
        local_48 = '\x06';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x03':
        local_48 = '\x06';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x03';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x04':
        local_48 = '\x06';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x05':
        local_48 = '\0';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x06':
        local_48 = '\x01';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
        break;
      case '\a':
        local_48 = '\x01';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\b':
        local_48 = '\x01';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = 0xe1;
        uStack_3b = 0x80;
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\t':
        local_48 = '\x02';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
        break;
      case '\n':
        local_48 = '\x02';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
        break;
      case '\v':
        local_48 = '\x02';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\f':
        local_48 = '\v';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\r':
        local_48 = '\v';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x0e':
        local_48 = '\x02';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x0f':
        local_48 = '\x03';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
        break;
      case '\x10':
        local_48 = '\x03';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
        break;
      case '\x11':
        local_48 = '\x03';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x02';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x12':
        local_48 = '\x03';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x13':
        local_48 = 'h';
        uStack_47 = 0x83;
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x04';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        local_30 = '\x01';
        _local_30 = CONCAT12(1,_local_30);
        _local_30 = (uint)_local_30;
        break;
      case '\x14':
        local_48 = '\x05';
        uStack_47 = '\x14';
        uStack_46 = '\0';
        uStack_45 = '\0';
        uStack_3c = '\x01';
        uStack_3b = '\0';
        uStack_3a = '\0';
        uStack_39 = '\0';
        _local_30 = sVar4 << 8;
        _local_30 = (uint)_local_30;
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
          pFVar8 = (FOpenGLVertexDeclarationKey *)(*pcVar3)();
          return pFVar8;
        }
        UE::Logging::Private::BasicFatalLog
                  (&`public:___cdecl_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey(TArray<FVertexElement,TFixedAllocator<17>_>_const&___ptr64)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      bVar2 = ((TTypeCompatibleBytes<FVertexElement> *)(puVar9 + -6))->Pad[0];
      if (((uVar10 & 0xffff) >> (bVar2 & 0x1f) & 1) == 0) {
        this->StreamStrides[bVar2] = *(ushort *)(puVar9 + -2);
        uVar10 = uVar10 & 0xffff | 1 << (bVar2 & 0x1f);
      }
      else if ((this->StreamStrides[bVar2] != *(ushort *)(puVar9 + -2)) &&
              (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<2153552947890356307>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                                  ,0x53,"StreamStrides[Element.StreamIndex] == Element.Stride"),
              bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FOpenGLVertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      if (((this <= (FOpenGLVertexDeclarationKey *)&stack0xffffffffffffffb8) &&
          (&stack0xffffffffffffffb8 <
           (this->VertexElements).AllocatorInstance.InlineData + (this->VertexElements).ArrayMax))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FOpenGLVertexDeclarationKey *)(*pcVar3)();
        return pFVar8;
      }
      iVar7 = (this->VertexElements).ArrayNum;
      if (iVar7 == (this->VertexElements).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_>
                          (0x41c,(ForElementType<FOpenGLVertexElement> *)this,
                           &(this->VertexElements).ArrayMax);
      }
      (this->VertexElements).ArrayNum = iVar7 + 1;
      local_res8 = (FIdentityFunctor)((char)local_res8 + '\x01');
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 8;
      pTVar1 = (this->VertexElements).AllocatorInstance.InlineData + iVar7;
      *(ulonglong *)pTVar1->Pad = CONCAT44(uStack_44,_local_48);
      *(ulonglong *)(pTVar1->Pad + 8) = CONCAT44(_uStack_3c,uStack_40);
      *(ulonglong *)((this->VertexElements).AllocatorInstance.InlineData[iVar7].Pad + 0x10) =
           CONCAT44(uStack_34,local_38);
      *(uint *)((this->VertexElements).AllocatorInstance.InlineData[iVar7].Pad + 0x18) = _local_30;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar7);
  }
  AlgoImpl::
  StableSortInternal<FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
            ((FOpenGLVertexElement *)this,(this->VertexElements).ArrayNum,local_res8,
             (FCompareFOpenGLVertexElement)local_res8);
  uVar10 = FCrc::MemCrc_DEPRECATED(this,(this->VertexElements).ArrayNum * 0x1c,0);
  this->Hash = uVar10;
  uVar10 = FCrc::MemCrc_DEPRECATED(this->StreamStrides,0x22,uVar10);
  this->Hash = uVar10;
  return this;
}

