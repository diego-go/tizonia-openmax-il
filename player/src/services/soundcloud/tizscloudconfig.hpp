/**
 * Copyright (C) 2011-2015 Aratelia Limited - Juan A. Rubio
 *
 * This file is part of Tizonia
 *
 * Tizonia is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Tizonia is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tizonia.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file   tizscloudconfig.hpp
 * @author Juan A. Rubio <juan.rubio@aratelia.com>
 *
 * @brief  SoundCloud client graph configuration
 *
 *
 */

#ifndef TIZSCLOUDCONFIG_HPP
#define TIZSCLOUDCONFIG_HPP

#include <string>

#include <OMX_TizoniaExt.h>

#include "tizgraphtypes.hpp"
#include "tizgraphconfig.hpp"

namespace tiz
{
  namespace graph
  {
    class scloudconfig : public config
    {

    public:
      scloudconfig (const tizplaylist_ptr_t &playlist, const std::string &user,
                    const std::string &pass, const std::string &device_id,
                    const OMX_TIZONIA_AUDIO_SCLOUDPLAYLISTTYPE playlist_type,
                    const bool is_all_access_search = false)
        : config (playlist),
          user_ (user),
          pass_ (pass),
          device_id_ (device_id),
          playlist_type_ (playlist_type),
          is_all_access_search_ (is_all_access_search)
      {
      }

      ~scloudconfig ()
      {
      }

      std::string get_user_name () const
      {
        return user_;
      }

      std::string get_user_pass () const
      {
        return pass_;
      }

      std::string get_device_id () const
      {
        return device_id_;
      }

      OMX_TIZONIA_AUDIO_SCLOUDPLAYLISTTYPE get_playlist_type () const
      {
        return playlist_type_;
      }

      bool is_all_access_search () const
      {
        return is_all_access_search_;
      }

    protected:
      const std::string user_;
      const std::string pass_;
      const std::string device_id_;
      const OMX_TIZONIA_AUDIO_SCLOUDPLAYLISTTYPE playlist_type_;
      bool is_all_access_search_;
    };
  }  // namespace graph
}  // namespace tiz

#endif  // TIZSCLOUDCONFIG_HPP
